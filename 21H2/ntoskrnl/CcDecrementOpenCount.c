/*
 * XREFs of CcDecrementOpenCount @ 0x14031313C
 * Callers:
 *     CcFlushCachePriv @ 0x14022CBA0 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14022D68C (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14022DA70 (CcWriteBehindInternal.c)
 *     CcSetFileSizesEx @ 0x14022E120 (CcSetFileSizesEx.c)
 *     CcGetFlushedValidData @ 0x1402B9D30 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402D0220 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x1402D05D8 (CcMdlWriteComplete2.c)
 *     CcPurgeCacheSection @ 0x1402F0920 (CcPurgeCacheSection.c)
 *     CcCompleteAsyncRead @ 0x1402F7640 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x1402F9DF0 (CcPerformReadAhead.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB544 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404EBB70 (CcMdlWriteAbort.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x1402F6D5C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402F6DE8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 */

char __fastcall CcDecrementOpenCount(__int64 a1)
{
  __int64 Partition; // rax
  __int64 v3; // rdi
  int v4; // r8d
  int v5; // ecx
  __int64 v6; // r11
  char v7; // dl
  char v8; // r8

  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 536);
  Partition = CcGetPartition(a1);
  v3 = Partition;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 528) + 633LL) = 1;
    v4 = *(_DWORD *)(a1 + 152);
    v5 = *(_DWORD *)(a1 + 112);
    if ( (v4 & 0x10000) != 0 )
    {
      if ( !v5 )
        CcInsertIntoDirtySharedCacheMapList(a1);
      v8 = 1;
      v7 = 1;
    }
    else
    {
      if ( v5 || (v4 & 0x20) != 0 )
        return Partition;
      CcInsertIntoDirtySharedCacheMapList(a1);
      v7 = v6 != 0;
      v8 = 0;
    }
    LOBYTE(Partition) = CcScheduleLazyWriteScan(v3, v7, v8);
  }
  return Partition;
}
