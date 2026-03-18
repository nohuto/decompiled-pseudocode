/*
 * XREFs of RtlClearBits @ 0x140268180
 * Callers:
 *     HvpGrowDirtyVectors @ 0x140203AE0 (HvpGrowDirtyVectors.c)
 *     MiReduceMappedFileReadAhead @ 0x140319F10 (MiReduceMappedFileReadAhead.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140322B90 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x14032552C (MiReduceMappedFileReadBehind.c)
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 *     MiTrimWorkingSetBuildup @ 0x140343D48 (MiTrimWorkingSetBuildup.c)
 *     HalpMmAllocCtxFree @ 0x140379260 (HalpMmAllocCtxFree.c)
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403BB30C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404B56E8 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaReturnToContiguousPool @ 0x1404C6644 (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x1404CB950 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x1404D39B4 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404E0078 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E0660 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E2D90 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140540FD0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140541AF0 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x140585C30 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x140586B40 (RtlShiftLeftBitMap.c)
 *     HvpAdjustBitmap @ 0x1405DB8D8 (HvpAdjustBitmap.c)
 *     HvFreeHivePartial @ 0x1405DEEF4 (HvFreeHivePartial.c)
 *     PspQueryRateControlHistory @ 0x14066335C (PspQueryRateControlHistory.c)
 *     CmpCheckValueList @ 0x1406731E0 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x140675890 (HvIsCellAllocated.c)
 *     SepGetLowBoxNumberEntry @ 0x14068E0C8 (SepGetLowBoxNumberEntry.c)
 *     HvpRemoveFreeCellHint @ 0x140707930 (HvpRemoveFreeCellHint.c)
 *     MiFreeInitializationCode @ 0x140757DAC (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x140758DC8 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x1407B25E0 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140867180 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x140867D74 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x140868208 (HalpIrtFreeIndex.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408D0340 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x1408D03B4 (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x1408DD018 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x140930788 (SmcStorePlacementGet.c)
 *     PopMirrorPhysicalMemory @ 0x140999180 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1409B0FC8 (PnprMarkOrMirrorPages.c)
 *     ViFreeToContiguousMemory @ 0x1409D1660 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140A4F520 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140A6AF64 (MiAssignSessionRanges.c)
 *     HalpPowerInitDiscard @ 0x140A6C064 (HalpPowerInitDiscard.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
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
      v7 = ~(byte_14001DA60[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14001DA60[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001A7F0[v6];
      goto LABEL_4;
    }
  }
}
