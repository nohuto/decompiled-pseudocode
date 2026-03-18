/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x1405A8A18
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14093D86C (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}
