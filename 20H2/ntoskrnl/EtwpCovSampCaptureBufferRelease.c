/*
 * XREFs of EtwpCovSampCaptureBufferRelease @ 0x1405ACDA8
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1405ACCE4 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureSample @ 0x1405AD7D8 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409448AC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409452F0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AD760 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferRelease(__int64 a1, __int64 a2)
{
  return EtwpCovSampCaptureReleaseToLookaside(a1, *(_QWORD *)(a2 + 48), a2);
}
