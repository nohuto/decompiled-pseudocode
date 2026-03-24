/*
 * XREFs of MiIsPfn @ 0x140349150
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x1403031A0 (MiCoalesceFreeLargePages.c)
 *     MiGetPageProtection @ 0x140330DA0 (MiGetPageProtection.c)
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 *     PfpPfnPrioRequest @ 0x1406F2BB0 (PfpPfnPrioRequest.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B6A0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C2C08 (MiMapViewOfPhysicalSection.c)
 *     MiIsExtentDangling @ 0x1408D00F8 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x1408D1ADC (MmRelocatePfnList.c)
 *     MiFreePartitionPageRun @ 0x1408DB034 (MiFreePartitionPageRun.c)
 *     MiConvertHiberPhasePte @ 0x1409957D0 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409B0300 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B0520 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x1409C5CD0 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x1409C5D9C (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C5EA8 (MmCheckMapIoSpace.c)
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
