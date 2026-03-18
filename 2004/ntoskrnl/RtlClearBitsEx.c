/*
 * XREFs of RtlClearBitsEx @ 0x140250FD0
 * Callers:
 *     MiClearVadCellBits @ 0x140250DF0 (MiClearVadCellBits.c)
 *     MiUpdateLargePageBitMap @ 0x1403178D8 (MiUpdateLargePageBitMap.c)
 *     MiMakeSystemRangeAvailable @ 0x14033E630 (MiMakeSystemRangeAvailable.c)
 *     MiReleaseSessionVa @ 0x14033F038 (MiReleaseSessionVa.c)
 *     RtlFindSetBitsAndClearEx @ 0x14035B2C0 (RtlFindSetBitsAndClearEx.c)
 *     RtlpHpFixedVsFree @ 0x14037E390 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14038339C (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x140391C2C (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1403C621C (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1404FE40C (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1404FF190 (IopRemovePageFromPageMap.c)
 *     MiHotRemoveHugeRange @ 0x14052D828 (MiHotRemoveHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x1405387A0 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x14055B400 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14055BCCC (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14055C2D0 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x140583250 (RtlShiftLeftBitMapEx.c)
 *     MiReturnImageBase @ 0x1405FF238 (MiReturnImageBase.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406056FC (MiFreeToSubAllocatedRegion.c)
 *     MiObtainRelocationBits @ 0x140605E3C (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x140607760 (MiCopyToCfgBitMap.c)
 *     MiActOnMirrorBitmap @ 0x140764654 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140894D0C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiMarkRetpolineBits @ 0x1408CD6B4 (MiMarkRetpolineBits.c)
 *     MiDeleteAweInfoPages @ 0x1408D288C (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140A46EB8 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rdi
  char v7; // al

  if ( a3 )
  {
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    v6 = a3;
    if ( v4 + a3 <= 8 )
    {
      v7 = ~(byte_14001D960[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_14001D960[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 0, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_14001A6F0[v6];
      goto LABEL_4;
    }
  }
}
