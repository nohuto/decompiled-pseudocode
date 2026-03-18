/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x140324264
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406EE324 (MiParseImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140745538 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmHasImageBeenImportOptimized @ 0x14075EC58 (MmHasImageBeenImportOptimized.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiSpeculationFeatures & 0x4000000) != 0;
}
