/*
 * XREFs of ?HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029DDC
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180029A78 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029E14 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostCheckCancelCacheTimer(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx

  if ( !HampHostIsCached(a1) && (*(_QWORD *)(v2 + 648) & 0x4000000000000LL) != 0 )
  {
    if ( (unsigned int)TpSetTimerEx(*(_QWORD *)(v2 + 824), 0LL, 0LL, 0LL) )
      *((_QWORD *)a1 + 81) &= ~0x4000000000000uLL;
  }
}
