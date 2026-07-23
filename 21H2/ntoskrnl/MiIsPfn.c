/*
 * XREFs of MiIsPfn @ 0x140353EA0
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x14030DEF0 (MiCoalesceFreeLargePages.c)
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     PfpPfnPrioRequest @ 0x140709F90 (PfpPfnPrioRequest.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B860 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C3128 (MiMapViewOfPhysicalSection.c)
 *     MiIsExtentDangling @ 0x1408D0258 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x1408D1C3C (MmRelocatePfnList.c)
 *     MiFreePartitionPageRun @ 0x1408DB194 (MiFreePartitionPageRun.c)
 *     MiConvertHiberPhasePte @ 0x1409967D0 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409B1230 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B1450 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x1409C6CD0 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x1409C6D9C (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C6EA8 (MmCheckMapIoSpace.c)
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
