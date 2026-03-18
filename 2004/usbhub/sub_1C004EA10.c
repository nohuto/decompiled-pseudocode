/*
 * XREFs of sub_1C004EA10 @ 0x1C004EA10
 * Callers:
 *     sub_1C004E934 @ 0x1C004E934 (sub_1C004E934.c)
 *     sub_1C004F72C @ 0x1C004F72C (sub_1C004F72C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C004EA10(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = a2; a2; --a2 )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = a2 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( a2 )
      *a3 = i - a2;
    else
      *a3 = 0LL;
  }
  return result;
}
