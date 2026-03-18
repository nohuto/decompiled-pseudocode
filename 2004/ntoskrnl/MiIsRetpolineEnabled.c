/*
 * XREFs of MiIsRetpolineEnabled @ 0x140329398
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406D5D00 (MiCaptureRetpolineRelocationTables.c)
 *     MiParseImageLoadConfig @ 0x1406D5F28 (MiParseImageLoadConfig.c)
 *     MiFinalizeImageRetpolineState @ 0x1407471F4 (MiFinalizeImageRetpolineState.c)
 *     MiCaptureRetpolineImportInfo @ 0x14076B1AC (MiCaptureRetpolineImportInfo.c)
 *     MmGetImageRetpolineCodePage @ 0x1407BB050 (MmGetImageRetpolineCodePage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408CD668 (MiMarkKernelImageRetpolineBits.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x1409AD7AC (MmMarkHiberPhase.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x2000000) != 0;
}
