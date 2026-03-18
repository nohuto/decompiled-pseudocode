/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C009D02C
 * Callers:
 *     CitProcessCallout @ 0x1C0062720 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01F8B4C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009D088 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  REGHANDLE v0; // rcx

  CitpCleanupGlobalImpactContext(&xmmword_1C024E4A0);
  WORD2(qword_1C024E494) = 0;
  if ( (_BYTE)g_CompatImpact && !byte_1C024E471 )
  {
    v0 = qword_1C0243438;
    qword_1C0243438 = 0LL;
    dword_1C0243418 = 0;
    EtwUnregister(v0);
  }
  byte_1C024E471 = 1;
}
