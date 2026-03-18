/*
 * XREFs of SymCryptFatal @ 0x14050F468
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403E7BEC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403E7CC4 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptInitEnvCommon @ 0x1403EB19C (SymCryptInitEnvCommon.c)
 *     SymCryptParallelHashProcess @ 0x1403EB20C (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EB4BC (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x1403E7BC0 (SymCryptFatalEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall __noreturn SymCryptFatal(ULONG_PTR a1)
{
  SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(a1);
}
