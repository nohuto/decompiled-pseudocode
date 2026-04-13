/*
 * XREFs of ?GetIids@MobilityExperienceSettings@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180024CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::MobilityExperienceSettings::GetIids(
           (ContentManagement::MobilityExperienceSettings *)(a1 - 48),
           a2,
           a3);
}
