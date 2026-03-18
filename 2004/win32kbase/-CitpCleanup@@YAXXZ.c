/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C003571C
 * Callers:
 *     CitProcessCallout @ 0x1C009E2D8 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01FA47C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0035778 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  REGHANDLE v0; // rcx

  CitpCleanupGlobalImpactContext(&xmmword_1C02504A0);
  WORD2(qword_1C0250494) = 0;
  if ( (_BYTE)g_CompatImpact && !byte_1C0250471 )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_1C0245418 = 0;
    EtwUnregister(v0);
  }
  byte_1C0250471 = 1;
}
