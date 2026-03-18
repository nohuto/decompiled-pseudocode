/*
 * XREFs of sub_1406B4880 @ 0x1406B4880
 * Callers:
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     sub_1406B17F4 @ 0x1406B17F4 (sub_1406B17F4.c)
 *     sub_1407C2AC0 @ 0x1407C2AC0 (sub_1407C2AC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406B4880(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)) - (a7 ^ *(_DWORD *)(a6 + 4LL * (a1 & 1)));
}
