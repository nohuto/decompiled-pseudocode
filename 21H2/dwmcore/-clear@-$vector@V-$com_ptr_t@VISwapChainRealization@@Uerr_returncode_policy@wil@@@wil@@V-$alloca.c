/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800E8B24
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180068FF4 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180104C34 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800E8B50 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::clear(_QWORD *a1)
{
  __int64 result; // rax

  std::_Destroy_range<std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
