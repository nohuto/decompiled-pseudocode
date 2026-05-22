/*
 * XREFs of ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FD824
 * Callers:
 *     ?CancelResize@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FC8C0 (-CancelResize@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeC.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FE000 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D64 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??9details_abi@wil@@YA_NAEBV?$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManager@details@wil@@@01@0@Z @ 0x18003DD1C (--9details_abi@wil@@YA_NAEBV-$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManage.c)
 *     ??A?$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@@std@@QEAAAEAUInitialPointerInfo@ResizeProcessor@@AEBK@Z @ 0x180044D50 (--A-$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$alloc.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800456E8 (-erase@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_comp_ea_1800456E8.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18004578C (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180068FA4 (--1-$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800B6CF4 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ??$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEBKU_Not_a_node_tag@1@@Z @ 0x1800F68D4 (--$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800FC3E0 (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ_ea_1800FC3E0.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800FC708 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x1800FD778 (-CancelResize@Resize@InputETW@@SAXK@Z.c)
 *     ?ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z @ 0x1800FE6B0 (-ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUMessageInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800FF3E8 (-erase@-$_Hash@V-$_Umap_traits@KUMessageInfo@ResizeProcessor@@V-$_Uhash_compare@KU-_ea_1800FF3E8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ResizeProcessor::CancelResize(
        ResizeProcessor *this,
        unsigned int a2,
        struct BamoResizeControllerClientProxy *a3)
{
  __int64 v5; // rbx
  struct BamoResizeControllerClientProxy *v6; // rdi
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rax
  float *v10; // rax
  int v11; // esi
  struct tagPOINT v13; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT v14; // [rsp+38h] [rbp-28h] BYREF
  struct BamoResizeControllerClientProxy *v15; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+48h] BYREF
  struct tagPOINT v20; // [rsp+B8h] [rbp+58h] BYREF

  v19 = a2;
  InputETW::Resize::CancelResize(a2);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (__int64)this + 24,
    (__int64)&v18,
    (const unsigned __int8 *)&v19);
  v5 = v18;
  if ( v18 != *((_QWORD *)this + 4) )
  {
    v15 = *(struct BamoResizeControllerClientProxy **)(v18 + 24);
    v6 = v15;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v15);
    if ( v6 == a3 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        (__int64)this + 88,
        (__int64)&v18,
        (const unsigned __int8 *)&v19);
      if ( v18 != *((_QWORD *)this + 12) )
      {
        v7 = *(_QWORD *)(v18 + 20);
        v16 = v7;
        LODWORD(v18) = *(_DWORD *)(v18 + 28);
        v20 = 0LL;
        v13 = 0LL;
        v8 = std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
               (__int64)this + 168,
               v17,
               (const unsigned __int8 *)&v19);
        v14 = (struct tagPOINT)*((_QWORD *)this + 22);
        if ( wil::details_abi::operator!=(v8, &v14) )
        {
          v20 = *(struct tagPOINT *)std::unordered_map<unsigned long,ResizeProcessor::InitialPointerInfo>::operator[](
                                      (__int64)this + 168,
                                      (const unsigned __int8 *)&v19);
          v9 = std::unordered_map<unsigned long,ResizeProcessor::InitialPointerInfo>::operator[](
                 (__int64)this + 168,
                 (const unsigned __int8 *)&v19);
          v16 = _mm_unpacklo_ps(
                  (__m128)COERCE_UNSIGNED_INT((float)(int)v7),
                  (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v16))).m128_u64[0];
          v10 = (float *)CInputTransform::ScreenPointToRelative((__int64)v17, (float *)&v16, (__int128 *)(v9 + 8));
          v14.x = (int)*v10 - v20.x;
          v14.y = (int)v10[1] - v20.y;
          v13 = v14;
        }
        v11 = v18;
        InputETW::Resize::ResizeEnded(v19, &v20, &v13, v18);
        (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, int))(*((_QWORD *)v6 + 1) + 40LL))(
          (__int64)v6 + 8,
          v19,
          &v20,
          &v13,
          v11);
        if ( v5 != *((_QWORD *)this + 4) && **(_DWORD **)(v5 + 40) != 1 )
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Insert_unverified<unsigned long const,std::_Not_a_node_tag>(
            (__int64)this + 360,
            (__int64)v17,
            (const unsigned __int8 *)&v19);
        std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::erase(
          (_QWORD *)this + 21,
          (const unsigned __int8 *)&v19);
        std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
          (_QWORD *)this + 29,
          (const unsigned __int8 *)&v19);
        std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>,0>>::erase(
          (char *)this + 24,
          &v19);
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)(v5 + 24));
      }
    }
    Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>((__int64 *)&v15);
  }
  return 0LL;
}
