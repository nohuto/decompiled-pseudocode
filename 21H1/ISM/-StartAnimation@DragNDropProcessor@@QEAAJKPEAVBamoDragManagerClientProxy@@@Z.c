/*
 * XREFs of ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800FB188
 * Callers:
 *     ?StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x1800F63F0 (-StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragMan.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C25C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045858 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800F792C (--$_Try_emplace@AEBK$$V@-$unordered_map@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U-$hash.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F8994 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@@Z @ 0x1800F94EC (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F97F8 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x1800F9B44 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x1800FB520 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x180145440 (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragNDropProcessor::StartAnimation(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  __int64 v6; // r10
  __int64 *i; // rsi
  struct IAnimationDataProvider *AnimationDataProvider; // r14
  const char *v9; // r9
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  unsigned int v12; // r13d
  __int64 v13; // rcx
  __int64 v14; // r11
  unsigned int v15; // edi
  _QWORD *v16; // rax
  __int64 v17; // r10
  __int64 v18; // rax
  struct tagPOINTF v19; // rcx
  struct tagPOINTF v20; // rdi
  __int64 (__fastcall *v21)(struct IAnimationDataProvider *, struct tagPOINTF *); // rbx
  unsigned __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned int v25; // r14d
  _QWORD *v26; // rax
  __int64 v27; // r10
  __int64 v28; // rbx
  struct tagPOINT PositionRelativeToSite; // rbx
  int v30; // eax
  unsigned int v31; // ebx
  struct InputSite *v32; // rcx
  struct InputSite *v34; // rcx
  _QWORD v35[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct InputSite *v37; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v38; // [rsp+88h] [rbp+48h] BYREF
  struct tagPOINTF v39; // [rsp+98h] [rbp+58h] BYREF

  v38 = a2;
  v6 = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v38, 4uLL) & *((_QWORD *)this + 20);
  for ( i = *(__int64 **)(*((_QWORD *)this + 17) + 16 * v6);
        i != (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                           (__int64)this + 112,
                           &v37,
                           v6);
        i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_6;
  }
  i = (__int64 *)*((_QWORD *)this + 15);
LABEL_6:
  if ( i == *((__int64 **)this + 15) || (struct BamoDragManagerClientProxy *)i[4] != a3 || !i[4] )
    return 0LL;
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v10 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
  if ( !v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      900LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      v9);
    __debugbreak();
  }
  v11 = *(_QWORD *)(*(_QWORD *)(i[4] + 32) + 16LL);
  v12 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) + 32);
  v14 = std::_Fnv1a_append_bytes(v13, (const unsigned __int8 *const)&v38, 4uLL) & *((_QWORD *)this + 52);
  v15 = v38;
  while ( 1 )
  {
    v16 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
            (__int64)this + 368,
            &v39,
            v14);
    if ( v17 == *v16 )
      break;
    if ( *(_DWORD *)(v17 + 16) == v15 )
    {
      v18 = *((_QWORD *)this + 47);
      goto LABEL_16;
    }
  }
  v17 = *((_QWORD *)this + 47);
  v18 = v17;
LABEL_16:
  if ( v17 == v18 )
  {
    (*(void (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINTF *, _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                        + 24LL))(
      AnimationDataProvider,
      &v39,
      v12);
    std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::_Try_emplace<unsigned long const &,>(
      (__int64)this + 368,
      (__int64)v35,
      (const unsigned __int8 *)&v38);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(v35[0] + 24LL), &v39);
    v19 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(struct tagPOINTF))(**(_QWORD **)&v19 + 8LL))(v19);
    }
  }
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::_Try_emplace<unsigned long const &,>(
    (__int64)this + 368,
    (__int64)v35,
    (const unsigned __int8 *)&v38);
  v20 = *(struct tagPOINTF *)(v35[0] + 24LL);
  v35[0] = v20;
  if ( v20 )
    (***(void (__fastcall ****)(struct tagPOINTF))&v20)(v20);
  v21 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINTF *))(*(_QWORD *)AnimationDataProvider
                                                                                      + 40LL);
  v39 = v20;
  if ( v20 )
    (***(void (__fastcall ****)(struct tagPOINTF))&v20)(v20);
  v22 = v21(AnimationDataProvider, &v39);
  v24 = std::_Fnv1a_append_bytes(v23, (const unsigned __int8 *const)&v38, 4uLL) & *((_QWORD *)this + 12);
  v25 = v38;
  while ( 1 )
  {
    v26 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
            (__int64)this + 48,
            &v39,
            v24);
    if ( v27 == *v26 )
      break;
    if ( *(_DWORD *)(v27 + 16) == v25 )
      goto LABEL_28;
  }
  v27 = *((_QWORD *)this + 7);
LABEL_28:
  v28 = *(_QWORD *)(v27 + 28);
  DragNDropProcessor::GetDragManagerInputSite((__int64)this, (__int64 *)&v37, v28, *(_DWORD *)(v27 + 36), i[4]);
  if ( v37 )
  {
    PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v37, (struct tagPOINT)v28);
    DragNDropProcessor::GetVelocityForPointerId(this, &v39, v38);
    DragNDropProcessor::FeedAnimationDataIfNeeded((__int64 **)this, v38, PositionRelativeToSite, v39);
  }
  InputETW::DragNDrop::StartAnimationCallBack(v38, v10, v22);
  v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(i[4] + 8) + 64LL))(
          i[4] + 8,
          v38,
          v10,
          v22);
  v31 = v30;
  if ( v30 >= 0 )
  {
    v34 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v34 + 16LL))(v34);
    }
    if ( v20 )
      (*(void (__fastcall **)(struct tagPOINTF))(**(_QWORD **)&v20 + 8LL))(v20);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39F,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
    (const char *)(unsigned int)v30);
  v32 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v32 + 16LL))(v32);
  }
  if ( v20 )
    (*(void (__fastcall **)(struct tagPOINTF))(**(_QWORD **)&v20 + 8LL))(v20);
  return v31;
}
