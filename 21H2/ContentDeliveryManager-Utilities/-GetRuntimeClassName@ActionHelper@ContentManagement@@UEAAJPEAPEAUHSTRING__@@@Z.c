/*
 * XREFs of ?GetRuntimeClassName@ActionHelper@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180012060
 * Callers:
 *     ?GetRuntimeClassName@ActionHelper@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180024DB0 (-GetRuntimeClassName@ActionHelper@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ActionHelper::GetRuntimeClassName(
        ContentManagement::ActionHelper *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ActionHelper", 0x1Eu, a2);
}
