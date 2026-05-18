/*
 * XREFs of sub_1800EDE8C @ 0x1800EDE8C
 * Callers:
 *     sub_1801297E8 @ 0x1801297E8 (sub_1801297E8.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 */

__int64 *__fastcall sub_1800EDE8C(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_180065AF4(v4, 0);
      v4 += 7;
    }
    while ( v4 != a3 );
  }
  return result;
}
