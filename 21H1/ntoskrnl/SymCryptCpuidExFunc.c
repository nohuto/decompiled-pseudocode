/*
 * XREFs of SymCryptCpuidExFunc @ 0x1403CBC1C
 * Callers:
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x1403EB028 (SymCryptDetectCpuFeaturesByCpuid.c)
 * Callees:
 *     SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater @ 0x1403E7B94 (SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptCpuidExFunc()
{
  return SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater();
}
