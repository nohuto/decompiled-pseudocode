/*
 * XREFs of MiControlAreaUsingExtents @ 0x140332C50
 * Callers:
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x140238BA0 (MmPurgeSection.c)
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     MiInsertUnusedSubsection @ 0x140263D60 (MiInsertUnusedSubsection.c)
 *     MiAppendSubsectionChain @ 0x1402A147C (MiAppendSubsectionChain.c)
 *     MiReferenceDataSubsections @ 0x1402FD12C (MiReferenceDataSubsections.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 *     MmExtendSection @ 0x1406894BC (MmExtendSection.c)
 *     MiExtendSection @ 0x140689798 (MiExtendSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0;
}
