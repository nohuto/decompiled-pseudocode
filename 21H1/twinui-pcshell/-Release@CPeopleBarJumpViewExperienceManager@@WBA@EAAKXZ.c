/*
 * XREFs of ?Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ @ 0x1800CDCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::Release(__int64 a1)
{
  return CTaskContinuityActivitiesExperienceManager::Release(a1 - 16);
}
