/*
 * XREFs of sub_18003CDF4 @ 0x18003CDF4
 * Callers:
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 * Callees:
 *     _expandlocale @ 0x18003BFEC (_expandlocale.c)
 */

__int64 __fastcall sub_18003CDF4(
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
