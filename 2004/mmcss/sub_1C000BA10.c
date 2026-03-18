/*
 * XREFs of sub_1C000BA10 @ 0x1C000BA10
 * Callers:
 *     sub_1C0001B60 @ 0x1C0001B60 (sub_1C0001B60.c)
 * Callees:
 *     <none>
 */

__int64 sub_1C000BA10()
{
  DeviceObject.Dpc.ProcessorHistory = 0LL;
  return ExReleasePushLockExclusiveEx(&DeviceObject.Dpc.DpcListEntry, 0LL);
}
