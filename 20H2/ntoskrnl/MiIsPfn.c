/*
 * XREFs of MiIsPfn @ 0x14021F200
 * Callers:
 *     MiGetPageProtection @ 0x1402B41B0 (MiGetPageProtection.c)
 *     MiCoalesceFreeLargePages @ 0x14034D440 (MiCoalesceFreeLargePages.c)
 *     PfpPfnPrioRequest @ 0x1406138B0 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407BE808 (MiMapViewOfPhysicalSection.c)
 *     MiIsExtentDangling @ 0x1408D2938 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x1408D431C (MmRelocatePfnList.c)
 *     MiFreePartitionPageRun @ 0x1408DD874 (MiFreePartitionPageRun.c)
 *     MiConvertHiberPhasePte @ 0x140997FE0 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409B3400 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B3620 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x1409C8CE0 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x1409C8DAC (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C8EB8 (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFLL )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) >> 50) & 1LL;
}
