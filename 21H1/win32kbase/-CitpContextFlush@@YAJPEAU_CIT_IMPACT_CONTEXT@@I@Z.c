/*
 * XREFs of ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0026724
 * Callers:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0023C50 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     CitDisplayPowerChange @ 0x1C0050E50 (CitDisplayPowerChange.c)
 *     CitProcessCallout @ 0x1C006AF60 (CitProcessCallout.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01FE8DC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01FFE88 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C002682C (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00275DC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 */

__int64 __fastcall CitpContextFlush(struct _CIT_IMPACT_CONTEXT *a1, unsigned int a2)
{
  struct tagPROCESSINFO *v2; // rdi

  v2 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
  if ( v2 )
  {
    CitpSetForegroundProcess(a1, a2, 0LL, 0LL, 0LL);
    CitpSetForegroundProcess(a1, a2, v2, 0LL, 0LL);
  }
  CitpInteractionSummariesFlush(a1, 0);
  return 0LL;
}
