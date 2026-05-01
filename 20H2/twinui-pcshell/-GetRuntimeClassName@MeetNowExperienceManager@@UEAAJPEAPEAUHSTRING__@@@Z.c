/*
 * XREFs of ?GetRuntimeClassName@MeetNowExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800A13B0
 * Callers:
 *     ?GetRuntimeClassName@MeetNowExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800F4B40 (-GetRuntimeClassName@MeetNowExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall MeetNowExperienceManager::GetRuntimeClassName(MeetNowExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.NetworkFlyoutExperienceManager", 0x40u, a2);
}
