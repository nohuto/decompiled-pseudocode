/*
 * XREFs of SymCryptWipe @ 0x1403EC034
 * Callers:
 *     SymCryptSha256Result @ 0x1403EA420 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x1403EBC30 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1403EBCC0 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x1403EBD40 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x1403EC04C (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EC2FC (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x1403EBDB0 (SymCryptWipeAsm.c)
 */

__int64 __fastcall SymCryptWipe(__int64 a1, unsigned __int64 a2)
{
  return SymCryptWipeAsm(a1, a2);
}
