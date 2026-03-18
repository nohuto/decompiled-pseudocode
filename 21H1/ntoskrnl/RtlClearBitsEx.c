/*
 * XREFs of RtlClearBitsEx @ 0x1402AA000
 * Callers:
 *     MiClearVadCellBits @ 0x1402A9E20 (MiClearVadCellBits.c)
 *     MiMakeSystemRangeAvailable @ 0x140301AE8 (MiMakeSystemRangeAvailable.c)
 *     MiReleaseSessionVa @ 0x1403024F0 (MiReleaseSessionVa.c)
 *     RtlFindSetBitsAndClearEx @ 0x14031D6D0 (RtlFindSetBitsAndClearEx.c)
 *     MiUpdateLargePageBitMap @ 0x140346C18 (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedVsFree @ 0x14037D8D0 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140382B5C (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403910BC (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1403C52AC (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1404FDDBC (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1404FEB40 (IopRemovePageFromPageMap.c)
 *     MiHotRemoveHugeRange @ 0x14052D1D8 (MiHotRemoveHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x140538150 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x14055ADB0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14055B67C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14055BC80 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x140582B20 (RtlShiftLeftBitMapEx.c)
 *     MiReturnImageBase @ 0x140634278 (MiReturnImageBase.c)
 *     MiFreeToSubAllocatedRegion @ 0x14063A73C (MiFreeToSubAllocatedRegion.c)
 *     MiObtainRelocationBits @ 0x14063AE7C (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x14063C8B0 (MiCopyToCfgBitMap.c)
 *     MiActOnMirrorBitmap @ 0x14075F494 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408939EC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiMarkRetpolineBits @ 0x1408CC364 (MiMarkRetpolineBits.c)
 *     MiDeleteAweInfoPages @ 0x1408D153C (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140A4165C (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
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
      v7 = ~(byte_14001D830[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_14001D830[v4];
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
      v7 = byte_14001A5B0[v6];
      goto LABEL_4;
    }
  }
}
