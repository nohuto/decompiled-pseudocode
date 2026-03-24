/*
 * XREFs of IovUtilGetLowerDeviceObjectWithTag @ 0x1409D699C
 * Callers:
 *     IovpCallDriver1 @ 0x1409CFC4C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409D0144 (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x1409D6144 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409E2D70 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
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
