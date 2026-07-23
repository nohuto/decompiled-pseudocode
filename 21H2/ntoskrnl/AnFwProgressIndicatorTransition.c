/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x1409F8148
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1402813E0 (KeSetCoalescableTimer.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140CDB1A8 )
  {
    KeInitializeTimerEx(&stru_140CF32C0, NotificationTimer);
    KeInitializeDpc(&stru_140CF3240, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140CF32C0, 0LL, 0x1Eu, 0, &stru_140CF3240);
  }
  return result;
}
