/*
 * XREFs of ?IsSystemUiVisible@CActionCenterExperienceManager@@UEAAHXZ @ 0x1801AFBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CActionCenterExperienceManager::IsSystemUiVisible(CActionCenterExperienceManager *this)
{
  return *((_DWORD *)this + 30) == 2;
}
