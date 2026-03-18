/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x140A92010
 * Callers:
 *     IovpCallDriver1 @ 0x140A8B840 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x140A922C0 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AA6400 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AA66E0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
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
