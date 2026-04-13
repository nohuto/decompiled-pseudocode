/*
 * XREFs of ?GetRuntimeClassName@AppManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800596D0
 * Callers:
 *     ?GetRuntimeClassName@AppManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180061310 (-GetRuntimeClassName@AppManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::AppManager::GetRuntimeClassName(ContentManagement::AppManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.AppManager", 0x1Cu, a2);
}
