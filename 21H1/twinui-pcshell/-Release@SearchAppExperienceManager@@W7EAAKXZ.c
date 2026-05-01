/*
 * XREFs of ?Release@SearchAppExperienceManager@@W7EAAKXZ @ 0x1800CDB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall SearchAppExperienceManager::Release(__int64 a1)
{
  return CortanaSharedExperienceManager::Release((CortanaSharedExperienceManager *)(a1 - 8));
}
