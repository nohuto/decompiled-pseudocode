/*
 * XREFs of ?QueryInterface@MobilityExperienceSettings@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::MobilityExperienceSettings::QueryInterface(
           (ContentManagement::MobilityExperienceSettings *)(a1 - 40),
           a2,
           a3);
}
