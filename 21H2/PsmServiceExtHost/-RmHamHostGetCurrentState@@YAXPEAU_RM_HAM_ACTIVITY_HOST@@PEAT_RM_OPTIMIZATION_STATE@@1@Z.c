/*
 * XREFs of ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180047BFC
 * Callers:
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180004DD4 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180005F08 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800065A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018970 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800198C0 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019B80 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BC40 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001D460 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023158 (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800356DC (-HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D93C (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeDesiredHamState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007E0EC (-HampHostComputeDesiredHamState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180073E08 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmHamHostGetCurrentState(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        union _RM_OPTIMIZATION_STATE *a2,
        union _RM_OPTIMIZATION_STATE *a3)
{
  struct _RM_ACTIVITY_HOST *v3; // [rsp+20h] [rbp-18h]

  v3 = RmHostFromHamHost(a1);
  *(_DWORD *)a2 = *((_DWORD *)v3 + 311);
  if ( a3 )
    *(_DWORD *)a3 = *((_DWORD *)v3 + 312);
}
