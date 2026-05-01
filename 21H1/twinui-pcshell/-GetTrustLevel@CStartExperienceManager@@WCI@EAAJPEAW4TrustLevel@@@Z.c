/*
 * XREFs of ?GetTrustLevel@CStartExperienceManager@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800CE150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CInsightsExperienceManager::GetTrustLevel((CInsightsExperienceManager *)(a1 - 40), a2);
}
