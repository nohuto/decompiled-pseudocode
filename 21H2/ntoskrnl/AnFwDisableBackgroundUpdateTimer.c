/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140AAB7B4
 * Callers:
 *     ResFwFreeContext @ 0x140AAB07C (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x140AAE9F4 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AAED7C (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AB1400 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140D01570 )
  {
    result = KeCancelTimer(&stru_140D03C40);
    byte_140D01570 = 0;
  }
  return result;
}
