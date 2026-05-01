/*
 * XREFs of ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x18002FD58
 * Callers:
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002FA70 (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180030CE4 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009D804 (-_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@.c)
 *     ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A0870 (-OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     ?OnEventQueued@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A0A70 (-OnEventQueued@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEA.c)
 *     ?OnViewEventQueued@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A6420 (-OnViewEventQueued@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collect.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801BD1BC (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801BF260 (-OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     ?OnEventQueued@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801C01C0 (-OnEventQueued@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801CC1D0 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 *     ?OnEventQueued@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801CECB0 (-OnEventQueued@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHST.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801D40E0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801D8CD0 (-OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 *     ?OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801DE580 (-OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801E9710 (-OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801F0D80 (-OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18020EBF8 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18014F208 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

bool __fastcall Microsoft::WRL::Wrappers::operator==(HSTRING *a1, __int64 a2)
{
  HSTRING v2; // rdx
  HSTRING v3; // rcx
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  INT32 result; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(HSTRING *)(a2 + 24);
  v3 = *a1;
  result = 0;
  v4 = WindowsCompareStringOrdinal(v3, v2, &result);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    JUMPOUT(0x18002FD92LL);
  }
  return result == 0;
}
