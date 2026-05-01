/*
 * XREFs of ?Release@SearchAppExperienceManager@@WBI@EAAKXZ @ 0x1800F3B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall SearchAppExperienceManager::Release(__int64 a1)
{
  return CortanaSharedExperienceManager::Release((CortanaSharedExperienceManager *)(a1 - 24));
}
