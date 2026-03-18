/*
 * XREFs of KeSetCpuSetsProcess @ 0x1403C55C4
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiValidateCpuSetMasks @ 0x1402F803C (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1403C57AC (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiWriteCpuSetMasks @ 0x1403C5934 (KiWriteCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1403C5980 (KiGetProcessCpuSetMaskPointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // r15
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  ULONG_PTR CurrentThread; // rsi
  bool v12; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KPRCB *v17; // rdi
  _DWORD *v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v23; // r8
  __int64 v24; // r8
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-28h] BYREF
  int v31; // [rsp+24h] [rbp-24h] BYREF
  _SINGLE_LIST_ENTRY v32[4]; // [rsp+28h] [rbp-20h] BYREF

  v30 = 0;
  v32[0].Next = 0LL;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v30);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v30, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, v32);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)CurrentPrcb, v32);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    else
    {
      CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
        v17 = KeGetCurrentPrcb();
        v31 = 0;
        while ( 1 )
        {
          v18 = v17->SchedulerAssist;
          if ( v18 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v19 = v18[6];
              v18[6] = v19 + 1;
              if ( v19 == -1 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v20 = v17->SchedulerAssist;
          if ( v20 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v21 = v20[6] - 1;
              v20[6] = v21;
              if ( !v21 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          do
            KeYieldProcessorEx(&v31, v14, v15, v16);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
        {
          v23 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
          NextThread->ReadyTime = v23 + MEMORY[0xFFFFF78000000320];
        }
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v23);
        LOBYTE(v24) = CurrentIrql;
        v12 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v24) == 0;
      }
      else
      {
        v12 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v12 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v12 = (v26[5] & 0xFFFF0003) == 0;
            v26[5] &= 0xFFFF0003;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
