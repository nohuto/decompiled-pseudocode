/*
 * XREFs of ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1804506B4
 * Callers:
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800855A4 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1800981D0 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 *     ?OnDismiss@CBaseTrayFlyoutExperienceManager@@UEAAJXZ @ 0x180098910 (-OnDismiss@CBaseTrayFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18019B750 (-OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x18019BB80 (-SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z.c)
 *     ?Dismiss@CPeopleBarJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1801AAC78 (-Dismiss@CPeopleBarJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?ExitContactCard@CQuickConnectExperienceManager@@UEAAJXZ @ 0x1801B9A70 (-ExitContactCard@CQuickConnectExperienceManager@@UEAAJXZ.c)
 *     ?OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ @ 0x1801BA980 (-OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ.c)
 *     _lambda_3bbf153ae8ca8cd098f14c7e321b666e_::operator() @ 0x1801BF1E4 (_lambda_3bbf153ae8ca8cd098f14c7e321b666e_--operator().c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x1801CC3F8 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_74146cecc084fae8e2622cfab6f9ac60___::_ScopeExitFn__lambda_74146cecc084fae8e2622cfab6f9ac60___ @ 0x1804501D8 (wil--details--ScopeExitFn__lambda_74146cecc084fae8e2622cfab6f9ac60___--_ScopeExitFn__lambda_7414.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180012A10 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180450A88 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x18045120C (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 */

__int64 __fastcall CSingleViewShellExperience::DestroyView(CSingleViewShellExperience *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // edi
  __int64 result; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 3) )
  {
    CSingleViewShellExperience::Hide((__int64)this, 0LL);
    v2 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 112LL))(
           *((_QWORD *)this + 11),
           this);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EF,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v2);
    v3 = CSingleViewShellExperience::NavigateView(this, 0LL);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v6 = CSingleViewShellExperience::OnViewDestroyedBase(this);
      v7 = v6;
      if ( v6 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F1,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v6);
      return v7;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F0,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
  }
  else
  {
    *((_DWORD *)this + 17) = 0;
    result = 0LL;
    *((_DWORD *)this + 16) = 2;
  }
  return result;
}
