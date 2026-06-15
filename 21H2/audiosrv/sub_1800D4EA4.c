/*
 * XREFs of sub_1800D4EA4 @ 0x1800D4EA4
 * Callers:
 *     sub_180079FEC @ 0x180079FEC (sub_180079FEC.c)
 *     sub_18007A0C1 @ 0x18007A0C1 (sub_18007A0C1.c)
 * Callees:
 *     sub_180046360 @ 0x180046360 (sub_180046360.c)
 */

__int64 __fastcall sub_1800D4EA4(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_180046360(result);
  }
  return result;
}
