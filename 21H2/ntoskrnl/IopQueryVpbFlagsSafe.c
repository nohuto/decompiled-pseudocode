/*
 * XREFs of IopQueryVpbFlagsSafe @ 0x14020C4D4
 * Callers:
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall IopQueryVpbFlagsSafe(__int64 a1)
{
  unsigned __int16 v2; // di
  KIRQL v3; // dl
  __int64 v4; // rax

  v2 = 0;
  v3 = KeAcquireQueuedSpinLock(9uLL);
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    v2 = *(_WORD *)(v4 + 4);
  KeReleaseQueuedSpinLock(9uLL, v3);
  return v2;
}
