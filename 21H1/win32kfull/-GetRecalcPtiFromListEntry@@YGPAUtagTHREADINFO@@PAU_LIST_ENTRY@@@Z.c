/*
 * XREFs of ?GetRecalcPtiFromListEntry@@YGPAUtagTHREADINFO@@PAU_LIST_ENTRY@@@Z @ 0xC7D7A
 * Callers:
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     ?zzzRecalcThreadAttachment@@YGXXZ @ 0xC7C48 (-zzzRecalcThreadAttachment@@YGXXZ.c)
 *     ?zzzRecalc2@@YGXPAUtagQ@@@Z @ 0xC7CC8 (-zzzRecalc2@@YGXPAUtagQ@@@Z.c)
 * Callees:
 *     ?IsPackedQueueRecalc@@YGHXZ @ 0xC7DAA (-IsPackedQueueRecalc@@YGHXZ.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

struct tagTHREADINFO *__cdecl GetRecalcPtiFromListEntry()
{
  int v0; // ecx
  int v1; // esi

  if ( IsPackedQueueRecalc() )
    v1 = *(_DWORD *)(v0 + 8);
  else
    v1 = v0 - 404;
  if ( v1 && !*(_DWORD *)(v1 + 248) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  return (struct tagTHREADINFO *)v1;
}
