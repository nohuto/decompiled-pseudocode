/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x1409F34CC
 * Callers:
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F71B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140CF5340 )
  {
    result = KeCancelTimer(&stru_140CF9A20);
    byte_140CF5340 = 0;
  }
  return result;
}
