/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x14026E14C
 * Callers:
 *     KeCancelTimer2 @ 0x14026DD80 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x14026DE70 (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    KxAcquireSpinLock(&KiTimer2CollectionLock);
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      return 1;
    else
      KxReleaseSpinLock(&KiTimer2CollectionLock);
  }
  return v1;
}
