/*
 * XREFs of KeGetCurrentIrql @ 0x1402815B0
 * Callers:
 *     BgFreeContext @ 0x1409EE038 (BgFreeContext.c)
 *     BgGetContext @ 0x1409EE248 (BgGetContext.c)
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
