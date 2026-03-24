/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x140260D70
 * Callers:
 *     PopFxAddLogEntry @ 0x140260CB4 (PopFxAddLogEntry.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402BFFB8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C54F0 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x140521428 (KiInterruptDispatchCommon.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14057BD20 (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x1408BC268 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x1409A023C (HalpMcaInitializePcrContext.c)
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
