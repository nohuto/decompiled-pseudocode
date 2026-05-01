/*
 * XREFs of ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1802826C8
 * Callers:
 *     _lambda_221251db4cf3622556bc46ff7d89c93b_::operator() @ 0x18028218C (_lambda_221251db4cf3622556bc46ff7d89c93b_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002B4A0 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x1800F1D40 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18015A988 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ?GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x180282FC0 (-GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x1802830F8 (-GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetTopLevelTabEligibleWindowFromProcess@@YAPEAUHWND__@@KPEAU1@PEAUIVirtualDesktopManager@@@Z @ 0x180283134 (-GetTopLevelTabEligibleWindowFromProcess@@YAPEAUHWND__@@KPEAU1@PEAUIVirtualDesktopManager@@@Z.c)
 *     ?IsTabbableWindowBetweenInZOrder@TabGroupingPolicy@@YA_NPEAUHWND__@@0@Z @ 0x180283238 (-IsTabbableWindowBetweenInZOrder@TabGroupingPolicy@@YA_NPEAUHWND__@@0@Z.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@QEAAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@3@_K@Z @ 0x180283378 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@de.c)
 */

void __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::ChooseTargetViewUsingHeuristic(
        TabGroupingPolicy::TabGroupPolicyEvaluator *this,
        struct IApplicationViewCollection *a2)
{
  int v4; // edx
  int v5; // r9d
  HWND TabGroupTargetWindow; // r14
  void (__fastcall *v7)(struct IApplicationViewCollection *, HWND, char *); // rdi
  unsigned int v8; // r8d
  HSTRING_HEADER *v9; // rax
  int PropVal; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  int (__fastcall *v17)(__int64, _QWORD, PCWSTR, _QWORD, int *); // rdi
  PCWSTR StringRawBuffer; // rax
  void (__fastcall *v19)(struct IApplicationViewCollection *, _QWORD, DWORD *); // rbx
  __int64 *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int64 *); // rdi
  __int64 *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  HWND TargetWindow; // rax
  HWND v30; // rbx
  TabGroupingPolicy *TopLevelTabEligibleWindowFromProcess; // rax
  HWND v32; // r8
  TabGroupingPolicy *v33; // r14
  void (__fastcall *v34)(struct IApplicationViewCollection *, TabGroupingPolicy *, char *); // rdi
  LPDWORD pdwType; // [rsp+20h] [rbp-59h]
  DWORD dwProcessId[2]; // [rsp+40h] [rbp-39h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-31h] BYREF
  HSTRING string; // [rsp+50h] [rbp-29h]
  __int64 v39; // [rsp+58h] [rbp-21h] BYREF
  int v40[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v41; // [rsp+68h] [rbp-11h] BYREF
  struct IVirtualDesktopManager *v42; // [rsp+70h] [rbp-9h] BYREF
  __int64 v43; // [rsp+78h] [rbp-1h] BYREF
  HSTRING_HEADER v44; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\TabShellAppSettings",
          L"ForceNewTabGroup",
          0x10u,
          0LL,
          dwProcessId,
          &pcbData) )
  {
    if ( dwProcessId[0] )
      return;
    TabGroupTargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTabGroupTargetWindow(this);
    if ( TabGroupTargetWindow )
    {
      v7 = *(void (__fastcall **)(struct IApplicationViewCollection *, HWND, char *))(*(_QWORD *)a2 + 48LL);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 4);
      v7(a2, TabGroupTargetWindow, (char *)this + 32);
      return;
    }
    string = 0LL;
    if ( !*(_QWORD *)this )
      goto LABEL_32;
    WindowsDeleteString(0LL);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, (const WCHAR **)off_1804D0320, v8);
    *(_QWORD *)dwProcessId = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                this,
                (HSTRING)v9[1].Reserved.Reserved1,
                (struct Windows::Foundation::IPropertyValue **)dwProcessId);
    if ( PropVal >= 0 )
    {
      v11 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}(*(__int64 *)dwProcessId);
      PropVal = v11;
      if ( v11 >= 0 )
      {
        v12 = *(_QWORD *)dwProcessId;
        if ( *(_QWORD *)dwProcessId )
        {
          *(_QWORD *)dwProcessId = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        PropVal = 0;
LABEL_13:
        if ( PropVal < 0 )
        {
LABEL_32:
          v26 = (__int64 *)*((_QWORD *)this + 1);
          v27 = *v26;
          v42 = 0LL;
          v28 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, struct IVirtualDesktopManager **))(v27 + 24))(
                  v26,
                  &IID_IVirtualDesktopManager,
                  &GUID_a5cd92ff_29be_454c_8d04_d82879fb3f1b,
                  &v42);
          if ( v28 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x11A,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
              (const char *)(unsigned int)v28);
          TargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTargetWindow(this);
          v30 = TargetWindow;
          if ( TargetWindow )
          {
            if ( GetWindowThreadProcessId(TargetWindow, dwProcessId) )
            {
              TopLevelTabEligibleWindowFromProcess = (TabGroupingPolicy *)GetTopLevelTabEligibleWindowFromProcess(
                                                                            dwProcessId[0],
                                                                            v30,
                                                                            v42);
              v33 = TopLevelTabEligibleWindowFromProcess;
              if ( TopLevelTabEligibleWindowFromProcess )
              {
                if ( !TabGroupingPolicy::IsTabbableWindowBetweenInZOrder(TopLevelTabEligibleWindowFromProcess, v30, v32) )
                {
                  v34 = *(void (__fastcall **)(struct IApplicationViewCollection *, TabGroupingPolicy *, char *))(*(_QWORD *)a2 + 48LL);
                  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 4);
                  v34(a2, v33, (char *)this + 32);
                }
              }
            }
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v42);
          goto LABEL_29;
        }
        v13 = (__int64 *)*((_QWORD *)this + 1);
        v14 = *v13;
        v41 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v14 + 24))(
                v13,
                &IID_IAppViewManager,
                &GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086,
                &v41);
        if ( v15 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFF,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
            (const char *)(unsigned int)v15);
LABEL_31:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
          goto LABEL_32;
        }
        v16 = v41;
        v17 = *(int (__fastcall **)(__int64, _QWORD, PCWSTR, _QWORD, int *))(*(_QWORD *)v41 + 56LL);
        *(_QWORD *)v40 = 0LL;
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        if ( v17(v16, 0LL, StringRawBuffer, 0LL, v40) < 0 )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v40);
          goto LABEL_31;
        }
        *(_QWORD *)dwProcessId = 0LL;
        v19 = *(void (__fastcall **)(struct IApplicationViewCollection *, _QWORD, DWORD *))(*(_QWORD *)a2 + 56LL);
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)dwProcessId);
        v19(a2, *(_QWORD *)v40, dwProcessId);
        v39 = 0LL;
        pcbData = 0;
        v20 = (__int64 *)*((_QWORD *)this + 1);
        v21 = *v20;
        v43 = 0LL;
        v22 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, __int64 *))(v21 + 24))(
                v20,
                &SID_VirtualDesktopManager,
                &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                &v43);
        if ( v22 >= 0 )
        {
          v24 = v43;
          v25 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 48LL);
          if ( v39 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
          v22 = v25(v24, &v39);
          if ( v22 >= 0 )
          {
            v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, DWORD *))(*(_QWORD *)v39 + 24LL))(
                    v39,
                    *(_QWORD *)dwProcessId,
                    &pcbData);
            if ( v22 >= 0 )
            {
              if ( !pcbData )
              {
LABEL_28:
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)dwProcessId);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v40);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
LABEL_29:
                WindowsDeleteString(string);
                return;
              }
LABEL_27:
              wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
                (__int64 *)this + 4,
                *(__int64 *)dwProcessId);
              goto LABEL_28;
            }
            v23 = 271LL;
          }
          else
          {
            v23 = 270LL;
          }
        }
        else
        {
          v23 = 269LL;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
          (const char *)(unsigned int)v22);
        goto LABEL_27;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)dwProcessId);
    goto LABEL_13;
  }
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::ReportVariantUsage(
    (unsigned int)&`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetImpl'::`2'::impl,
    v4,
    0,
    v5,
    (__int64)pdwType);
}
