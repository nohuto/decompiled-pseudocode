/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x140460C72
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409EE8FC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}
