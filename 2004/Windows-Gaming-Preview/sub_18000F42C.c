/*
 * XREFs of sub_18000F42C @ 0x18000F42C
 * Callers:
 *     sub_180046BFD @ 0x180046BFD (sub_180046BFD.c)
 * Callees:
 *     sub_180011B00 @ 0x180011B00 (sub_180011B00.c)
 */

__int64 __fastcall sub_18000F42C(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_180011B00(result);
  }
  return result;
}
