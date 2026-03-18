/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x140236D20
 * Callers:
 *     PopFxAddLogEntry @ 0x140236C6C (PopFxAddLogEntry.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140310538 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C1760 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x14051B928 (KiInterruptDispatchCommon.c)
 *     PopIdleWakeNotifyWakeSource @ 0x140576290 (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x1408B7A48 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x14099B17C (HalpMcaInitializePcrContext.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcNumber)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ProcNumber )
  {
    ProcNumber->Group = CurrentPrcb->Group;
    *(_WORD *)&ProcNumber->Number = CurrentPrcb->GroupIndex;
  }
  return CurrentPrcb->Number;
}
