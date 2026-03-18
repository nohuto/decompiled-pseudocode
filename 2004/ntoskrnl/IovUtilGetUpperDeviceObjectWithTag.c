/*
 * XREFs of IovUtilGetUpperDeviceObjectWithTag @ 0x1409D39E8
 * Callers:
 *     IovpExamineDevObjForwarding @ 0x1409CDAC0 (IovpExamineDevObjForwarding.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
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
