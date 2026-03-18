/*
 * XREFs of MiControlAreaUsingExtents @ 0x1402B5EA0
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiReferenceDataSubsections @ 0x14024C080 (MiReferenceDataSubsections.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 *     MmPurgeSection @ 0x1402C73C0 (MmPurgeSection.c)
 *     MiInsertUnusedSubsection @ 0x140300AC0 (MiInsertUnusedSubsection.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiAppendSubsectionChain @ 0x14035604C (MiAppendSubsectionChain.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MmExtendSection @ 0x140708C5C (MmExtendSection.c)
 *     MiExtendSection @ 0x140708F38 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0;
}
