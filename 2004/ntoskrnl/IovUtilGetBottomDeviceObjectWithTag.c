/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x1409D3928
 * Callers:
 *     IovpCallDriver1 @ 0x1409CCC3C (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x1409D3BD8 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409DFD60 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E0030 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
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
