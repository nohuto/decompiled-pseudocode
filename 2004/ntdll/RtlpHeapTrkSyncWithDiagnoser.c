/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800FE628
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800FE330 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800FE534 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x18009CFD0 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x18009D960 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_18016BBF8 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
