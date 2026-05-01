/*
 * XREFs of ?Release@SearchAppExperienceManager@@W7EAAKXZ @ 0x1800F25A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall SearchAppExperienceManager::Release(__int64 a1)
{
  return CortanaSharedExperienceManager::Release((CortanaSharedExperienceManager *)(a1 - 8));
}
