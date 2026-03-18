/*
 * XREFs of VacbLevelReference @ 0x1402FA824
 * Callers:
 *     CcExtendVacbArray @ 0x1402F9F78 (CcExtendVacbArray.c)
 *     CcSetVacbLargeOffset @ 0x1402FA474 (CcSetVacbLargeOffset.c)
 *     CcAdjustVacbLevelLockCount @ 0x1402FA77C (CcAdjustVacbLevelLockCount.c)
 *     CcCalculateVacbLevelLockCount @ 0x14037D488 (CcCalculateVacbLevelLockCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VacbLevelReference(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = 0LL;
  if ( !a3 )
    v3 = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
  return a2 + v3 + 1024;
}
