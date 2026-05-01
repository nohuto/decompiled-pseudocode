/*
 * XREFs of ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006630
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180047C50 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall HampHostReleaseLockExclusive(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int a2)
{
  HampHostReleaseLockExclusiveEx(a1, a2);
}
