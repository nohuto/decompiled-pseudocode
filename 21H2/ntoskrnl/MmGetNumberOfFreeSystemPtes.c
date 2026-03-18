/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x14026940C
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x140592398 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406F2420 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1402697B0 (MiGetNumberOfCachedPtes.c)
 */

__int64 MmGetNumberOfFreeSystemPtes()
{
  unsigned int NumberOfCachedPtes; // eax
  __int64 v1; // r10
  unsigned __int64 v2; // r10

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(&qword_140C534C0);
  v2 = qword_140C53510 + NumberOfCachedPtes + v1;
  if ( v2 >= 0x100000000LL )
    LODWORD(v2) = -1;
  return (unsigned int)v2;
}
