/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803C9004
 * Callers:
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1803C9780 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803CF648 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@1@@Z @ 0x1803C8898 (--$_Insert_hint@AEAU-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$ComPtr@UIOcclusio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<Microsoft::WRL::ComPtr<IApplicationView> &&>,std::tuple<>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 **a5)
{
  __int64 v8; // rdi
  _QWORD *v9; // rax
  unsigned __int64 *v10; // r9
  unsigned __int64 *v11; // rdx

  v8 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  v10 = v9 + 4;
  v11 = *a5;
  v9[4] = 0LL;
  if ( v9 + 4 != v11 )
  {
    *v10 = *v11;
    *v11 = 0LL;
  }
  v9[5] = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::_Insert_hint<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>> &,std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>,void *> *>(
    a1,
    a2,
    a3,
    v10,
    (__int64)v9);
  return a2;
}
