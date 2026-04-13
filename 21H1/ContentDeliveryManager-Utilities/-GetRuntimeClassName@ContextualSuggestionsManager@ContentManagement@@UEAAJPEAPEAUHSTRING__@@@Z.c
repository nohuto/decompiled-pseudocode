/*
 * XREFs of ?GetRuntimeClassName@ContextualSuggestionsManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000EA90
 * Callers:
 *     ?GetRuntimeClassName@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180021B10 (-GetRuntimeClassName@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContextualSuggestionsManager::GetRuntimeClassName(
        ContentManagement::ContextualSuggestionsManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContextualSuggestionsManager", 0x2Eu, a2);
}
