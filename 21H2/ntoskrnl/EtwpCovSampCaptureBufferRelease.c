/*
 * XREFs of EtwpCovSampCaptureBufferRelease @ 0x14041AAB8
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409EE8FC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409EF190 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140460DBA (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferRelease(__int64 a1, __int64 a2)
{
  return EtwpCovSampCaptureReleaseToLookaside(a1, *(_QWORD *)(a2 + 48), a2);
}
