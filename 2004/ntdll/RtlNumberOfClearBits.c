/*
 * XREFs of RtlNumberOfClearBits @ 0x1800ECCF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180076EB0 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
