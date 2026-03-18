/*
 * XREFs of KxTryToAcquireSpinLock @ 0x14032EA48
 * Callers:
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x14032EA30 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     HalpMceHandlerCore @ 0x1404B9404 (HalpMceHandlerCore.c)
 *     IvtHandleInterrupt @ 0x1404DE630 (IvtHandleInterrupt.c)
 *     KdPollBreakIn @ 0x14050FFF0 (KdPollBreakIn.c)
 *     KiProcessNMI @ 0x140510F30 (KiProcessNMI.c)
 *     KeFreezeExecution @ 0x14051BC10 (KeFreezeExecution.c)
 *     EtwpTraceStackKey @ 0x1405AC3AC (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1405AE230 (EtwpCovSampTryAcquireBufferLock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140514E84 (KiTryToAcquireSpinLockInstrumented.c)
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
