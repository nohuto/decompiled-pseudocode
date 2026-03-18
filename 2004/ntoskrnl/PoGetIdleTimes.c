/*
 * XREFs of PoGetIdleTimes @ 0x140298098
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     ExpQueryProcessorInformationCounters @ 0x1406A6DA0 (ExpQueryProcessorInformationCounters.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x14021E120 (KeAddProcessorAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x1402981D0 (KeGetProcessorIndexFromNumber.c)
 *     PopGetIdleTimesCallback @ 0x140298220 (PopGetIdleTimesCallback.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // bl
  int IdleTimesCallback; // esi
  ULONG v13; // eax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v15; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  _DWORD v20[44]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v20, 0, 0xA8uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  CurrentThread = KeGetCurrentThread();
  v9 = Prcb;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  IdleTimesCallback = PopGetIdleTimesCallback(v9, a2, a3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    v20[0] = 1310721;
    memset(&v20[1], 0, 0xA4uLL);
    v13 = KeGetProcessorIndexFromNumber(ProcNumber);
    KeAddProcessorAffinityEx(v20, v13);
    PopExecuteOnTargetProcessors(v20, PopGetIdleTimesCallback, a2, a3);
  }
  return PopReleaseRwLock(&PpmIdlePolicyLock);
}
