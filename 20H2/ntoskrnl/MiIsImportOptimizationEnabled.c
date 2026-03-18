/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x140357954
 * Callers:
 *     MiParseImageLoadConfig @ 0x14070DC30 (MiParseImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140755C98 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmHasImageBeenImportOptimized @ 0x14076F558 (MmHasImageBeenImportOptimized.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DCC10 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiSpeculationFeatures & 0x4000000) != 0;
}
