/*
 * XREFs of MiControlAreaUsingExtents @ 0x14027D210
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiInsertUnusedSubsection @ 0x1402A52E0 (MiInsertUnusedSubsection.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiReferenceDataSubsections @ 0x1402BD908 (MiReferenceDataSubsections.c)
 *     MiAppendSubsectionChain @ 0x1402BF084 (MiAppendSubsectionChain.c)
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MmExtendSection @ 0x140641C24 (MmExtendSection.c)
 *     MiExtendSection @ 0x140641F00 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0;
}
