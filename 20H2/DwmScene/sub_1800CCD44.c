/*
 * XREFs of sub_1800CCD44 @ 0x1800CCD44
 * Callers:
 *     sub_1800E9A10 @ 0x1800E9A10 (sub_1800E9A10.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CCD44(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 524292LL;
  if ( a2 != 4 )
    v3 = 4LL;
  return a3 | ((__int64)a1 << 41) | v3;
}
