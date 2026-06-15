/*
 * XREFs of sub_180006D30 @ 0x180006D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180024994 @ 0x180024994 (sub_180024994.c)
 */

__int64 __fastcall sub_180006D30(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(a3 + 12) = 1065353216;
  *(_BYTE *)(a3 + 8) = 0;
  return sub_180024994(a1, a2, a3, a3 + 4, a3 + 16);
}
