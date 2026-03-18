/*
 * XREFs of BgDisplayFade @ 0x1409F4524
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B270 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x1404FDC04 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x1409F9340 (BgkDisplayCharacter.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14021E5E0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x1409F4C00 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C13330 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
