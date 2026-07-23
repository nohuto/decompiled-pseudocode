/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x140282240
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14023E408 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C5920 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x140521668 (KiInterruptDispatchCommon.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14057BF60 (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x1408BC3C8 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x1409A116C (HalpMcaInitializePcrContext.c)
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
