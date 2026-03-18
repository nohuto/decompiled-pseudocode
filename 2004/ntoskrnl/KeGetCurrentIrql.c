/*
 * XREFs of KeGetCurrentIrql @ 0x140228560
 * Callers:
 *     BgGetContext @ 0x1409EE038 (BgGetContext.c)
 *     BgFreeContext @ 0x1409EE1E0 (BgFreeContext.c)
 *     BgDisplayFade @ 0x1409EE524 (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x1409EE854 (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x1409F0ED0 (BgLibraryDisable.c)
 *     BgDisplayString @ 0x1409F3570 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x1409F35E0 (BgLibraryDestroy.c)
 *     BgSetBootGraphicsInformation @ 0x1409F3684 (BgSetBootGraphicsInformation.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
