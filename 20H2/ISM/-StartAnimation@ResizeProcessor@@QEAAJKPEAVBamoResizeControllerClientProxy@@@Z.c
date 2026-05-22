/*
 * XREFs of ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FE980
 * Callers:
 *     ?StartAnimation@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FCBC0 (-StartAnimation@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResiz.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C2EC (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??9details_abi@wil@@YA_NAEBV?$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManager@details@wil@@@01@0@Z @ 0x18003DD1C (--9details_abi@wil@@YA_NAEBV-$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManage.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??A?$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@@std@@QEAAAEAUInitialPointerInfo@ResizeProcessor@@AEBK@Z @ 0x180044D50 (--A-$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$alloc.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18004578C (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800B6CF4 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ??1?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E2440 (--1-$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800F73DC (--$_Try_emplace@AEBK$$V@-$unordered_map@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U-$hash.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F8444 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800FC708 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x1800FDB00 (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z @ 0x1800FEC70 (-StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ResizeProcessor::StartAnimation(
        ResizeProcessor *this,
        unsigned int a2,
        struct BamoResizeControllerClientProxy *a3)
{
  struct tagPOINT v5; // rdi
  unsigned int v6; // r14d
  struct IAnimationDataProvider *AnimationDataProvider; // rsi
  const char *v8; // r9
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  unsigned int v11; // r13d
  void (__fastcall ***v12)(_QWORD); // rbx
  __int64 (__fastcall *v13)(struct IAnimationDataProvider *, struct tagPOINT *); // r13
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  float *v19; // rax
  int v20; // eax
  int v21; // ebx
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+38h] [rbp-28h]
  unsigned __int64 v25; // [rsp+40h] [rbp-20h]
  _QWORD v26[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct tagPOINT v28; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+48h] BYREF
  void (__fastcall ***v30)(_QWORD); // [rsp+B8h] [rbp+58h] BYREF

  v29 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (__int64)this + 24,
    (__int64)&v28,
    (const unsigned __int8 *)&v29);
  v5 = v28;
  if ( v28 != *((_QWORD *)this + 4) && *(struct BamoResizeControllerClientProxy **)(*(_QWORD *)&v28 + 24LL) == a3 )
  {
    v6 = 0;
    if ( *(_QWORD *)(*(_QWORD *)&v28 + 24LL) )
    {
      AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
      v9 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
      if ( !v9 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          302LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
          v8);
        __debugbreak();
      }
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 32LL) + 16LL);
      v11 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10) + 32);
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        (__int64)this + 296,
        (__int64)&v28,
        (const unsigned __int8 *)&v29);
      if ( v28 == *((_QWORD *)this + 38) )
      {
        (*(void (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINT *, _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                           + 24LL))(
          AnimationDataProvider,
          &v28,
          v11);
        std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::_Try_emplace<unsigned long const &,>(
          (__int64)this + 296,
          (__int64)v26,
          (const unsigned __int8 *)&v29);
        Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(v26[0] + 24LL), &v28);
        Microsoft::WRL::ComPtr<BamoDataSourceStub>::~ComPtr<BamoDataSourceStub>(&v28);
      }
      std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::_Try_emplace<unsigned long const &,>(
        (__int64)this + 296,
        (__int64)v26,
        (const unsigned __int8 *)&v29);
      v12 = *(void (__fastcall ****)(_QWORD))(v26[0] + 24LL);
      v30 = v12;
      if ( v12 )
        (**v12)(v12);
      v13 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINT *))(*(_QWORD *)AnimationDataProvider
                                                                                         + 40LL);
      v28 = (struct tagPOINT)v12;
      if ( v12 )
        (**v12)(v12);
      v14 = v13(AnimationDataProvider, &v28);
      v25 = v14;
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        (__int64)this + 88,
        (__int64)&v28,
        (const unsigned __int8 *)&v29);
      if ( v28 == *((_QWORD *)this + 12) )
        goto LABEL_16;
      v15 = *(_QWORD *)(*(_QWORD *)&v28 + 20LL);
      v24 = v15;
      v28 = 0LL;
      v16 = std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
              (__int64)this + 168,
              v26,
              (const unsigned __int8 *)&v29);
      v23 = *((_QWORD *)this + 22);
      if ( wil::details_abi::operator!=(v16, &v23) )
      {
        v17 = *(_QWORD *)std::unordered_map<unsigned long,ResizeProcessor::InitialPointerInfo>::operator[](
                           (__int64)this + 168,
                           (const unsigned __int8 *)&v29);
        v23 = v17;
        v18 = std::unordered_map<unsigned long,ResizeProcessor::InitialPointerInfo>::operator[](
                (__int64)this + 168,
                (const unsigned __int8 *)&v29);
        v28 = (struct tagPOINT)_mm_unpacklo_ps(
                                 (__m128)COERCE_UNSIGNED_INT((float)(int)v15),
                                 (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v24))).m128_u64[0];
        v19 = (float *)CInputTransform::ScreenPointToRelative((__int64)v26, (float *)&v28, (__int128 *)(v18 + 8));
        v28.x = (int)*v19 - v17;
        v28.y = (int)v19[1] - HIDWORD(v23);
        v14 = v25;
      }
      ResizeProcessor::FeedAnimationDataIfNeeded((__int64 **)this, v29, v28);
      InputETW::Resize::StartAnimationCallBack(v29, v9, v14);
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 8LL)
                                                                                           + 56LL))(
              *(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 8LL,
              v29,
              v9,
              v14);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x151,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
          (const char *)(unsigned int)v20);
        v6 = v21;
LABEL_16:
        Microsoft::WRL::ComPtr<BamoDataSourceStub>::~ComPtr<BamoDataSourceStub>(&v30);
        return v6;
      }
      Microsoft::WRL::ComPtr<BamoDataSourceStub>::~ComPtr<BamoDataSourceStub>(&v30);
    }
  }
  return 0LL;
}
