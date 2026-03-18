/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1402467C0
 * Callers:
 *     PopFxAddLogEntry @ 0x140246704 (PopFxAddLogEntry.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14031E918 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C4D90 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x14051F948 (KiInterruptDispatchCommon.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14057A310 (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x1408BEAC8 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x1409A2A1C (HalpMcaInitializePcrContext.c)
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
