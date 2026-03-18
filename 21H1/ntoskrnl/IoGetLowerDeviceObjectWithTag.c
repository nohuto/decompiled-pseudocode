/*
 * XREFs of IoGetLowerDeviceObjectWithTag @ 0x14031D3DC
 * Callers:
 *     IoGetLowerDeviceObject @ 0x14031D3C0 (IoGetLowerDeviceObject.c)
 *     IopSynchronousCall @ 0x140687B88 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x14071BD30 (PiControlGetDeviceStack.c)
 *     IoBuildPoDeviceNotifyList @ 0x140992920 (IoBuildPoDeviceNotifyList.c)
 *     IopCheckDeviceFlags @ 0x140992F34 (IopCheckDeviceFlags.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
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
