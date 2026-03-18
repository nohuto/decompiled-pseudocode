/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x1409D38C8
 * Callers:
 *     IovpCallDriver1 @ 0x1409CCC2C (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x1409D3B78 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409DFD00 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409DFFD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
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
