/*
 * XREFs of MiIsRetpolineEnabled @ 0x14029C6C4
 * Callers:
 *     MiCaptureRetpolineRelocationTables @ 0x1406ACDDC (MiCaptureRetpolineRelocationTables.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiParseImageLoadConfig @ 0x140706ABC (MiParseImageLoadConfig.c)
 *     MiCaptureRetpolineImportInfo @ 0x14075C060 (MiCaptureRetpolineImportInfo.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140970C20 (MiMarkKernelImageRetpolineBits.c)
 *     MmGetImageRetpolineCodePage @ 0x140970DA0 (MmGetImageRetpolineCodePage.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x140A4EEAC (MmMarkHiberPhase.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
