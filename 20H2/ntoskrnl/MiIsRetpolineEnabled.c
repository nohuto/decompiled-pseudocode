/*
 * XREFs of MiIsRetpolineEnabled @ 0x140357968
 * Callers:
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiParseImageLoadConfig @ 0x14070DC30 (MiParseImageLoadConfig.c)
 *     MiCaptureRetpolineRelocationTables @ 0x14070F468 (MiCaptureRetpolineRelocationTables.c)
 *     MiFinalizeImageRetpolineState @ 0x140755DD4 (MiFinalizeImageRetpolineState.c)
 *     MiCaptureRetpolineImportInfo @ 0x140779F6C (MiCaptureRetpolineImportInfo.c)
 *     MmGetImageRetpolineCodePage @ 0x1407C98E0 (MmGetImageRetpolineCodePage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408D34A8 (MiMarkKernelImageRetpolineBits.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DCC10 (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x1409B371C (MmMarkHiberPhase.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x2000000) != 0;
}
