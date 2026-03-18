/*
 * XREFs of sub_1C0001CC0 @ 0x1C0001CC0
 * Callers:
 *     sub_1C000B570 @ 0x1C000B570 (sub_1C000B570.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0001CC0(__int64 a1)
{
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.BufferChainingDpc);
  *(_QWORD *)&DeviceObject.AlignmentRequirement = KeGetCurrentThread();
  RtlRbRemoveNode(&DeviceObject.DeviceQueue, a1 + 40);
  *(_QWORD *)&DeviceObject.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.BufferChainingDpc, 0);
}
