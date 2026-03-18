/*
 * XREFs of SymCryptSaveYmm @ 0x1403C86C4
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EE764 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403EB794 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 __fastcall SymCryptSaveYmm(struct _XSTATE_SAVE *a1)
{
  return SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater(a1);
}
