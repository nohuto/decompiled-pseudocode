/*
 * XREFs of KxTryToAcquireSpinLock @ 0x1402DA448
 * Callers:
 *     KiProcessNMI @ 0x14029B9A0 (KiProcessNMI.c)
 *     KiGenericCallDpcWorker @ 0x1402D9F70 (KiGenericCallDpcWorker.c)
 *     KeFreezeExecution @ 0x1402DA0F0 (KeFreezeExecution.c)
 *     PopFxComponentRelationsCleanup @ 0x1403B9594 (PopFxComponentRelationsCleanup.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140460FAC (EtwpCovSampTryAcquireBufferLock.c)
 *     HalpHandleMachineCheck @ 0x140506BF4 (HalpHandleMachineCheck.c)
 *     HalpMceHandlerCore @ 0x140507820 (HalpMceHandlerCore.c)
 *     IvtHandleInterrupt @ 0x14052EAA0 (IvtHandleInterrupt.c)
 *     DifKeTryToAcquireSpinLockAtDpcLevelWrapper @ 0x140615F20 (DifKeTryToAcquireSpinLockAtDpcLevelWrapper.c)
 *     EtwpGetCrimsonStackKey @ 0x140633B20 (EtwpGetCrimsonStackKey.c)
 *     EtwpTraceStackKey @ 0x1406342C8 (EtwpTraceStackKey.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x14056E8F8 (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // di
  _DWORD *SchedulerAssist; // rcx
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented(a1);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v6 = SchedulerAssist[6];
      SchedulerAssist[6] = v6 + 1;
      if ( v6 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  v7 = CurrentPrcb->SchedulerAssist;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v8 = v7[6] - 1;
      v7[6] = v8;
      if ( !v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  _mm_pause();
  return v3;
}
