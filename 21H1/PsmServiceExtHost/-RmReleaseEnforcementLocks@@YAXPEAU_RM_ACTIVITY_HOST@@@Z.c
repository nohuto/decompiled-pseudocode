/*
 * XREFs of ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800378C0
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180046630 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmReleaseEnforcementLocks(struct _RM_ACTIVITY_HOST *a1)
{
  HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64));
  RmpReleaseGlobalLock();
}
