/*
 * XREFs of _RealPredecessor@4 @ 0x4B2A71B7
 * Callers:
 *     _RtlDeleteElementGenericTableAvlEx@8 @ 0x4B2A6E00 (_RtlDeleteElementGenericTableAvlEx@8.c)
 *     _RtlGetElementGenericTableAvl@8 @ 0x4B35E290 (_RtlGetElementGenericTableAvl@8.c)
 *     _RtlLookupFirstMatchingElementGenericTableAvl@12 @ 0x4B35E3A0 (_RtlLookupFirstMatchingElementGenericTableAvl@12.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RealPredecessor(_DWORD *a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)a1[1];
  if ( result )
  {
    while ( result[2] )
      result = (_DWORD *)result[2];
  }
  else
  {
    for ( result = (_DWORD *)*a1; (_DWORD *)result[1] == a1; result = (_DWORD *)*result )
      a1 = result;
    if ( (_DWORD *)result[2] != a1 || (_DWORD *)*result == result )
      return 0;
  }
  return result;
}
