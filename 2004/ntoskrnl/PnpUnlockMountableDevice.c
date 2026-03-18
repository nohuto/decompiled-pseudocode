/*
 * XREFs of PnpUnlockMountableDevice @ 0x1403914E8
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407221AC (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x140732450 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14075C2E4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x1408B216C (PipProcessRestartPhase1.c)
 *     PnpCancelStopDeviceNode @ 0x1408B51E4 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PnpUnlockMountableDevice(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( *(_QWORD *)(v1 + 56) )
        KeSetEvent((PRKEVENT)(v1 + 280), 0, 0);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = *(_QWORD *)(v1 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
