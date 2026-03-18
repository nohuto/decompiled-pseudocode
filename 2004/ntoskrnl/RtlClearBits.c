/*
 * XREFs of RtlClearBits @ 0x140281070
 * Callers:
 *     HvpGrowDirtyVectors @ 0x140270168 (HvpGrowDirtyVectors.c)
 *     MiStoreWriteModifiedPages @ 0x1402D3334 (MiStoreWriteModifiedPages.c)
 *     MiTrimWorkingSetBuildup @ 0x1402D3C98 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadAhead @ 0x14034930C (MiReduceMappedFileReadAhead.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140352140 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x14035486C (MiReduceMappedFileReadBehind.c)
 *     HalpMmAllocCtxFree @ 0x1403772D0 (HalpMmAllocCtxFree.c)
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403B886C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404B21C8 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaReturnToContiguousPool @ 0x1404C3124 (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x1404C83F0 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x1404D0414 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404DCAE8 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404DD0D0 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404DF800 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x14053D600 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14053E120 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x1405822D0 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x1405831E0 (RtlShiftLeftBitMap.c)
 *     SepGetLowBoxNumberEntry @ 0x140631C0C (SepGetLowBoxNumberEntry.c)
 *     HvpAdjustBitmap @ 0x140638780 (HvpAdjustBitmap.c)
 *     HvFreeHivePartial @ 0x14063BCF4 (HvFreeHivePartial.c)
 *     CmpCheckValueList @ 0x1406709B0 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1406718D0 (HvIsCellAllocated.c)
 *     HvpRemoveFreeCellHint @ 0x14069F910 (HvpRemoveFreeCellHint.c)
 *     PspQueryRateControlHistory @ 0x1406AEDEC (PspQueryRateControlHistory.c)
 *     MiFreeInitializationCode @ 0x1407491CC (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x14074A1E8 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x1407A32B0 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140861760 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x140862354 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1408627E8 (HalpIrtFreeIndex.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408CA500 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x1408CA574 (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x1408D71D8 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x14092A960 (SmcStorePlacementGet.c)
 *     PopMirrorPhysicalMemory @ 0x140993020 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1409AB058 (PnprMarkOrMirrorPages.c)
 *     ViFreeToContiguousMemory @ 0x1409CB640 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140A49290 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140A63C94 (MiAssignSessionRanges.c)
 *     HalpPowerInitDiscard @ 0x140A64D94 (HalpPowerInitDiscard.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void __stdcall RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear <= 8 )
    {
      v7 = ~(byte_14001D960[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14001D960[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001A6F0[v6];
      goto LABEL_4;
    }
  }
}
