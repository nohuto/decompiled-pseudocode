/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1402C9B50
 * Callers:
 *     PopFxAddLogEntry @ 0x1402C9A9C (PopFxAddLogEntry.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14034DBC8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C2620 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x14051BF78 (KiInterruptDispatchCommon.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405768E0 (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x1408B8D68 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x14099C91C (HalpMcaInitializePcrContext.c)
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
