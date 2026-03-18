/*
 * XREFs of BgDisplayFade @ 0x1409EE524
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398DB0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x1404FA374 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x1409F3340 (BgkDisplayCharacter.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140228560 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C13310 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
