/*
 * XREFs of _InsertChar@12 @ 0x4B36525A
 * Callers:
 *     _punycode_decode@32 @ 0x4B365668 (_punycode_decode@32.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall InsertChar(__int16 a1, _WORD *a2, _WORD **a3)
{
  _WORD *i; // esi
  __int16 result; // ax

  for ( i = *a3; --i >= a2; i[1] = *i )
    result = *i;
  *a2 = a1;
  ++*a3;
  return result;
}
