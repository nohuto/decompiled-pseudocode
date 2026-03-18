/*
 * XREFs of SymCryptWipe @ 0x1403EB1F4
 * Callers:
 *     SymCryptSha256Result @ 0x1403E95E0 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x1403EADF0 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1403EAE80 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x1403EAF00 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x1403EB20C (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EB4BC (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x1403EAF70 (SymCryptWipeAsm.c)
 */

__int64 __fastcall SymCryptWipe(__int64 a1, unsigned __int64 a2)
{
  return SymCryptWipeAsm(a1, a2);
}
