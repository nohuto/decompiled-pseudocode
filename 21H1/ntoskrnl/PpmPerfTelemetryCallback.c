/*
 * XREFs of PpmPerfTelemetryCallback @ 0x140322EB0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140322ED4 (PopQueueWorkItem.c)
 */

__int64 PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem(&unk_140C246E8, 1LL);
}
