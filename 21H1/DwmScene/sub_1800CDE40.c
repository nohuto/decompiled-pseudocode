/*
 * XREFs of sub_1800CDE40 @ 0x1800CDE40
 * Callers:
 *     sub_180038780 @ 0x180038780 (sub_180038780.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800CDE40(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 )
    return 0;
  *(_DWORD *)(a1 + 96) = a3;
  return 1;
}
