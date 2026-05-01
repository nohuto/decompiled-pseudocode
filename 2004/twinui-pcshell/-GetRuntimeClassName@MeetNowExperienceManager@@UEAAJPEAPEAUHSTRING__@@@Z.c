/*
 * XREFs of ?GetRuntimeClassName@MeetNowExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18009FFE0
 * Callers:
 *     ?GetRuntimeClassName@MeetNowExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800F3580 (-GetRuntimeClassName@MeetNowExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall MeetNowExperienceManager::GetRuntimeClassName(MeetNowExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.NetworkFlyoutExperienceManager", 0x40u, a2);
}
