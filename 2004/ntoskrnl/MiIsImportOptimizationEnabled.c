/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x140329384
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406D5F28 (MiParseImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407470B8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmHasImageBeenImportOptimized @ 0x140760F48 (MmHasImageBeenImportOptimized.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiSpeculationFeatures & 0x4000000) != 0;
}
