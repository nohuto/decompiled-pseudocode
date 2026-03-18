/*
 * XREFs of RtlSetBitsEx @ 0x1402A30D0
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x1402A92F0 (RtlFindClearBitsAndSetEx.c)
 *     MiObtainDynamicVa @ 0x140301274 (MiObtainDynamicVa.c)
 *     MiUpdateLargePageBitMap @ 0x140346C18 (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedHeapCreate @ 0x140378818 (RtlpHpFixedHeapCreate.c)
 *     MiMirrorAddPagesToBrownList @ 0x14037FAD4 (MiMirrorAddPagesToBrownList.c)
 *     IopAddPageRangeToPageMaps @ 0x1404FDDBC (IopAddPageRangeToPageMaps.c)
 *     MiAddPartitionHugeRange @ 0x14052CC78 (MiAddPartitionHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x140538150 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x14055B67C (MiAddRangeToPartitionTree.c)
 *     MiSetVadBits @ 0x140633280 (MiSetVadBits.c)
 *     MiObtainRelocationBits @ 0x14063AE7C (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x14063C8B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14063D090 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiActOnMirrorBitmap @ 0x14075F494 (MiActOnMirrorBitmap.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408C5EF8 (MiIdentifyPatchImageWritablePages.c)
 *     MiMarkRetpolineBits @ 0x1408CC364 (MiMarkRetpolineBits.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409A9310 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409A94F8 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
      v7 = byte_14001D830[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_14001A5B0[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 255, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_14001D830[v6];
      goto LABEL_4;
    }
  }
}
