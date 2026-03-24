/*
 * XREFs of BgDisplayFade @ 0x1409F161C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BB40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x1404FF7A4 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x1409922E0 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x1409F6340 (BgkDisplayCharacter.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14021FAD0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14039C2A8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C134F0 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
