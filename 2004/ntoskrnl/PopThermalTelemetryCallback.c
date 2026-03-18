/*
 * XREFs of PopThermalTelemetryCallback @ 0x14056A490
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C22C28, DelayedWorkQueue);
}
