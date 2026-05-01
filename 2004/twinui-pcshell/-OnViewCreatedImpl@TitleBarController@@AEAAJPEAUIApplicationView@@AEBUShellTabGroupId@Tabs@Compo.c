/*
 * XREFs of ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x180287CD4
 * Callers:
 *     ?OnViewRecovered@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802880D0 (-OnViewRecovered@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Composa.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180075E60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180075E60.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1f4f68820907753b977dd0769491499a___ @ 0x180285310 (Windows--Internal--ComTaskPool--QueueTask__lambda_1f4f68820907753b977dd0769491499a___.c)
 *     ??$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA?AV?$unique_ptr@Vunique_animation_clock@@U?$default_delete@Vunique_animation_clock@@@std@@@0@AEBU_GUID@@AEBH$$QEAH@Z @ 0x1802859DC (--$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA-AV-$unique_ptr@Vunique_anim.c)
 *     ??0?$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController@@@Z @ 0x180285C60 (--0-$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController.c)
 *     _lambda_1f4f68820907753b977dd0769491499a_::__lambda_1f4f68820907753b977dd0769491499a_ @ 0x180285F14 (_lambda_1f4f68820907753b977dd0769491499a_--__lambda_1f4f68820907753b977dd0769491499a_.c)
 *     ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x1802871C8 (-EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall TitleBarController::OnViewCreatedImpl(
        TitleBarController *this,
        struct IApplicationView *a2,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a3,
        char a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+28h] [rbp-70h] BYREF
  __int64 v20; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v22; // [rsp+48h] [rbp-50h] BYREF
  __int128 v23; // [rsp+50h] [rbp-48h]
  char v24; // [rsp+60h] [rbp-38h]
  __int64 v25; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v8 = TitleBarController::EnsureTitleBarFactoryStatics(this);
  v9 = v8;
  if ( v8 >= 0 )
  {
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v19);
    if ( !v19 )
      goto LABEL_8;
    LODWORD(v18) = 0;
    std::make_unique<unique_animation_clock,_GUID const &,int const &,int,0>(&v20, v11, v12, (unsigned int *)&v18);
    v13 = wil::com_ptr_t<TitleBarController,wil::err_exception_policy>::com_ptr_t<TitleBarController,wil::err_exception_policy>(
            &v18,
            (__int64)this);
    v21[0] = this;
    v14 = *v13;
    *v13 = 0LL;
    v21[1] = v14;
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v22,
      v19);
    v23 = *(_OWORD *)a3;
    v24 = a4;
    v25 = v20;
    v17 = Windows::Internal::ComTaskPool::QueueTask__lambda_1f4f68820907753b977dd0769491499a___(
            v16,
            v15,
            *((_DWORD *)this + 52),
            (__int64)v21);
    lambda_1f4f68820907753b977dd0769491499a_::__lambda_1f4f68820907753b977dd0769491499a_(v21);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v18);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x284,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v17);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
      return (unsigned int)v17;
    }
    else
    {
LABEL_8:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x252,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
