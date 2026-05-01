/*
 * XREFs of sub_1800356D8 @ 0x1800356D8
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 */

__int64 __fastcall sub_1800356D8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx

  for ( result = (__int64)sub_18001FD20(a1); ; result = sub_180020CC0(v4) )
  {
    v4 = (_QWORD *)result;
    if ( !result )
      break;
    if ( result != a2 )
    {
      sub_1800093A0(result, 0);
      sub_18001CC80((__int64)v4, 0);
      sub_18000A110((__int64)v4);
    }
  }
  return result;
}
