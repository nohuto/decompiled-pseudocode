/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1402E0E8C
 * Callers:
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x14033C330 (KeDisableTimer2.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
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
