/*
 * XREFs of MiControlAreaUsingExtents @ 0x14033D9A0
 * Callers:
 *     MiAppendSubsectionChain @ 0x14021E9FC (MiAppendSubsectionChain.c)
 *     MiInsertUnusedSubsection @ 0x14022A08C (MiInsertUnusedSubsection.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 *     MiReferenceDataSubsections @ 0x140307E7C (MiReferenceDataSubsections.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 *     MmExtendSection @ 0x1405E894C (MmExtendSection.c)
 *     MiExtendSection @ 0x1405E8C28 (MiExtendSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0;
}
