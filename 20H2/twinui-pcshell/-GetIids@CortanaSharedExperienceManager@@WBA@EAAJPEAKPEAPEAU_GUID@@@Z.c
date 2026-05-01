/*
 * XREFs of ?GetIids@CortanaSharedExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800F3990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaSharedExperienceManager::GetIids(__int64 a1, unsigned int *a2, struct _GUID **a3)
{
  return SearchAppExperienceManager::GetIids((SearchAppExperienceManager *)(a1 - 16), a2, a3);
}
