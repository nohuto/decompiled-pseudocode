/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C0024324
 * Callers:
 *     CitProcessCallout @ 0x1C006AF60 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01FFE88 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0024380 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  REGHANDLE v0; // rcx

  CitpCleanupGlobalImpactContext(&xmmword_1C0256430);
  WORD2(qword_1C0256424) = 0;
  if ( (_BYTE)g_CompatImpact && !byte_1C0256401 )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_1C024B418 = 0;
    EtwUnregister(v0);
  }
  byte_1C0256401 = 1;
}
