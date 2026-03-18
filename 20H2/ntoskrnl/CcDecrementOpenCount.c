/*
 * XREFs of CcDecrementOpenCount @ 0x14029A71C
 * Callers:
 *     CcCompleteAsyncRead @ 0x140249324 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14024B924 (CcPerformReadAhead.c)
 *     CcSetFileSizesEx @ 0x1402955E0 (CcSetFileSizesEx.c)
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWrite @ 0x140295F24 (CcNotifyOfMappedWrite.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     CcGetFlushedValidData @ 0x1403170D0 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14032E540 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x14032E894 (CcMdlWriteComplete2.c)
 *     CcPurgeCacheSection @ 0x1403557F0 (CcPurgeCacheSection.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E99B4 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404E9FE0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140241848 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1402418E0 (CcScheduleLazyWriteScan.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
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
