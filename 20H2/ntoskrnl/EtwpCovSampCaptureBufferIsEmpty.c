/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x1405ACC68
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409448AC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}
