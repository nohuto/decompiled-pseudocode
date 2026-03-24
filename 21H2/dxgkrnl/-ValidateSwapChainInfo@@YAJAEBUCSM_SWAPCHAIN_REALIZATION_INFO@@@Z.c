/*
 * XREFs of ?ValidateSwapChainInfo@@YAJAEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x1C0011348
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C0011290 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@.c)
 *     ?Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C006720C (-Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateSwapChainInfo(const struct CSM_SWAPCHAIN_REALIZATION_INFO *a1)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( (unsigned int)(*(_DWORD *)a1 - 2) <= 2 && (unsigned int)(*((_DWORD *)a1 + 1) - 1) <= 0x1E )
    return 0LL;
  return result;
}
