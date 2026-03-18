/*
 * XREFs of MiIsRetpolineEnabled @ 0x140324278
 * Callers:
 *     MiCaptureRetpolineRelocationTables @ 0x1406EE0FC (MiCaptureRetpolineRelocationTables.c)
 *     MiParseImageLoadConfig @ 0x1406EE324 (MiParseImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiFinalizeImageRetpolineState @ 0x140745674 (MiFinalizeImageRetpolineState.c)
 *     MiCaptureRetpolineImportInfo @ 0x140768DCC (MiCaptureRetpolineImportInfo.c)
 *     MmGetImageRetpolineCodePage @ 0x1407B7EE0 (MmGetImageRetpolineCodePage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408CC318 (MiMarkKernelImageRetpolineBits.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x1409AC94C (MmMarkHiberPhase.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x2000000) != 0;
}
