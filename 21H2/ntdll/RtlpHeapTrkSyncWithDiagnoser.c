/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800FE9D8
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800FE6E0 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800FE8E4 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x18009D800 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x18009E190 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_18016DC38 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
