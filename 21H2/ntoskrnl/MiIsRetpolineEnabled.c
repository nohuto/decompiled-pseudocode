/*
 * XREFs of MiIsRetpolineEnabled @ 0x14035E904
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140712C50 (MiCaptureRetpolineRelocationTables.c)
 *     MiParseImageLoadConfig @ 0x140712E88 (MiParseImageLoadConfig.c)
 *     MiFinalizeImageRetpolineState @ 0x14075CC88 (MiFinalizeImageRetpolineState.c)
 *     MiCaptureRetpolineImportInfo @ 0x14077DD4C (MiCaptureRetpolineImportInfo.c)
 *     MmGetImageRetpolineCodePage @ 0x1407CDBA0 (MmGetImageRetpolineCodePage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408D0C68 (MiMarkKernelImageRetpolineBits.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA3D0 (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x1409B061C (MmMarkHiberPhase.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
