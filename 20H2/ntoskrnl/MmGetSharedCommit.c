/*
 * XREFs of MmGetSharedCommit @ 0x14023EBE4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406358D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSharedCommit()
{
  return qword_140C529C8;
}
