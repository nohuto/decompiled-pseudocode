/*
 * XREFs of SymCryptWipe @ 0x1403EECC4
 * Callers:
 *     SymCryptSha256Result @ 0x1403ED0B0 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x1403EE8C0 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1403EE950 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x1403EE9D0 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x1403EECDC (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EEF8C (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x1403EEA40 (SymCryptWipeAsm.c)
 */

__int64 __fastcall SymCryptWipe(__int64 a1, unsigned __int64 a2)
{
  return SymCryptWipeAsm(a1, a2);
}
