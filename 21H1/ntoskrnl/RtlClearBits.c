/*
 * XREFs of RtlClearBits @ 0x140244970
 * Callers:
 *     HvpGrowDirtyVectors @ 0x1402DF7F0 (HvpGrowDirtyVectors.c)
 *     MiStoreSetPageFileRunEvicted @ 0x1403142F0 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x140316DBC (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x14031991C (MiReduceMappedFileReadAhead.c)
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 *     MiTrimWorkingSetBuildup @ 0x14034E5C8 (MiTrimWorkingSetBuildup.c)
 *     HalpMmAllocCtxFree @ 0x1403764C0 (HalpMmAllocCtxFree.c)
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403B7A3C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404B1AE8 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaReturnToContiguousPool @ 0x1404C2CB4 (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x1404C7F40 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x1404CFF64 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404DC5D8 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404DCB30 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404DF240 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x14053CFB0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14053DAD0 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x140581BA0 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x140582AB0 (RtlShiftLeftBitMap.c)
 *     CmpCheckValueList @ 0x1405F87A0 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1405F96C0 (HvIsCellAllocated.c)
 *     SepGetLowBoxNumberEntry @ 0x140678498 (SepGetLowBoxNumberEntry.c)
 *     HvpAdjustBitmap @ 0x1406862FC (HvpAdjustBitmap.c)
 *     HvFreeHivePartial @ 0x140689874 (HvFreeHivePartial.c)
 *     PspQueryRateControlHistory @ 0x140689FAC (PspQueryRateControlHistory.c)
 *     HvpRemoveFreeCellHint @ 0x140699840 (HvpRemoveFreeCellHint.c)
 *     MiFreeInitializationCode @ 0x14074764C (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x140748668 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x14079F2D0 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140860464 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x140861054 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1408614C8 (HalpIrtFreeIndex.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408C91B0 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x1408C9224 (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x1408D5E88 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x1409296B0 (SmcStorePlacementGet.c)
 *     PopMirrorPhysicalMemory @ 0x1409919E0 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1409AA1F8 (PnprMarkOrMirrorPages.c)
 *     ViFreeToContiguousMemory @ 0x1409CB630 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140A43A30 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140A60AA4 (MiAssignSessionRanges.c)
 *     HalpPowerInitDiscard @ 0x140A653B4 (HalpPowerInitDiscard.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
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
      v7 = ~(byte_14001D830[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14001D830[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001A5B0[v6];
      goto LABEL_4;
    }
  }
}
