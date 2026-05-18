/*
 * XREFs of sub_1800D2614 @ 0x1800D2614
 * Callers:
 *     sub_1800EF2E0 @ 0x1800EF2E0 (sub_1800EF2E0.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D2614(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 524292LL;
  if ( a2 != 4 )
    v3 = 4LL;
  return a3 | ((__int64)a1 << 41) | v3;
}
