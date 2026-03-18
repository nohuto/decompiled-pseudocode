/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14032EB80
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403EB794 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1403EB940 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1403EE764 (SymCryptParallelSha256Process.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return HalSystemVectorDispatchEntry();
}
