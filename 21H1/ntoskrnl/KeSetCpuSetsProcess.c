/*
 * XREFs of KeSetCpuSetsProcess @ 0x1403C1F94
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     KiValidateCpuSetMasks @ 0x140202930 (KiValidateCpuSetMasks.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1403C217C (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiWriteCpuSetMasks @ 0x1403C2304 (KiWriteCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1403C2350 (KiGetProcessCpuSetMaskPointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // r15
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // r9
  ULONG_PTR CurrentThread; // rsi
  bool v15; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KPRCB *v20; // rdi
  _DWORD *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  unsigned int v34; // [rsp+20h] [rbp-28h] BYREF
  int v35; // [rsp+24h] [rbp-24h] BYREF
  _QWORD v36[4]; // [rsp+28h] [rbp-20h] BYREF

  v34 = 0;
  v36[0] = 0LL;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v34);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v34, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, v36);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)CurrentPrcb, v36, v11, v12);
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
        v20 = KeGetCurrentPrcb();
        v35 = 0;
        while ( 1 )
        {
          v21 = v20->SchedulerAssist;
          if ( v21 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v22 = v21[6];
              v21[6] = v22 + 1;
              if ( v22 == -1 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v23 = v20->SchedulerAssist;
          if ( v23 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v24 = v23[6] - 1;
              v23[6] = v24;
              if ( !v24 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          do
            KeYieldProcessorEx(&v35, v17, v18, v19);
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
          v26 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
          NextThread->ReadyTime = v26 + MEMORY[0xFFFFF78000000320];
        }
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v26, v27);
        LOBYTE(v28) = CurrentIrql;
        v15 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v28) == 0;
      }
      else
      {
        v15 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v15 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v15 = (v30[5] & 0xFFFF0003) == 0;
            v30[5] &= 0xFFFF0003;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL, v13);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
