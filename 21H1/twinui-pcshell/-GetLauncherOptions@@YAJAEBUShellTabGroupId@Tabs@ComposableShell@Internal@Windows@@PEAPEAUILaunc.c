/*
 * XREFs of ?GetLauncherOptions@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUILauncherOptions2@System@5@@Z @ 0x18024E484
 * Callers:
 *     ?GetLaunchOptionSite@@YA?AV?$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024E3FC (-GetLaunchOptionSite@@YA-AV-$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUSh.c)
 *     ?LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z @ 0x1802708A4 (-LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180095310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExper.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011C428 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0LaunchNewTabPageService@@QEAA@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180247C34 (--0LaunchNewTabPageService@@QEAA@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 */

__int64 __fastcall GetLauncherOptions(
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a1,
        struct Windows::System::ILauncherOptions2 **a2)
{
  LaunchNewTabPageService *v4; // rax
  LaunchNewTabPageService *v5; // rsi
  int v6; // edi
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID); // rdi
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  int v13; // ebx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  volatile int *v16; // rdx
  int v17; // eax
  volatile int *v18; // rdx
  struct Windows::System::ILauncherOptions2 *v19; // rax
  volatile int *v21; // rdx
  struct Windows::System::ILauncherOptions2 *v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v23)(__int64, GUID *, struct Windows::System::ILauncherOptions2 **); // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *a2 = 0LL;
  v22 = 0LL;
  v4 = (LaunchNewTabPageService *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 && (v5 = LaunchNewTabPageService::LaunchNewTabPageService(v4, a1)) != 0LL )
  {
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.System.LauncherOptions",
      0x1Fu,
      0x1Eu);
    v6 = RoActivateInstance(v25, &v23);
    if ( v6 < 0 )
      goto LABEL_18;
    v8 = *(_QWORD *)&GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v8 = *(_QWORD *)GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v8 )
    {
      v6 = (**v23)((__int64)v23, &GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49, &v22);
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::System::ILauncherOptions2 **)))(*v23)[2])(v23);
      v9 = (__int64)v22;
    }
    else
    {
      v9 = (__int64)v23;
      v22 = (struct Windows::System::ILauncherOptions2 *)v23;
    }
    if ( v6 < 0 )
    {
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(
        (__int64)v5,
        v21);
      v13 = v6;
    }
    else
    {
      v10 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v9 + 56LL);
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const WCHAR **)off_1804AAC08,
              v7);
      v12 = v10(v9, v11[1].Reserved.Reserved1);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v17 = (**(__int64 (__fastcall ***)(struct Windows::System::ILauncherOptions2 *, GUID *, __int64 *))v22)(
                v22,
                &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352,
                (__int64 *)&v23);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            5481LL,
            (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
            (const char *)(unsigned int)v17);
        v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::System::ILauncherOptions2 **), LaunchNewTabPageService *))(*v23)[3])(
                v23,
                v5);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
        if ( v13 >= 0 )
        {
          v19 = v22;
          v22 = 0LL;
          *a2 = v19;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(
            (__int64)v5,
            v18);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
          return 0LL;
        }
        v14 = (unsigned int)v13;
        v15 = 172LL;
      }
      else
      {
        v14 = (unsigned int)v12;
        v15 = 171LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)v14);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(
        (__int64)v5,
        v16);
    }
  }
  else
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
      (const char *)0x8007000ELL);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
  return (unsigned int)v13;
}
