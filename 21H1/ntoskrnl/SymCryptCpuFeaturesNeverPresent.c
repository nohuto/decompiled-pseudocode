/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x140320600
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403E7CC4 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1403E7E70 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1403EAC94 (SymCryptParallelSha256Process.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return HalSystemVectorDispatchEntry();
}
