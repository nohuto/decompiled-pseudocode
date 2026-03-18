/*
 * XREFs of PopThermalTelemetryCallback @ 0x14056DEC0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C22D88, DelayedWorkQueue);
}
