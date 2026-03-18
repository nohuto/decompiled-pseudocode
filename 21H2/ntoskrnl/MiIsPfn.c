/*
 * XREFs of MiIsPfn @ 0x1402B2E00
 * Callers:
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiRotateToFrameBufferNoCopy @ 0x14065FFA0 (MiRotateToFrameBufferNoCopy.c)
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     PfpPfnPrioRequest @ 0x140739F40 (PfpPfnPrioRequest.c)
 *     MiMapViewOfPhysicalSection @ 0x140852834 (MiMapViewOfPhysicalSection.c)
 *     MiReplaceRotateWithDemandZero @ 0x14096D10C (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 *     MiIsExtentDangling @ 0x14097079C (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x140978C9C (MmRelocatePfnList.c)
 *     MiFreePartitionPageRun @ 0x14098194C (MiFreePartitionPageRun.c)
 *     MiMarkHiberNotCachedPte @ 0x140A4F800 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140A4F8B0 (MiMarkNonPagedHiberPhasePte.c)
 *     MiConvertHiberPhasePte @ 0x140A4FFC0 (MiConvertHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x140A8142C (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140A814F8 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140A815FC (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_140C50840 )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
}
