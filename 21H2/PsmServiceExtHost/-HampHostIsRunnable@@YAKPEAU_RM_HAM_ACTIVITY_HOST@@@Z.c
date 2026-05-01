/*
 * XREFs of ?HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800356DC
 * Callers:
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800198C0 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180047BFC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

_BOOL8 __fastcall HampHostIsRunnable(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+40h] [rbp+18h] BYREF

  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v2, (union _RM_OPTIMIZATION_STATE *)&v3);
  return (v2 & 0x100) == 0 || (v3 & 0x100) != 0;
}
