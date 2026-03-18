/*
 * XREFs of IovUtilGetLowerDeviceObjectWithTag @ 0x1409D392C
 * Callers:
 *     IovpCallDriver1 @ 0x1409CCC2C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409CD124 (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x1409D30D4 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409DFD00 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall IovUtilGetLowerDeviceObjectWithTag(__int64 a1)
{
  KIRQL v2; // di
  void *v3; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(void **)(*(_QWORD *)(a1 + 312) + 48LL);
  if ( v3 )
    ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
