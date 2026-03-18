/*
 * XREFs of PnpLockMountableDevice @ 0x14039394C
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407302BC (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x1407417F8 (IopRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1408BB234 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
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
