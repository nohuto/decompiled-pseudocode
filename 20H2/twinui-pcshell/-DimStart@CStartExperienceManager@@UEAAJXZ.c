/*
 * XREFs of ?DimStart@CStartExperienceManager@@UEAAJXZ @ 0x180088D20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x180043A38 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall CStartExperienceManager::DimStart(CStartExperienceManager *this)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 616) )
    return 0LL;
  result = CStartExperienceManager::ReactivateHelper(
             (CStartExperienceManager *)((char *)this - 40),
             L"OnDimmedStateChanged");
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
