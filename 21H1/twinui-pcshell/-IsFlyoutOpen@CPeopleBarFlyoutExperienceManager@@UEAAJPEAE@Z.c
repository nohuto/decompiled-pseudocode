/*
 * XREFs of ?IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z @ 0x1801A81F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ @ 0x180097818 (-CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::IsFlyoutOpen(CPeopleBarFlyoutExperienceManager *this, bool *a2)
{
  bool v3; // al

  v3 = *((_DWORD *)this + 38) == 2
    || !CBaseTrayFlyoutExperienceManager::DebounceDetection::CanShow((CPeopleBarFlyoutExperienceManager *)((char *)this + 664));
  *a2 = v3;
  return 0LL;
}
