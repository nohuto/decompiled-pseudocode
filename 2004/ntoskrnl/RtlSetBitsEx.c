/*
 * XREFs of RtlSetBitsEx @ 0x14024A0A0
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x1402502C0 (RtlFindClearBitsAndSetEx.c)
 *     MiUpdateLargePageBitMap @ 0x1403178D8 (MiUpdateLargePageBitMap.c)
 *     MiObtainDynamicVa @ 0x14033DDBC (MiObtainDynamicVa.c)
 *     RtlpHpFixedHeapCreate @ 0x1403795D8 (RtlpHpFixedHeapCreate.c)
 *     MiMirrorAddPagesToBrownList @ 0x14038436C (MiMirrorAddPagesToBrownList.c)
 *     IopAddPageRangeToPageMaps @ 0x1404FE40C (IopAddPageRangeToPageMaps.c)
 *     MiAddPartitionHugeRange @ 0x14052D2C8 (MiAddPartitionHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x1405387A0 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x14055BCCC (MiAddRangeToPartitionTree.c)
 *     MiSetVadBits @ 0x1405FE240 (MiSetVadBits.c)
 *     MiObtainRelocationBits @ 0x140605E3C (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x140607760 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140607F40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiActOnMirrorBitmap @ 0x140764654 (MiActOnMirrorBitmap.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408C7248 (MiIdentifyPatchImageWritablePages.c)
 *     MiMarkRetpolineBits @ 0x1408CD6B4 (MiMarkRetpolineBits.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409AA170 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409AA358 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
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
      v7 = byte_14001D960[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_14001A6F0[v4];
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
      v7 = byte_14001D960[v6];
      goto LABEL_4;
    }
  }
}
