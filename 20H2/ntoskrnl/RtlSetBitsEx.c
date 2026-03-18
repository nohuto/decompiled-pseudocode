/*
 * XREFs of RtlSetBitsEx @ 0x14022E620
 * Callers:
 *     MiObtainDynamicVa @ 0x14025191C (MiObtainDynamicVa.c)
 *     RtlFindClearBitsAndSetEx @ 0x1402D7390 (RtlFindClearBitsAndSetEx.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedHeapCreate @ 0x14037B308 (RtlpHpFixedHeapCreate.c)
 *     MiMirrorAddPagesToBrownList @ 0x14038649C (MiMirrorAddPagesToBrownList.c)
 *     IopAddPageRangeToPageMaps @ 0x140501CDC (IopAddPageRangeToPageMaps.c)
 *     MiAddPartitionHugeRange @ 0x140530C98 (MiAddPartitionHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x14053C170 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x14055F69C (MiAddRangeToPartitionTree.c)
 *     MiSetVadBits @ 0x140623BB0 (MiSetVadBits.c)
 *     MiCopyToCfgBitMap @ 0x140629C60 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14062A440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiObtainRelocationBits @ 0x14062BC70 (MiObtainRelocationBits.c)
 *     MiActOnMirrorBitmap @ 0x140772C64 (MiActOnMirrorBitmap.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408CD088 (MiIdentifyPatchImageWritablePages.c)
 *     MiMarkRetpolineBits @ 0x1408D34F4 (MiMarkRetpolineBits.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409B00E0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409B02C8 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
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
      v7 = byte_14001DA60[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_14001A7F0[v4];
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
      v7 = byte_14001DA60[v6];
      goto LABEL_4;
    }
  }
}
