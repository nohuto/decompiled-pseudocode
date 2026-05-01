/*
 * XREFs of ?get_IsVisible@CActionCenterExperienceManager@@UEAAJPEAE@Z @ 0x180087A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActionCenterExperienceManager::get_IsVisible(CActionCenterExperienceManager *this, bool *a2)
{
  *a2 = *((_DWORD *)this + 34) == 2;
  return 0LL;
}
