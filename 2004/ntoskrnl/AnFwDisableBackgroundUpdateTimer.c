/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x1409F04CC
 * Callers:
 *     ResFwFreeContext @ 0x1409EE224 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x1409F0FE8 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F1784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F41B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140CF4DC0 )
  {
    result = KeCancelTimer(&stru_140CF94A0);
    byte_140CF4DC0 = 0;
  }
  return result;
}
