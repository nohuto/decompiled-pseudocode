/*
 * XREFs of _RtlNumberOfClearBits@4 @ 0x4B34F670
 * Callers:
 *     <none>
 * Callees:
 *     _RtlNumberOfSetBits@4 @ 0x4B34F6C0 (_RtlNumberOfSetBits@4.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
