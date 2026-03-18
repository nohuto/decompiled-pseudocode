/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14035E220
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403E8B04 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1403E8CB0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1403EBAD4 (SymCryptParallelSha256Process.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return HalSystemVectorDispatchEntry();
}
