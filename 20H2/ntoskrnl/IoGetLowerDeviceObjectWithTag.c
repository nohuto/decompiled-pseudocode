/*
 * XREFs of IoGetLowerDeviceObjectWithTag @ 0x14032B97C
 * Callers:
 *     IoGetLowerDeviceObject @ 0x14032B960 (IoGetLowerDeviceObject.c)
 *     IopSynchronousCall @ 0x1405DD164 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x14072BB4C (PiControlGetDeviceStack.c)
 *     IoBuildPoDeviceNotifyList @ 0x14099A0C0 (IoBuildPoDeviceNotifyList.c)
 *     IopCheckDeviceFlags @ 0x14099A6D4 (IopCheckDeviceFlags.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
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
