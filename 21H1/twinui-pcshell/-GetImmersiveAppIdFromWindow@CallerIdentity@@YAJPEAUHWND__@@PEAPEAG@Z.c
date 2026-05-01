/*
 * XREFs of ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180446578
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18002A890 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x18009AA1C (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180150790 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z @ 0x180163470 (-GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18028A6C4 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18028AC3C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180329418 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1804473F8 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18001699C (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180033BC8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180115624 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetImmersiveAppIdFromWindow(
        CallerIdentity *this,
        unsigned int **a2,
        unsigned __int16 **a3)
{
  const char *v5; // r9
  __int64 v7; // rdx
  wil::details *v8; // rcx
  char *v9; // rbx
  __int64 v10; // r8
  const char *v11; // r9
  int LastError; // eax
  unsigned __int16 **v13; // r8
  const char *v14; // r9
  int ProcessAppId; // edi
  int WeakWindowAppId; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+48h] [rbp+10h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x6B,
             (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
             v5);
  v9 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( ((unsigned __int64)(v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v19 = 0LL;
    if ( (unsigned int)GetProcessUIContextInformation(v9, &v19) )
    {
      if ( (_DWORD)v19 == 2
        && (WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(this, a2, v13),
            ProcessAppId = WeakWindowAppId,
            WeakWindowAppId < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x78,
          (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
          (const char *)(unsigned int)WeakWindowAppId);
      }
      else if ( *a2 || (ProcessAppId = CallerIdentity::GetProcessAppId(v9, a2, v13), ProcessAppId >= 0) )
      {
        ProcessAppId = 0;
      }
      goto LABEL_14;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x71,
                  (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                  v14);
  }
  else
  {
    LastError = wil::details::GetLastErrorFailHr(v8, v7, v10, v11);
  }
  ProcessAppId = LastError;
LABEL_14:
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
  return (unsigned int)ProcessAppId;
}
