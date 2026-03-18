/*
 * XREFs of MiIsPfn @ 0x14025F1A0
 * Callers:
 *     MiGetPageProtection @ 0x14021F920 (MiGetPageProtection.c)
 *     MiCoalesceFreeLargePages @ 0x140348CA0 (MiCoalesceFreeLargePages.c)
 *     PfpPfnPrioRequest @ 0x1406262A0 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140756C50 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407AD768 (MiMapViewOfPhysicalSection.c)
 *     MiIsExtentDangling @ 0x1408CB7A8 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x1408CD18C (MmRelocatePfnList.c)
 *     MiFreePartitionPageRun @ 0x1408D66E4 (MiFreePartitionPageRun.c)
 *     MiConvertHiberPhasePte @ 0x140991030 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409AC630 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409AC850 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x1409C2CB0 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x1409C2D7C (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C2E88 (MmCheckMapIoSpace.c)
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
