/*
 * XREFs of ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006398
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D6A0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800063F8 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180006418 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180017768 (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 */

__int64 __fastcall HampHostIsForegroundBoostedOrPending(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_ACTIVITY *i; // rax
  __int64 v2; // rdx
  __int64 v4; // r8
  int v5; // eax
  int v6; // ecx

  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v4) )
  {
    if ( !i )
      return 0LL;
    LOBYTE(v2) = 1;
    if ( (unsigned int)HampActIsStartedOrReachedPendState(i, v2) )
    {
      v5 = RmpImportanceToRequiredExecutionSpeed(*(unsigned int *)(v4 + 424));
      v6 = *(_DWORD *)(v4 + 480) & 3;
      if ( v6 <= v5 )
        v6 = v5;
      if ( v6 >= 2 )
        break;
    }
  }
  return 1LL;
}
