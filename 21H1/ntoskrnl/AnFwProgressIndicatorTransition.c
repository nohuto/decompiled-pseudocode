/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x1409F4148
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x140236170 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140CDB060 )
  {
    KeInitializeTimerEx(&stru_140CF3000, NotificationTimer);
    KeInitializeDpc(&stru_140CF2F80, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140CF3000, 0LL, 0x1Eu, 0, &stru_140CF2F80);
  }
  return result;
}
