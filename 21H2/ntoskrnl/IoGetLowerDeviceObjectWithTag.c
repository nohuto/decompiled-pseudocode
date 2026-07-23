/*
 * XREFs of IoGetLowerDeviceObjectWithTag @ 0x14024B44C
 * Callers:
 *     IoGetLowerDeviceObject @ 0x14024B430 (IoGetLowerDeviceObject.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x14072FD30 (PiControlGetDeviceStack.c)
 *     IoBuildPoDeviceNotifyList @ 0x1409982B0 (IoBuildPoDeviceNotifyList.c)
 *     IopCheckDeviceFlags @ 0x1409988C4 (IopCheckDeviceFlags.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 */

void *__fastcall IoGetLowerDeviceObjectWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // di
  void *v7; // rbx
  int v8; // r8d

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD *)(a1 + 312);
  v6 = v4;
  v7 = 0LL;
  v8 = *(_DWORD *)(v5 + 32);
  if ( (v8 & 0xF) == 0 || (v8 & 0xE) == 0 && *(_QWORD *)(v5 + 48) )
  {
    if ( *(_QWORD *)(v5 + 48) )
    {
      v7 = *(void **)(v5 + 48);
      ObfReferenceObjectWithTag(v7, a2);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
  return v7;
}
