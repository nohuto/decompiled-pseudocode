/*
 * XREFs of BgLibraryDisable @ 0x1409F0ED0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398DB0 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140228560 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDisable @ 0x1409F0FE8 (BgpFwLibraryDisable.c)
 */

__int64 BgLibraryDisable()
{
  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C13310 & 1) != 0 )
    BgpFwLibraryDisable();
  BgpFwReleaseLock();
  return 0LL;
}
