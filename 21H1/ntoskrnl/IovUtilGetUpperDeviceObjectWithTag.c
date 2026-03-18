/*
 * XREFs of IovUtilGetUpperDeviceObjectWithTag @ 0x1409D3988
 * Callers:
 *     IovpExamineDevObjForwarding @ 0x1409CDAB0 (IovpExamineDevObjForwarding.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall IovUtilGetUpperDeviceObjectWithTag(__int64 a1)
{
  KIRQL v2; // al
  void *v3; // rbx
  KIRQL v4; // di

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(void **)(a1 + 24);
  v4 = v2;
  if ( v3 )
    ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v3;
}
