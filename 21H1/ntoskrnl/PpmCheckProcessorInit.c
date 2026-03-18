/*
 * XREFs of PpmCheckProcessorInit @ 0x1403CA7D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403A21E4 (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x1403CA7FC (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1, __int64 a2)
{
  PpmResetPerfTimes(a1 + 33128, a2);
  PpmHeteroHgsProcessorInit(a1);
  return 0LL;
}
