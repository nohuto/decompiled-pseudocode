/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x1409F64CC
 * Callers:
 *     ResFwFreeContext @ 0x1409F407C (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x1409F4C00 (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x1409F6FE8 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F7784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409FA1B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140CF4EA0 )
  {
    result = KeCancelTimer(&stru_140CF9560);
    byte_140CF4EA0 = 0;
  }
  return result;
}
