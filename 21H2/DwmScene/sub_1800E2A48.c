/*
 * XREFs of sub_1800E2A48 @ 0x1800E2A48
 * Callers:
 *     sub_18012DC31 @ 0x18012DC31 (sub_18012DC31.c)
 * Callees:
 *     sub_18010B1EC @ 0x18010B1EC (sub_18010B1EC.c)
 */

__int64 __fastcall sub_1800E2A48(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_18010B1EC(v4);
      v4 += 128LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
