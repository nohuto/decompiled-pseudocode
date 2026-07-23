/*
 * XREFs of CcDecrementOpenCount @ 0x14031DE8C
 * Callers:
 *     CcGetFlushedValidData @ 0x140237F40 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14024E5A0 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x14024E958 (CcMdlWriteComplete2.c)
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x1402D1EDC (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 *     CcSetFileSizesEx @ 0x1402D2970 (CcSetFileSizesEx.c)
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 *     CcCompleteAsyncRead @ 0x140302390 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x140304B40 (CcPerformReadAhead.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB784 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404EBDB0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140301B38 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 */

char __fastcall CcDecrementOpenCount(__int64 a1, char a2, char a3)
{
  __int64 Partition; // rax
  __int64 v5; // rdi
  int v6; // r8d
  int v7; // ecx
  __int64 v8; // r11
  char v9; // dl
  char v10; // r8

  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 536);
  Partition = CcGetPartition(a1, a2, a3);
  v5 = Partition;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 528) + 633LL) = 1;
    v6 = *(_DWORD *)(a1 + 152);
    v7 = *(_DWORD *)(a1 + 112);
    if ( (v6 & 0x10000) != 0 )
    {
      if ( !v7 )
        CcInsertIntoDirtySharedCacheMapList(a1);
      v10 = 1;
      v9 = 1;
    }
    else
    {
      if ( v7 || (v6 & 0x20) != 0 )
        return Partition;
      CcInsertIntoDirtySharedCacheMapList(a1);
      v9 = v8 != 0;
      v10 = 0;
    }
    LOBYTE(Partition) = CcScheduleLazyWriteScan(v5, v9, v10);
  }
  return Partition;
}
