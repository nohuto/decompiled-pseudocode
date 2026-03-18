/*
 * XREFs of MiControlAreaUsingExtents @ 0x1402241C0
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiInsertUnusedSubsection @ 0x14024C2B0 (MiInsertUnusedSubsection.c)
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiReferenceDataSubsections @ 0x1402648D8 (MiReferenceDataSubsections.c)
 *     MiAppendSubsectionChain @ 0x140266054 (MiAppendSubsectionChain.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 *     MmExtendSection @ 0x14060CAD4 (MmExtendSection.c)
 *     MiExtendSection @ 0x14060CDB0 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0;
}
