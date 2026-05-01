/*
 * XREFs of ?AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180265110
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180075740 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180075740.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180182CB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x180263598 (--$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOperation@@@WRL.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_89df5410cec75dfa270b441e23c20fb9___ @ 0x180263834 (Windows--Internal--ComTaskPool--QueueTask__lambda_89df5410cec75dfa270b441e23c20fb9___.c)
 *     ??$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA?AV?$unique_ptr@Vunique_animation_clock@@U?$default_delete@Vunique_animation_clock@@@std@@@0@AEBU_GUID@@AEBH$$QEAH@Z @ 0x180263D5C (--$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA-AV-$unique_ptr@Vunique_anim.c)
 *     ??0?$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController@@@Z @ 0x180263FE0 (--0-$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController.c)
 *     _lambda_89df5410cec75dfa270b441e23c20fb9_::__lambda_89df5410cec75dfa270b441e23c20fb9_ @ 0x180264304 (_lambda_89df5410cec75dfa270b441e23c20fb9_--__lambda_89df5410cec75dfa270b441e23c20fb9_.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall TitleBarController::AttachTitleBarToView(
        TitleBarController *this,
        struct IApplicationView *a2,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a3)
{
  struct IApplicationView *v4; // rbx
  __int64 *v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // r11
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int128 *v14; // rbx
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  void *v17; // [rsp+28h] [rbp-60h] BYREF
  __int128 v18; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  __int128 v21; // [rsp+58h] [rbp-30h]
  void *v22; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = a2;
  LODWORD(v16) = 0;
  std::make_unique<unique_animation_clock,_GUID const &,int const &,int,0>(
    &v17,
    (__int64)a2,
    (__int64)a3,
    (unsigned int *)&v16);
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int128 *))v4)(
    v4,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v18);
  v6 = &v16;
  if ( !(_QWORD)v18 )
    goto LABEL_6;
  v7 = wil::com_ptr_t<TitleBarController,wil::err_exception_policy>::com_ptr_t<TitleBarController,wil::err_exception_policy>(
         &v16,
         (__int64)this - 8);
  v19[0] = v8;
  v9 = *v7;
  *v7 = 0LL;
  v19[1] = v9;
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v20,
    v18);
  v21 = *(_OWORD *)a3;
  v10 = v17;
  v17 = 0LL;
  v22 = v10;
  v4 = (struct IApplicationView *)(unsigned int)Windows::Internal::ComTaskPool::QueueTask__lambda_89df5410cec75dfa270b441e23c20fb9___(
                                                  v12,
                                                  v11,
                                                  *((_DWORD *)this + 50),
                                                  (__int64)v19);
  lambda_89df5410cec75dfa270b441e23c20fb9_::__lambda_89df5410cec75dfa270b441e23c20fb9_(v19);
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v16);
  if ( (int)v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      266LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v4);
LABEL_6:
    wil::MakeOrThrow<ApplicationViewOperation,>(v6);
    *(_BYTE *)(v16 + 272) = 1;
    *(_OWORD *)(v16 + 256) = *(_OWORD *)a3;
    v13 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)v4 + 320LL))(v4, v16);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        275LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v13);
    *((_BYTE *)v17 + 16) = 0;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v16);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
  v14 = (__int128 *)v17;
  if ( v17 )
  {
    if ( *((_BYTE *)v17 + 16) )
    {
      *((_BYTE *)v17 + 16) = 0;
      v18 = *v14;
      DwmpEndAnimationClock(&v18);
    }
    operator delete(v14, (const struct std::nothrow_t *)0x14);
  }
  return 0LL;
}
