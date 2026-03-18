/*
 * XREFs of MiIsPfn @ 0x140206280
 * Callers:
 *     MiGetPageProtection @ 0x1402B25A0 (MiGetPageProtection.c)
 *     MiCoalesceFreeLargePages @ 0x140319960 (MiCoalesceFreeLargePages.c)
 *     PfpPfnPrioRequest @ 0x1405F0C80 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x1407588D0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407B08C8 (MiMapViewOfPhysicalSection.c)
 *     MiIsExtentDangling @ 0x1408CCAF8 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x1408CE4DC (MmRelocatePfnList.c)
 *     MiFreePartitionPageRun @ 0x1408D7A34 (MiFreePartitionPageRun.c)
 *     MiConvertHiberPhasePte @ 0x140991F70 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409AD490 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409AD6B0 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x1409C2CC0 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x1409C2D8C (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C2E98 (MmCheckMapIoSpace.c)
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
