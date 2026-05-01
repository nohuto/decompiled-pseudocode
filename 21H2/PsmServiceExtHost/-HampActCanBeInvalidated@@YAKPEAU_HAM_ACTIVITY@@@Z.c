/*
 * XREFs of ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180004C98
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180004E10 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180006078 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampActCanBeInvalidated(struct _HAM_ACTIVITY *a1)
{
  return (*((_BYTE *)a1 + 544) & 8) == 0 && *((_QWORD *)a1 + 64);
}
