/*
 * XREFs of _RtlNumberOfClearBitsInRange@12 @ 0x4B34F690
 * Callers:
 *     <none>
 * Callees:
 *     _RtlNumberOfSetBitsInRange@12 @ 0x4B34F810 (_RtlNumberOfSetBitsInRange@12.c)
 */

ULONG __cdecl RtlNumberOfClearBitsInRange(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  ULONG result; // eax

  result = RtlNumberOfSetBitsInRange(BitMapHeader, StartingIndex, Length);
  if ( result != -1 )
    return Length - result;
  return result;
}
