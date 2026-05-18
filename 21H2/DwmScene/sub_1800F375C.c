/*
 * XREFs of sub_1800F375C @ 0x1800F375C
 * Callers:
 *     sub_18012F100 @ 0x18012F100 (sub_18012F100.c)
 * Callees:
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 */

__int64 *__fastcall sub_1800F375C(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_18006B3C4(v4, 0);
      v4 += 7;
    }
    while ( v4 != a3 );
  }
  return result;
}
