/*
 * XREFs of KeDebugWriteEnclaveMemory @ 0x1408BE17C
 * Callers:
 *     MiDbgReadWriteEnclave @ 0x1408D551C (MiDbgReadWriteEnclave.c)
 *     MiDbgReadWriteEnclaveUnaligned @ 0x1408D560C (MiDbgReadWriteEnclaveUnaligned.c)
 * Callees:
 *     KiEncls @ 0x1403FCDC0 (KiEncls.c)
 */

__int64 __fastcall KeDebugWriteEnclaveMemory(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  *a4 = 0LL;
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  while ( a3 )
  {
    KiEncls(5u);
    a1 += 8LL;
    a2 += 8LL;
    a3 -= 8LL;
    *a4 += 8LL;
  }
  return 0LL;
}
