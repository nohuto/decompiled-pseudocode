/*
 * XREFs of ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18003EEEC
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18003EB20 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800407AC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _lambda_cec5c726396bbc9cebe1730e9afdb84e_::operator() @ 0x1803EA330 (_lambda_cec5c726396bbc9cebe1730e9afdb84e_--operator().c)
 *     ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803EBA70 (-HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x18003F160 (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18003F318 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180050118 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800797B4 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091EB0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800932B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  ApplicationViewOperation *v6; // rbx
  __int64 v7; // rdx
  void *v8; // rdi
  ApplicationViewOperation *v9; // rax
  unsigned int v10; // esi
  volatile int *v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  CDesktopPositioner *v15; // rcx
  int v16; // eax
  struct IApplicationViewTitlebarConfiguration *v17; // rdi
  signed __int64 v18; // rax
  unsigned int v19; // ecx
  signed __int64 v20; // rtt
  struct IApplicationViewTitlebarConfiguration *v22; // [rsp+20h] [rbp-10h] BYREF
  ApplicationViewOperation *v23; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CDesktopPositioner *v25; // [rsp+68h] [rbp+38h] BYREF

  v6 = 0LL;
  v23 = 0LL;
  v8 = operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v8 )
  {
    memset_0(v8, 0, 0x118uLL);
    v9 = ApplicationViewOperation::ApplicationViewOperation((ApplicationViewOperation *)v8);
    v6 = v9;
    v23 = v9;
  }
  if ( v9 )
  {
    *((_DWORD *)v9 + 29) = 255;
    *((_DWORD *)v9 + 30) = 97;
    *((_DWORD *)v6 + 45) = 1;
    *((_DWORD *)v6 + 50) = 0;
    *(_QWORD *)((char *)v9 + 220) = 0LL;
    *(_QWORD *)((char *)v9 + 228) = 0LL;
    *(_QWORD *)((char *)v9 + 204) = 0LL;
    *(_QWORD *)((char *)v9 + 212) = 0LL;
    *((_BYTE *)v9 + 236) = 1;
    *((_QWORD *)v9 + 30) = 0LL;
    LOBYTE(v7) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
      v7);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
      0LL);
    v25 = 0LL;
    v12 = (__int64 *)*((_QWORD *)this + 40);
    v13 = *v12;
    v25 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, CDesktopPositioner **))(v13 + 32))(v12, 1LL, &v25);
    v10 = v14;
    if ( v14 >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((char *)v6 + 184, v25);
      v15 = v25;
      if ( v25 )
        (*(void (__fastcall **)(CDesktopPositioner *))(*(_QWORD *)v25 + 16LL))(v25);
      v22 = 0LL;
      v16 = CDesktopPositioner::_CreateTitlebarConfiguration(v15, a2, &v22);
      v10 = v16;
      v17 = v22;
      if ( v16 >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((char *)v6 + 192, v22);
        *((_DWORD *)v6 + 31) = 0;
        *a3 = v6;
        (*(void (__fastcall **)(ApplicationViewOperation *))(*(_QWORD *)v6 + 8LL))(v6);
        v10 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA42,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v16,
          (int)v22);
      }
      if ( v17 )
        (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3D,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14,
        (int)v22);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    }
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA30,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007000ELL,
      (int)v22);
  }
  if ( v6 )
  {
    v18 = *((_QWORD *)v6 + 8);
    while ( v18 >= 0 )
    {
      if ( (_DWORD)v18 == 0x7FFFFFFF )
        return v10;
      v19 = v18 - 1;
      v20 = v18;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 8, v18 - 1, v18);
      if ( v20 == v18 )
        goto LABEL_21;
    }
    v19 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v18 + 16), v11);
LABEL_21:
    if ( !v19 )
    {
      (*(void (__fastcall **)(ApplicationViewOperation *, __int64))(*(_QWORD *)v23 + 272LL))(v23, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v10;
}
