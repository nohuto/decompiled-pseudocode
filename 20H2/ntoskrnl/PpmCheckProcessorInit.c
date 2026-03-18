/*
 * XREFs of PpmCheckProcessorInit @ 0x1403CE1D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403C1AA0 (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x1403CE1FC (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1, __int64 a2)
{
  PpmResetPerfTimes(a1 + 33128, a2);
  PpmHeteroHgsProcessorInit(a1);
  return 0LL;
}
