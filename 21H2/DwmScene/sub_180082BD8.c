/*
 * XREFs of sub_180082BD8 @ 0x180082BD8
 * Callers:
 *     sub_18008241C @ 0x18008241C (sub_18008241C.c)
 * Callees:
 *     sub_180082C38 @ 0x180082C38 (sub_180082C38.c)
 */

__int64 __fastcall sub_180082BD8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rbx

  if ( a3 > 32 )
  {
    v7 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      a1 = sub_180082C38(a1, a1 + 512, a4);
      --v7;
    }
    while ( v7 );
  }
  return sub_180082C38(a1, a2, a4);
}
