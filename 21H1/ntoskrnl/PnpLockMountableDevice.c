/*
 * XREFs of PnpLockMountableDevice @ 0x14039091C
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407202EC (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1408B42F4 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

void __fastcall PnpLockMountableDevice(_QWORD *a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( v1[7] )
        KeWaitForSingleObject(v1 + 35, Executive, 0, 0, 0LL);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = (_QWORD *)v1[3];
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
