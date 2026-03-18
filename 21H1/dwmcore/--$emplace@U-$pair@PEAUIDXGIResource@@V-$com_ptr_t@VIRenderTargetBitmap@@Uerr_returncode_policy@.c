/*
 * XREFs of ??$emplace@U?$pair@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAUIDXGIResource@@@std@@V?$allocator@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x18018D6F8
 * Callers:
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018D914 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAUIDXGIResource@@@std@@V?$allocator@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@1@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18018D5F4 (--$_Insert_nohint@AEAU-$pair@QEAUIDXGIResource@@V-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returnco.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>,std::less<IDXGIResource *>,std::allocator<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>,0>>::emplace<std::pair<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rdi
  __int64 *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r8

  v3 = *a1;
  v7 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  v7[4] = *a3;
  v8 = a3[1];
  a3[1] = 0LL;
  v7[5] = v8;
  *v7 = v3;
  v7[1] = v3;
  v7[2] = v3;
  *((_WORD *)v7 + 12) = 0;
  std::_Tree<std::_Tmap_traits<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>,std::less<IDXGIResource *>,std::allocator<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>,0>>::_Insert_nohint<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>> &,std::_Tree_node<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>,void *> *>(
    a1,
    a2,
    v9,
    v7 + 4,
    v7);
  return a2;
}
