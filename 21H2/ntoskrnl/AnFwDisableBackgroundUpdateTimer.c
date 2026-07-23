/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x1409F44CC
 * Callers:
 *     ResFwFreeContext @ 0x1409F207C (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x1409F4FE8 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F5784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F81B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140CF53A0 )
  {
    result = KeCancelTimer(&stru_140CF9A60);
    byte_140CF53A0 = 0;
  }
  return result;
}
