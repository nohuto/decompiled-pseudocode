/*
 * XREFs of ?GetRuntimeClassName@MobilityExperienceSettings@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180011940
 * Callers:
 *     ?GetRuntimeClassName@MobilityExperienceSettings@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180021C30 (-GetRuntimeClassName@MobilityExperienceSettings@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::MobilityExperienceSettings::GetRuntimeClassName(
        ContentManagement::MobilityExperienceSettings *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.MobilityExperienceSettings", 0x2Cu, a2);
}
