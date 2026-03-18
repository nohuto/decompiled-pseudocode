/*
 * XREFs of PnpUnlockMountableDevice @ 0x140390978
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407202EC (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x1408B0E4C (PipProcessRestartPhase1.c)
 *     PnpCancelStopDeviceNode @ 0x1408B3EC4 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
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
