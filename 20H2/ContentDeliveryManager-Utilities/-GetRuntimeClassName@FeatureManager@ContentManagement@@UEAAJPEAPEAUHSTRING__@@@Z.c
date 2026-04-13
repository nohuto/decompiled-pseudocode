/*
 * XREFs of ?GetRuntimeClassName@FeatureManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180010210
 * Callers:
 *     ?GetRuntimeClassName@FeatureManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800241F0 (-GetRuntimeClassName@FeatureManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::FeatureManager::GetRuntimeClassName(
        ContentManagement::FeatureManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.FeatureManager", 0x20u, a2);
}
