/*
 * XREFs of _FindLabelEnd@12 @ 0x4B3651FC
 * Callers:
 *     _punycode_decode@32 @ 0x4B365668 (_punycode_decode@32.c)
 *     _punycode_encode@24 @ 0x4B365B90 (_punycode_encode@24.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall FindLabelEnd(_WORD *a1, unsigned int a2, char a3)
{
  _WORD *result; // eax

  if ( a3 )
  {
    for ( result = (_WORD *)(a2 - 2); result >= a1; --result )
    {
      if ( *result == 64 )
        return result;
    }
  }
  else
  {
    while ( (unsigned int)a1 < a2 )
    {
      if ( *a1 == 46 )
        return a1;
      ++a1;
    }
  }
  return (_WORD *)a2;
}
