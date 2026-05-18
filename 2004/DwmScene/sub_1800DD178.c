/*
 * XREFs of sub_1800DD178 @ 0x1800DD178
 * Callers:
 *     sub_180128319 @ 0x180128319 (sub_180128319.c)
 * Callees:
 *     sub_18010591C @ 0x18010591C (sub_18010591C.c)
 */

__int64 __fastcall sub_1800DD178(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_18010591C(v4);
      v4 += 128LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
