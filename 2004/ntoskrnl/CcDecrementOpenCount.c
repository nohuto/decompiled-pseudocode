/*
 * XREFs of CcDecrementOpenCount @ 0x1402C0EE4
 * Callers:
 *     CcPerformReadAhead @ 0x140264AD4 (CcPerformReadAhead.c)
 *     CcFlushCachePriv @ 0x1402BEDA0 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x1402BF88C (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 *     CcSetFileSizesEx @ 0x1402C0280 (CcSetFileSizesEx.c)
 *     CcCompleteAsyncRead @ 0x1402C7C20 (CcCompleteAsyncRead.c)
 *     CcPurgeCacheSection @ 0x14031F970 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x140345D80 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14035D980 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x14035DDD8 (CcMdlWriteComplete2.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E6424 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404E6A50 (CcMdlWriteAbort.c)
 * Callees:
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     CcScheduleLazyWriteScan @ 0x1402C46BC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402C4748 (CcInsertIntoDirtySharedCacheMapList.c)
 */

__int64 __fastcall CcDecrementOpenCount(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // r11

  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 536);
  result = CcGetPartition(a1);
  v4 = result;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 528) + 633LL) = 1;
    v5 = *(unsigned int *)(a1 + 152);
    v6 = *(_DWORD *)(a1 + 112);
    if ( (v5 & 0x10000) != 0 )
    {
      if ( !v6 )
        CcInsertIntoDirtySharedCacheMapList(a1);
      LOBYTE(v5) = 1;
      LOBYTE(v3) = 1;
    }
    else
    {
      if ( v6 || (v5 & 0x20) != 0 )
        return result;
      CcInsertIntoDirtySharedCacheMapList(a1);
      LOBYTE(v3) = v7 != 0;
      v5 = 0LL;
    }
    return CcScheduleLazyWriteScan(v4, v3, v5);
  }
  return result;
}
