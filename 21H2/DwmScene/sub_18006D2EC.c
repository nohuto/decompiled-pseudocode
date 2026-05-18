/*
 * XREFs of sub_18006D2EC @ 0x18006D2EC
 * Callers:
 *     sub_18012A474 @ 0x18012A474 (sub_18012A474.c)
 *     sub_18012D8E0 @ 0x18012D8E0 (sub_18012D8E0.c)
 * Callees:
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 */

__int64 *__fastcall sub_18006D2EC(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2 + 17;
    do
    {
      sub_180069FBC(v4, (__int64)v4);
      v4 += 19;
      result = v4 - 17;
    }
    while ( v4 - 17 != a3 );
  }
  return result;
}
