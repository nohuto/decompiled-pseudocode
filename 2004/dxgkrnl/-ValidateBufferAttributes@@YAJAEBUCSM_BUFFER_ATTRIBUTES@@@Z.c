/*
 * XREFs of ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C00119E4
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C00111A0 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0065A44 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 *     ?Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C006642C (-Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN.c)
 * Callees:
 *     ?ValidateDXGIAlphaMode@@YAJW4DXGI_ALPHA_MODE@@@Z @ 0x1C0011A3C (-ValidateDXGIAlphaMode@@YAJW4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall ValidateBufferAttributes(const struct CSM_BUFFER_ATTRIBUTES *a1, __int64 a2, __int64 a3)
{
  int v3; // r8d
  _DWORD *v4; // r9

  v3 = ValidateDXGIAlphaMode(*(unsigned int *)a1, a2, a3, a1);
  if ( v3 >= 0 )
  {
    v3 = -1073741811;
    if ( v4[4] <= 2u )
      v3 = 0;
    if ( v3 >= 0 && (v4[29] & 0x10) != 0 )
    {
      v3 = -1073741811;
      if ( (unsigned int)(v4[16] - 1) <= 3 )
        return 0;
    }
  }
  return (unsigned int)v3;
}
