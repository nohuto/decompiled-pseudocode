/*
 * XREFs of ?GetRuntimeClassName@CStartExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801D34C0
 * Callers:
 *     ?GetRuntimeClassName@CStartExperienceManager@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800F4110 (-GetRuntimeClassName@CStartExperienceManager@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CStartExperienceManager@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800F4120 (-GetRuntimeClassName@CStartExperienceManager@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CStartExperienceManager::GetRuntimeClassName(CStartExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.StartExperienceManager", 0x38u, a2);
}
