/*
 * XREFs of KeGetCurrentIrql @ 0x14021E5E0
 * Callers:
 *     BgFreeContext @ 0x1409F4038 (BgFreeContext.c)
 *     BgGetContext @ 0x1409F4248 (BgGetContext.c)
 *     BgDisplayFade @ 0x1409F4524 (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x1409F4854 (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x1409F6ED0 (BgLibraryDisable.c)
 *     BgDisplayString @ 0x1409F9570 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x1409F95E0 (BgLibraryDestroy.c)
 *     BgSetBootGraphicsInformation @ 0x1409F9684 (BgSetBootGraphicsInformation.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
