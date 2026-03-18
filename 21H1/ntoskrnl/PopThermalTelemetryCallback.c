/*
 * XREFs of PopThermalTelemetryCallback @ 0x140569E40
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140322ED4 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C22EA8, DelayedWorkQueue);
}
