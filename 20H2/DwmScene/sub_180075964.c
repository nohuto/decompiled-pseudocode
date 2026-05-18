/*
 * XREFs of sub_180075964 @ 0x180075964
 * Callers:
 *     sub_1800918E0 @ 0x1800918E0 (sub_1800918E0.c)
 *     sub_180099AB0 @ 0x180099AB0 (sub_180099AB0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180075964(__int64 a1, int a2, int a3)
{
  return (a3 & *(_DWORD *)(a1 + 4LL * a2 + 748)) != 0;
}
