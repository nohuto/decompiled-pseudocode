/*
 * XREFs of ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x1800087CC
 * Callers:
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003E80 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 *     ?ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z @ 0x180007550 (-ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180029BD8 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 * Callees:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x180038EE8 (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 */

bool __fastcall CWindowData::WillEndAnimationCloaked(CWindowData *this)
{
  HWND v1; // rdx
  bool v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HWND)*((_QWORD *)this + 5);
  v3 = (*((_BYTE *)this + 612) & 2) != 0;
  CWindowPropertyTracker::GetWindowEndCloak(
    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
    v1,
    &v3);
  return v3;
}
