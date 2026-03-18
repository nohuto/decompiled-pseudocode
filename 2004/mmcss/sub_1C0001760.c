/*
 * XREFs of sub_1C0001760 @ 0x1C0001760
 * Callers:
 *     sub_1C000A5B0 @ 0x1C000A5B0 (sub_1C000A5B0.c)
 * Callees:
 *     sub_1C0001940 @ 0x1C0001940 (sub_1C0001940.c)
 */

void __fastcall sub_1C0001760(__int64 a1)
{
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
  DeviceObject.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  sub_1C0001940(a1);
  DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
}
