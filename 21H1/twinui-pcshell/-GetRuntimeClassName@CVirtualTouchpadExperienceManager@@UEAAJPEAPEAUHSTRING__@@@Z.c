/*
 * XREFs of ?GetRuntimeClassName@CVirtualTouchpadExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801C0630
 * Callers:
 *     ?GetRuntimeClassName@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800CE440 (-GetRuntimeClassName@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CVirtualTouchpadExperienceManager::GetRuntimeClassName(
        CVirtualTouchpadExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.VirtualTouchpadExperienceManager", 0x42u, a2);
}
