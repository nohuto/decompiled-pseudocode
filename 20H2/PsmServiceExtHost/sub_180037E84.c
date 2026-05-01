/*
 * XREFs of sub_180037E84 @ 0x180037E84
 * Callers:
 *     sub_18002A804 @ 0x18002A804 (sub_18002A804.c)
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 * Callees:
 *     sub_1800060BC @ 0x1800060BC (sub_1800060BC.c)
 */

__int64 __fastcall sub_180037E84(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp-18h]

  result = 0x20000000000LL;
  if ( (*(_QWORD *)(a1 + 648) & 0x20000000000LL) != 0 )
    return sub_1800060BC(a1, 3LL, a2, 0, 0, a3, 8, 0LL, v4, 0LL);
  return result;
}
