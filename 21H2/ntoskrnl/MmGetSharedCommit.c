/*
 * XREFs of MmGetSharedCommit @ 0x14026924C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406F2420 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSharedCommit()
{
  return qword_140C593F8;
}
