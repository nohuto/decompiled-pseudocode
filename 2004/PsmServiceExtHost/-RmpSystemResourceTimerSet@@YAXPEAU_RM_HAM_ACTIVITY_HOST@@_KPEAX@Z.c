/*
 * XREFs of ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x18002A714
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A150 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800275BC (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180029E3C (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemResourceTimerSet(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2, void *a3)
{
  __int64 v5; // rsi

  v5 = *(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL);
  if ( (*(int (__fastcall **)(void *, __int64, _QWORD))(v5 + 184))(a3, a2, 0LL) < 0 )
    (*(void (__fastcall **)(void *, __int64, __int64))(v5 + 184))(a3, a2, 1LL);
}
