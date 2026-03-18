/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x14027D2B4
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x140532070 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406605D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x14027D1EC (MiGetNumberOfCachedPtes.c)
 */

__int64 MmGetNumberOfFreeSystemPtes()
{
  unsigned int NumberOfCachedPtes; // eax
  __int64 v1; // r10
  unsigned __int64 v2; // r10

  NumberOfCachedPtes = MiGetNumberOfCachedPtes((__int64)&qword_140C4ED40);
  v2 = qword_140C4ED98 + NumberOfCachedPtes + v1;
  if ( v2 >= 0x100000000LL )
    LODWORD(v2) = -1;
  return (unsigned int)v2;
}
