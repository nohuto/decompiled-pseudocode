/*
 * XREFs of ?get_IsVisible@CToastCenterExperienceManager@@UEAAJPEAE@Z @ 0x1801A6300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CToastCenterExperienceManager::get_IsVisible(CToastCenterExperienceManager *this, bool *a2)
{
  *a2 = *((_DWORD *)this + 36) == 2;
  return 0LL;
}
