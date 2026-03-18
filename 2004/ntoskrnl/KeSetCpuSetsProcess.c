/*
 * XREFs of KeSetCpuSetsProcess @ 0x1403C2E54
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiValidateCpuSetMasks @ 0x14032B988 (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1403C303C (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiWriteCpuSetMasks @ 0x1403C31C4 (KiWriteCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1403C3210 (KiGetProcessCpuSetMaskPointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
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
  ULONG_PTR CurrentThread; // rsi
  bool v14; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KPRCB *v19; // rdi
  _DWORD *v20; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-28h] BYREF
  int v34; // [rsp+24h] [rbp-24h] BYREF
  _QWORD *v35[4]; // [rsp+28h] [rbp-20h] BYREF

  v33 = 0;
  v35[0] = 0LL;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v33);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v33, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, v35);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)CurrentPrcb, v35, v11, v12);
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
        v19 = KeGetCurrentPrcb();
        v34 = 0;
        while ( 1 )
        {
          v20 = v19->SchedulerAssist;
          if ( v20 )
          {
            if ( v19->NestingLevel <= 1u )
            {
              v21 = v20[6];
              v20[6] = v21 + 1;
              if ( v21 == -1 )
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v22 = v19->SchedulerAssist;
          if ( v22 )
          {
            if ( v19->NestingLevel <= 1u )
            {
              v23 = v22[6] - 1;
              v22[6] = v23;
              if ( !v23 )
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          do
            KeYieldProcessorEx(&v34, v16, v17, v18);
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
          v25 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
          NextThread->ReadyTime = v25 + MEMORY[0xFFFFF78000000320];
        }
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, CurrentThread, v25, v26);
        LOBYTE(v27) = CurrentIrql;
        v14 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v27) == 0;
      }
      else
      {
        v14 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v14 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v14 = (v29[5] & 0xFFFF0003) == 0;
            v29[5] &= 0xFFFF0003;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
