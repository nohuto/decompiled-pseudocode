/*
 * XREFs of KeGetCurrentIrql @ 0x1402C43D0
 * Callers:
 *     BgFreeContext @ 0x1409F2038 (BgFreeContext.c)
 *     BgGetContext @ 0x1409F2248 (BgGetContext.c)
 *     BgDisplayFade @ 0x1409F261C (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x1409F2854 (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x1409F4ED0 (BgLibraryDisable.c)
 *     BgDisplayString @ 0x1409F7570 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x1409F75E0 (BgLibraryDestroy.c)
 *     BgSetBootGraphicsInformation @ 0x1409F7684 (BgSetBootGraphicsInformation.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
