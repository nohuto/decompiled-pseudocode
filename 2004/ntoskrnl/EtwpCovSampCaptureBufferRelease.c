/*
 * XREFs of EtwpCovSampCaptureBufferRelease @ 0x1405A9248
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1405A9184 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureSample @ 0x1405A9C78 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14093EAEC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x14093F530 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405A9C00 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferRelease(__int64 a1, __int64 a2)
{
  return EtwpCovSampCaptureReleaseToLookaside(a1, *(_QWORD *)(a2 + 48), a2);
}
