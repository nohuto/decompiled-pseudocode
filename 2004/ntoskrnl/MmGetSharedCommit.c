/*
 * XREFs of MmGetSharedCommit @ 0x14027D364
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406605D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSharedCommit()
{
  return qword_140C52948;
}
