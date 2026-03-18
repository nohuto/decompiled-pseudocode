/*
 * XREFs of VacbLevelReference @ 0x1402C5410
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1402C5060 (CcSetVacbLargeOffset.c)
 *     CcAdjustVacbLevelLockCount @ 0x1402C5368 (CcAdjustVacbLevelLockCount.c)
 *     CcExtendVacbArray @ 0x14034FAB0 (CcExtendVacbArray.c)
 *     CcCalculateVacbLevelLockCount @ 0x14037B758 (CcCalculateVacbLevelLockCount.c)
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
