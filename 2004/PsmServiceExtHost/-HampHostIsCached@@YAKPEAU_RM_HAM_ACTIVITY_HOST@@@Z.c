/*
 * XREFs of ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029CA4
 * Callers:
 *     ?HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C6C (-HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18002A810 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampHostIsCached(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return (*((_QWORD *)a1 + 81) & 0x2000000000000LL) != 0
      && *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 75) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 600);
}
