/*
 * XREFs of ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00BFDA0
 * Callers:
 *     zzzReattachThreads @ 0x1C00BF898 (zzzReattachThreads.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00BFC20 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00BFCDC (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY *__fastcall GetRecalcPtiFromListEntry(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY *Flink; // rbx

  if ( gListAffectedThreadsForQueueRecalc.Flink == &gListAffectedThreadsForQueueRecalc )
    Flink = (struct _LIST_ENTRY *)((char *)a1 - 744);
  else
    Flink = a1[1].Flink;
  if ( Flink && !Flink[28].Blink )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  return Flink;
}
