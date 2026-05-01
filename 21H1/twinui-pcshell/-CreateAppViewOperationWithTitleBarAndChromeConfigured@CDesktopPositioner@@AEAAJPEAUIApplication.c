/*
 * XREFs of ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18002C9BC
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180047AA0 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180048020 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _lambda_cec5c726396bbc9cebe1730e9afdb84e_::operator() @ 0x1803C9C10 (_lambda_cec5c726396bbc9cebe1730e9afdb84e_--operator().c)
 *     ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803CB350 (-HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C3A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x18002FDBC (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18002FF74 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18007BA64 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180092F94 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  ApplicationViewOperation *v6; // rbx
  void *v7; // rdi
  ApplicationViewOperation *v8; // rax
  unsigned int v9; // esi
  volatile int *v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  CDesktopPositioner *v14; // rcx
  int v15; // eax
  struct IApplicationViewTitlebarConfiguration *v16; // rdi
  signed __int64 v17; // rax
  unsigned int v18; // ecx
  signed __int64 v19; // rtt
  struct IApplicationViewTitlebarConfiguration *v21; // [rsp+20h] [rbp-10h] BYREF
  ApplicationViewOperation *v22; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CDesktopPositioner *v24; // [rsp+68h] [rbp+38h] BYREF

  v6 = 0LL;
  v22 = 0LL;
  v7 = operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
  {
    memset_0(v7, 0, 0x118uLL);
    v8 = ApplicationViewOperation::ApplicationViewOperation((ApplicationViewOperation *)v7);
    v6 = v8;
    v22 = v8;
  }
  if ( v8 )
  {
    *((_DWORD *)v8 + 29) = 255;
    *((_DWORD *)v8 + 30) = 97;
    *((_DWORD *)v6 + 45) = 1;
    *((_DWORD *)v6 + 50) = 0;
    *(_QWORD *)((char *)v8 + 220) = 0LL;
    *(_QWORD *)((char *)v8 + 228) = 0LL;
    *(_QWORD *)((char *)v8 + 204) = 0LL;
    *(_QWORD *)((char *)v8 + 212) = 0LL;
    *((_BYTE *)v8 + 236) = 1;
    *((_QWORD *)v8 + 30) = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
      1u);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
      0LL);
    v24 = 0LL;
    v11 = (__int64 *)*((_QWORD *)this + 40);
    v12 = *v11;
    v24 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, CDesktopPositioner **))(v12 + 32))(v11, 1LL, &v24);
    v9 = v13;
    if ( v13 >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((char *)v6 + 184, v24);
      v14 = v24;
      if ( v24 )
        (*(void (__fastcall **)(CDesktopPositioner *))(*(_QWORD *)v24 + 16LL))(v24);
      v21 = 0LL;
      v15 = CDesktopPositioner::_CreateTitlebarConfiguration(v14, a2, &v21);
      v9 = v15;
      v16 = v21;
      if ( v15 >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((char *)v6 + 192, v21);
        *((_DWORD *)v6 + 31) = 0;
        *a3 = v6;
        (*(void (__fastcall **)(ApplicationViewOperation *))(*(_QWORD *)v6 + 8LL))(v6);
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA42,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v15,
          (int)v21);
      }
      if ( v16 )
        (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3D,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13,
        (int)v21);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    }
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA30,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007000ELL,
      (int)v21);
  }
  if ( v6 )
  {
    v17 = *((_QWORD *)v6 + 8);
    while ( v17 >= 0 )
    {
      if ( (_DWORD)v17 == 0x7FFFFFFF )
        return v9;
      v18 = v17 - 1;
      v19 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 8, v17 - 1, v17);
      if ( v19 == v17 )
        goto LABEL_21;
    }
    v18 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v17 + 16), v10);
LABEL_21:
    if ( !v18 )
    {
      (*(void (__fastcall **)(ApplicationViewOperation *, __int64))(*(_QWORD *)v22 + 272LL))(v22, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v9;
}
