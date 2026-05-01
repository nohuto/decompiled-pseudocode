/*
 * XREFs of ?Release@MeetNowExperienceManager@@W7EAAKXZ @ 0x1800CDCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MeetNowExperienceManager::Release(__int64 a1)
{
  return CTaskContinuityActivitiesExperienceManager::Release(a1 - 8);
}
