/*
 * XREFs of ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0023C50
 * Callers:
 *     CitUserChange @ 0x1C0023B40 (CitUserChange.c)
 *     CitModerncoreShutdown @ 0x1C02002B0 (CitModerncoreShutdown.c)
 * Callees:
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0023B78 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0024380 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0025560 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0026724 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitpLogoff(struct _CIT_IMPACT_CONTEXT *a1)
{
  struct _CIT_IMPACT_CONTEXT *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  CitpPostUpdateUseInfoLog(a1, 1u);
  CitpDPDataSave(a1);
  CitpContextFlush(v2, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  CitpCleanupGlobalImpactContext(&v2);
}
