/*
 * XREFs of MiIsRetpolineEnabled @ 0x1402A3834
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406C12A0 (MiCaptureRetpolineRelocationTables.c)
 *     MiParseImageLoadConfig @ 0x1406C14D8 (MiParseImageLoadConfig.c)
 *     MiFinalizeImageRetpolineState @ 0x14075CE48 (MiFinalizeImageRetpolineState.c)
 *     MiCaptureRetpolineImportInfo @ 0x14077DF0C (MiCaptureRetpolineImportInfo.c)
 *     MmGetImageRetpolineCodePage @ 0x1407CDD10 (MmGetImageRetpolineCodePage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408D0DC8 (MiMarkKernelImageRetpolineBits.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x1409B154C (MmMarkHiberPhase.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
