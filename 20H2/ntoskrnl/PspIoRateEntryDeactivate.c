/*
 * XREFs of PspIoRateEntryDeactivate @ 0x1405D532C
 * Callers:
 *     PspSetJobIoRateControl @ 0x1405D4FDC (PspSetJobIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x1405D5224 (PspIoRateEntryActivate.c)
 *     PspJobIoRateControlDisable @ 0x14071108C (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControlForVolume @ 0x14090BC74 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStopIoRateControl @ 0x1402008F4 (IoStopIoRateControl.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     IoDiskIoAttributionDereference @ 0x1402EEE34 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402EF218 (IoStopDiskIoAttributionForContext.c)
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
