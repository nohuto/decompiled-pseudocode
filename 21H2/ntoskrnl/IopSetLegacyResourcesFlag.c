/*
 * XREFs of IopSetLegacyResourcesFlag @ 0x14056117C
 * Callers:
 *     IopLegacyResourceAllocation @ 0x14081F570 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall IopSetLegacyResourcesFlag(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(a1 + 16) |= 0x40u;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}
