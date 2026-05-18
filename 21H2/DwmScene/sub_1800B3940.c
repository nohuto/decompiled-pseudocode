/*
 * XREFs of sub_1800B3940 @ 0x1800B3940
 * Callers:
 *     sub_18012CB58 @ 0x18012CB58 (sub_18012CB58.c)
 *     sub_18012CBEE @ 0x18012CBEE (sub_18012CBEE.c)
 * Callees:
 *     sub_1800AD490 @ 0x1800AD490 (sub_1800AD490.c)
 */

__int64 __fastcall sub_1800B3940(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800AD490(v4, 0);
      v4 += 48LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
