/*
 * XREFs of PnpLockMountableDevice @ 0x1403A0154
 * Callers:
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x1409589A4 (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x140959F9C (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
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
