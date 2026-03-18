/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x1409F4148
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402C8FA0 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F9130 (KeInitializeTimerEx.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140CDAF60 )
  {
    KeInitializeTimerEx(&stru_140CF2EC0, NotificationTimer);
    KeInitializeDpc(&stru_140CF2E40, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140CF2EC0, 0LL, 0x1Eu, 0, &stru_140CF2E40);
  }
  return result;
}
