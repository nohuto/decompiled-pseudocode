/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1403316D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 */

__int64 PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem(&unk_140C24548, 1LL);
}
