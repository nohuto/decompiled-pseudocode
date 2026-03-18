/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x1409FA148
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140247420 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140CDAFE0 )
  {
    KeInitializeTimerEx(&stru_140CF2F80, NotificationTimer);
    KeInitializeDpc(&stru_140CF2F00, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140CF2F80, 0LL, 0x1Eu, 0, &stru_140CF2F00);
  }
  return result;
}
