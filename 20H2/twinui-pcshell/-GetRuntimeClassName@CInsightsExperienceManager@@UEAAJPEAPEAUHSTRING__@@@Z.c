/*
 * XREFs of ?GetRuntimeClassName@CInsightsExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801EF7F0
 * Callers:
 *     ?GetRuntimeClassName@CInsightsExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800F4620 (-GetRuntimeClassName@CInsightsExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CInsightsExperienceManager::GetRuntimeClassName(CInsightsExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.InsightsExperienceManager", 0x3Bu, a2);
}
