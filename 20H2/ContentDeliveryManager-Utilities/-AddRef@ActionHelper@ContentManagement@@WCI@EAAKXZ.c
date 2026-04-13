/*
 * XREFs of ?AddRef@ActionHelper@ContentManagement@@WCI@EAAKXZ @ 0x1800238C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ActionHelper::AddRef(__int64 a1)
{
  return ContentManagement::MobilityExperienceSettings::AddRef((ContentManagement::MobilityExperienceSettings *)(a1 - 40));
}
