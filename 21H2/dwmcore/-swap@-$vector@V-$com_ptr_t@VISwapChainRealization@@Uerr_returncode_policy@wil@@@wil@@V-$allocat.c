/*
 * XREFs of ?swap@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV12@@Z @ 0x180104E68
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x180066804 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::swap(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rcx

  if ( a1 != a2 )
  {
    v3 = *a1;
    *a1 = *a2;
    v4 = a2[1];
    *a2 = v3;
    v5 = a1[1];
    a1[1] = v4;
    result = a2[2];
    a2[1] = v5;
    v7 = a1[2];
    a1[2] = result;
    a2[2] = v7;
  }
  return result;
}
