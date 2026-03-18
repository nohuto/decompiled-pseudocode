/*
 * XREFs of ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C0038A1C
 * Callers:
 *     zzzReattachThreads @ 0x1C0038514 (zzzReattachThreads.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C003889C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0038958 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY *__fastcall GetRecalcPtiFromListEntry(struct _LIST_ENTRY *a1, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rbx

  if ( gListAffectedThreadsForQueueRecalc.Flink == &gListAffectedThreadsForQueueRecalc )
    Flink = a1 - 46;
  else
    Flink = a1[1].Flink;
  if ( Flink && !Flink[28].Flink )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  return Flink;
}
