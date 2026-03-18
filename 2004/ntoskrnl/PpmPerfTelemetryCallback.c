/*
 * XREFs of PpmPerfTelemetryCallback @ 0x140360AA0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 */

__int64 PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem(&unk_140C24408, 1LL);
}
