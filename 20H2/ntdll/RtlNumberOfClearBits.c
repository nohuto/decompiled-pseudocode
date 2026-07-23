/*
 * XREFs of RtlNumberOfClearBits @ 0x1800ED200
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180076FB0 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
