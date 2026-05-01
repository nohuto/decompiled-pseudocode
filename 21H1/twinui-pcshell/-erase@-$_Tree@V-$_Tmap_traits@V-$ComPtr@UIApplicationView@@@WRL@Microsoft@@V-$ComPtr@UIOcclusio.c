/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@2@@Z @ 0x1803CFAC4
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180043510 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x1800AA1CC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@@Z @ 0x18025F398 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@Q.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::erase(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  _QWORD *v3; // r9
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 *i; // rbx
  __int64 *v8; // rsi
  __int64 **result; // rax

  v3 = a1;
  v5 = a3[2];
  v6 = a3;
  if ( *(_BYTE *)(v5 + 25) )
  {
    for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      v6 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)v5);
  }
  v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(v3, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8 + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8 + 4);
  std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x30);
  result = a2;
  *a2 = i;
  return result;
}
