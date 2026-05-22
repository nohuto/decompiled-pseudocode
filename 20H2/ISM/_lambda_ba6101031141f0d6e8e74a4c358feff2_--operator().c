/*
 * XREFs of _lambda_ba6101031141f0d6e8e74a4c358feff2_::operator() @ 0x18013E39C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ba6101031141f0d6e8e74a4c358feff2__void_Microsoft::WRL::ComPtr_DataProviderPrincipal__&_::_Do_call @ 0x180140830 (std--_Func_impl_no_alloc__lambda_ba6101031141f0d6e8e74a4c358feff2__void_Microsoft--_ea_180140830.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C2EC (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?SendCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K000@Z @ 0x18013CBBC (-SendCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K000@Z.c)
 *     ??$make_shared@VSystemCursorShape@@AEBV?$shared_ptr@VSystemCursorService@@@std@@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VSystemCursorShape@@@0@AEBV?$shared_ptr@VSystemCursorService@@@0@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18013DF38 (--$make_shared@VSystemCursorShape@@AEBV-$shared_ptr@VSystemCursorService@@@std@@AEB_KAEAV-$ComPt.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x18013E758 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?Initialize@SystemCursorShape@@QEAAJXZ @ 0x18013FC24 (-Initialize@SystemCursorShape@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_ba6101031141f0d6e8e74a4c358feff2_::operator()(__int64 a1, void (__fastcall ***a2)(_QWORD))
{
  struct IAnimationDataProvider *AnimationDataProvider; // rax
  int v4; // eax
  std::_Ref_count_base *v5; // rdi
  void *v6; // rcx
  int v7; // eax
  struct IAnimationDataProvider *v8; // rbx
  __int64 (__fastcall *v9)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)); // r14
  unsigned __int64 v10; // rbx
  struct IAnimationDataProvider *v11; // rax
  unsigned __int64 v12; // rax
  void (__fastcall ***v13)(_QWORD); // rcx
  std::_Ref_count_base *v14[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void (__fastcall ***v17)(_QWORD); // [rsp+80h] [rbp+30h] BYREF
  void (__fastcall ***v18)(_QWORD); // [rsp+88h] [rbp+38h] BYREF

  v18 = a2;
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  (*(void (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD), _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                                  + 24LL))(
    AnimationDataProvider,
    &v18,
    *(unsigned int *)(a1 + 20));
  std::make_shared<SystemCursorShape,std::shared_ptr<SystemCursorService> const &,unsigned __int64 const &,Microsoft::WRL::ComPtr<DataSourcePrincipal> &>(
    v14,
    (__int64 *)a1,
    (__int64 *)(a1 + 32),
    &v18);
  v4 = SystemCursorShape::Initialize(v14[0]);
  if ( v4 >= 0 )
  {
    v6 = *(void **)(a1 + 40);
    v15 = 0LL;
    v5 = v14[1];
    if ( v14[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v14[1] + 2);
      v5 = v14[1];
    }
    v15 = *(_OWORD *)v14;
    v7 = SystemCursor::AddShape(v6);
    if ( v7 >= 0 )
    {
      v8 = ISMStatics::GetAnimationDataProvider();
      v9 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)v8 + 40LL);
      v17 = v18;
      if ( v18 )
        (**v18)(v18);
      v10 = v9(v8, &v17);
      v11 = ISMStatics::GetAnimationDataProvider();
      v12 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)v11 + 32LL))(v11);
      SystemCursorController::SendCursorAnimationCreatedCallback(
        *(SystemCursorController **)(*(_QWORD *)a1 + 32LL),
        *(_DWORD *)(a1 + 16),
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a1 + 32),
        v12,
        v10);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        155LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      151LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v4);
    v5 = v14[1];
  }
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*v13)[1](v13);
  }
}
