/*
 * XREFs of EtwpCovSampCaptureBufferRelease @ 0x1405A8B58
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1405A8A94 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureSample @ 0x1405A9588 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14093D86C (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x14093E2B0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405A9510 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferRelease(__int64 a1, __int64 a2)
{
  return EtwpCovSampCaptureReleaseToLookaside(a1, *(_QWORD *)(a2 + 48), a2);
}
