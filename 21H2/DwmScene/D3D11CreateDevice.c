/*
 * XREFs of D3D11CreateDevice @ 0x180113DD8
 * Callers:
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_1800424A0 @ 0x1800424A0 (sub_1800424A0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall D3D11CreateDevice(
        IDXGIAdapter *pAdapter,
        D3D_DRIVER_TYPE DriverType,
        HMODULE Software,
        UINT Flags,
        const D3D_FEATURE_LEVEL *pFeatureLevels,
        UINT FeatureLevels,
        UINT SDKVersion,
        ID3D11Device **ppDevice,
        D3D_FEATURE_LEVEL *pFeatureLevel,
        ID3D11DeviceContext **ppImmediateContext)
{
  return __imp_D3D11CreateDevice(
           pAdapter,
           DriverType,
           Software,
           Flags,
           pFeatureLevels,
           FeatureLevels,
           SDKVersion,
           ppDevice,
           pFeatureLevel,
           ppImmediateContext);
}
