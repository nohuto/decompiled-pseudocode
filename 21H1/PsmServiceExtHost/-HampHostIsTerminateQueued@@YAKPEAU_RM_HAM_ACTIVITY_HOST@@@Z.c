/*
 * XREFs of ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000405C
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180046630 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampHostIsTerminateQueued(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return (*((_DWORD *)a1 + 162) & 0x30000) != 0LL;
}
