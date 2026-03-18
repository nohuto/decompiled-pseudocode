/*
 * XREFs of sub_1C000B9D0 @ 0x1C000B9D0
 * Callers:
 *     sub_1C0001B60 @ 0x1C0001B60 (sub_1C0001B60.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *sub_1C000B9D0()
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(&DeviceObject.Dpc.DpcListEntry, 0LL);
  result = KeGetCurrentThread();
  DeviceObject.Dpc.ProcessorHistory = (KAFFINITY)result;
  return result;
}
