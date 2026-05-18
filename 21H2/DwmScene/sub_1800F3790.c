/*
 * XREFs of sub_1800F3790 @ 0x1800F3790
 * Callers:
 *     sub_18012F139 @ 0x18012F139 (sub_18012F139.c)
 * Callees:
 *     sub_1800DB77C @ 0x1800DB77C (sub_1800DB77C.c)
 */

__int64 __fastcall sub_1800F3790(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800DB77C(v4);
      v4 += 40LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
