/*
 * XREFs of RtlClearBitsEx @ 0x140250620
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x14024F8D4 (MiMakeSystemRangeAvailable.c)
 *     MiClearVadCellBits @ 0x140250440 (MiClearVadCellBits.c)
 *     RtlFindSetBitsAndClearEx @ 0x14032BD20 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSessionVa @ 0x14032F29C (MiReleaseSessionVa.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedVsFree @ 0x1403800C0 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14038507C (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403940EC (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1403C8CAC (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x140501CDC (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140502A60 (IopRemovePageFromPageMap.c)
 *     MiHotRemoveHugeRange @ 0x1405311F8 (MiHotRemoveHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x14053C170 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x14055EDD0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14055F69C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14055FCA0 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x140586BB0 (RtlShiftLeftBitMapEx.c)
 *     MiCopyToCfgBitMap @ 0x140629C60 (MiCopyToCfgBitMap.c)
 *     MiObtainRelocationBits @ 0x14062BC70 (MiObtainRelocationBits.c)
 *     MiFreeToSubAllocatedRegion @ 0x140658E00 (MiFreeToSubAllocatedRegion.c)
 *     MiReturnImageBase @ 0x14067DD18 (MiReturnImageBase.c)
 *     MiActOnMirrorBitmap @ 0x140772C64 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14089A9BC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiMarkRetpolineBits @ 0x1408D34F4 (MiMarkRetpolineBits.c)
 *     MiDeleteAweInfoPages @ 0x1408D86CC (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140A4D154 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
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
      v7 = ~(byte_14001DA60[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_14001DA60[v4];
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
      v7 = byte_14001A7F0[v6];
      goto LABEL_4;
    }
  }
}
