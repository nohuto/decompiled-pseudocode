/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x1409D7938
 * Callers:
 *     IovpCallDriver1 @ 0x1409D0C4C (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x1409D7BE8 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409E3D70 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E4040 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 */

PVOID __fastcall IovUtilGetBottomDeviceObjectWithTag(_QWORD *Object)
{
  KIRQL v2; // si
  PVOID v3; // rdi

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  do
  {
    v3 = Object;
    Object = *(_QWORD **)(Object[39] + 48LL);
  }
  while ( Object );
  ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
