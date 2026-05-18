/*
 * XREFs of sub_1800426C4 @ 0x1800426C4
 * Callers:
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 * Callees:
 *     _expandlocale @ 0x1800418BC (_expandlocale.c)
 */

__int64 __fastcall sub_1800426C4(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        D3D_FEATURE_LEVEL a5,
        D3D_FEATURE_LEVEL a6,
        char a7)
{
  return expandlocale(
           (ID3D11DeviceContext *)a1,
           (IDXGIAdapter **)a1,
           (__int64 *)(a1 + 320),
           (ID3D11Device **)(a1 + 328),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
