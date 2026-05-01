/*
 * XREFs of sub_18000E230 @ 0x18000E230
 * Callers:
 *     sub_18000C720 @ 0x18000C720 (sub_18000C720.c)
 *     sub_18000D370 @ 0x18000D370 (sub_18000D370.c)
 * Callees:
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 */

__int64 __fastcall sub_18000E230(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = a1;
      v4 = a2;
      do
      {
        sub_18000EC88(v3);
        v3 += 16LL;
        --v4;
      }
      while ( v4 );
    }
    return _o_free(a1);
  }
  return result;
}
