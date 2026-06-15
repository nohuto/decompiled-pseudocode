/*
 * XREFs of sub_1800D569C @ 0x1800D569C
 * Callers:
 *     sub_18000455C @ 0x18000455C (sub_18000455C.c)
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 *     sub_1800D4E6C @ 0x1800D4E6C (sub_1800D4E6C.c)
 *     sub_1800D7CA4 @ 0x1800D7CA4 (sub_1800D7CA4.c)
 * Callees:
 *     sub_1800D6C14 @ 0x1800D6C14 (sub_1800D6C14.c)
 */

__int64 __fastcall sub_1800D569C(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    do
    {
      result = sub_1800D6C14(a1);
      a1 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
