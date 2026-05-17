/*
 * XREFs of _RtlNumberOfClearBitsInRange@12 @ 0x4B34F690
 * Callers:
 *     <none>
 * Callees:
 *     _RtlNumberOfSetBitsInRange@12 @ 0x4B34F810 (_RtlNumberOfSetBitsInRange@12.c)
 */

int __stdcall RtlNumberOfClearBitsInRange(int a1, int a2, int a3)
{
  int result; // eax

  result = RtlNumberOfSetBitsInRange(a1, a2, a3);
  if ( result != -1 )
    return a3 - result;
  return result;
}
