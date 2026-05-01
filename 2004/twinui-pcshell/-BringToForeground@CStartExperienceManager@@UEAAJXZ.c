/*
 * XREFs of ?BringToForeground@CStartExperienceManager@@UEAAJXZ @ 0x1801D32A0
 * Callers:
 *     <none>
 * Callees:
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x180088ACC (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CStartExperienceManager::BringToForeground(CStartExperienceManager *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 37) )
    return 0LL;
  if ( !*((_DWORD *)this + 78) )
    return 0LL;
  result = CSingleViewShellExperience::BringToForeground((CStartExperienceManager *)((char *)this + 272));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
