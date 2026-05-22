/*
 * XREFs of _lambda_e899d24a1372ab43d53191ccbd314951_::operator() @ 0x18013EA28
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e899d24a1372ab43d53191ccbd314951__void_Microsoft::WRL::ComPtr_DataProviderPrincipal__&_::_Do_call @ 0x180140D30 (std--_Func_impl_no_alloc__lambda_e899d24a1372ab43d53191ccbd314951__void_Microsoft--_ea_180140D30.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C214 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Lbound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEB_K@Z @ 0x18013B1B4 (--$_Lbound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$.c)
 *     ??4?$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013B798 (--4-$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z @ 0x18013D12C (-SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013E2C0 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 *     ??$make_shared@VSystemCursorShape@@AEBV?$shared_ptr@VSystemCursorService@@@std@@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VSystemCursorShape@@@0@AEBV?$shared_ptr@VSystemCursorService@@@0@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18013E428 (--$make_shared@VSystemCursorShape@@AEBV-$shared_ptr@VSystemCursorService@@@std@@AEB_KAEAV-$ComPt.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x18013EC48 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?Initialize@SystemCursorShape@@QEAAJXZ @ 0x180140114 (-Initialize@SystemCursorShape@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_e899d24a1372ab43d53191ccbd314951_::operator()(__int64 a1, void (__fastcall ***a2)(_QWORD))
{
  struct IAnimationDataProvider *AnimationDataProvider; // rax
  __int64 *v4; // r14
  int v5; // eax
  int v6; // ebx
  std::_Ref_count_base *v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // r9
  void *v10; // rcx
  int v11; // eax
  struct IAnimationDataProvider *v12; // rbx
  __int64 (__fastcall *v13)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)); // r15
  unsigned __int64 v14; // rbx
  struct IAnimationDataProvider *v15; // rax
  __int64 v16; // rax
  void (__fastcall ***v17)(_QWORD); // rcx
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v20; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  void (__fastcall ***v22)(_QWORD); // [rsp+A0h] [rbp+38h] BYREF
  void (__fastcall ***v23)(_QWORD); // [rsp+A8h] [rbp+40h] BYREF
  _QWORD *v24; // [rsp+B0h] [rbp+48h] BYREF
  __int64 *v25; // [rsp+B8h] [rbp+50h]

  v23 = a2;
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  (*(void (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD), _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                                  + 24LL))(
    AnimationDataProvider,
    &v23,
    *(unsigned int *)(a1 + 20));
  v4 = (__int64 *)(a1 + 24);
  std::make_shared<SystemCursorShape,std::shared_ptr<SystemCursorService> const &,unsigned __int64 const &,Microsoft::WRL::ComPtr<DataSourcePrincipal> &>(
    v19,
    (__int64 *)a1,
    (__int64 *)(a1 + 24),
    &v23);
  v5 = SystemCursorShape::Initialize(v19[0]);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      198LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v5);
    v7 = v19[1];
    goto LABEL_15;
  }
  v8 = std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Lbound<unsigned __int64>(
         (__int64 *)(*(_QWORD *)a1 + 152LL),
         (_QWORD *)(a1 + 24));
  v25 = v8;
  if ( v8 == *(__int64 **)(v9 + 152) || *v4 < (unsigned __int64)v8[4] )
  {
    v24 = (_QWORD *)(a1 + 24);
    v8 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
                       (__int64 *)(v9 + 152),
                       &v18,
                       v8,
                       v9,
                       &v24);
  }
  std::shared_ptr<CustomCursorApplication>::operator=(v8 + 5, v19);
  v10 = *(void **)(a1 + 32);
  v7 = v19[1];
  if ( !v10 )
  {
LABEL_11:
    if ( v6 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
  v20 = 0LL;
  if ( v19[1] )
  {
    _InterlockedIncrement((volatile signed __int32 *)v19[1] + 2);
    v7 = v19[1];
  }
  v20 = *(_OWORD *)v19;
  v11 = SystemCursor::AddShape(v10);
  v6 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      206LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_11;
  }
LABEL_12:
  v12 = ISMStatics::GetAnimationDataProvider();
  v13 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)v12 + 40LL);
  v22 = v23;
  if ( v23 )
    (**v23)(v23);
  v14 = v13(v12, &v22);
  v15 = ISMStatics::GetAnimationDataProvider();
  v16 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)v15 + 32LL))(v15);
  SystemCursorController::SendCustomCursorAnimationCreatedCallback(
    *(SystemCursorController **)(*(_QWORD *)a1 + 32LL),
    *(_DWORD *)(a1 + 16),
    *v4,
    v16,
    v14);
LABEL_15:
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v17 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*v17)[1](v17);
  }
}
