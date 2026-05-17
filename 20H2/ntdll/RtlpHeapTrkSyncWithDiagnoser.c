/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800FEB38
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800FE840 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800FEA44 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x18009D270 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x18009DC00 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_18016DC28 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
