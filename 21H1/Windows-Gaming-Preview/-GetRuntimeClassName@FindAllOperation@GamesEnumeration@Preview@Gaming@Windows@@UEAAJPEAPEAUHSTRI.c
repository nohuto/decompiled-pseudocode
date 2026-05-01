/*
 * XREFs of ?GetRuntimeClassName@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180025AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetRuntimeClassName(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_FindAllOperation", 0x45u, a2);
}
