/*
 * XREFs of PspIoRateEntryDeactivate @ 0x1405CEE88
 * Callers:
 *     PspSetJobIoRateControl @ 0x1405CEB38 (PspSetJobIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x1405CED80 (PspIoRateEntryActivate.c)
 *     PspJobIoRateControlDisable @ 0x140657080 (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControlForVolume @ 0x140906054 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStopIoRateControl @ 0x1402008F4 (IoStopIoRateControl.c)
 *     IoDiskIoAttributionDereference @ 0x14027A2C4 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x14027A6A8 (IoStopDiskIoAttributionForContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  _RTL_BALANCED_NODE *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (_RTL_BALANCED_NODE *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
