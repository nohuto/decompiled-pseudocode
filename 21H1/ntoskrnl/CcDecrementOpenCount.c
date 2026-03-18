/*
 * XREFs of CcDecrementOpenCount @ 0x14022E0B4
 * Callers:
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14022CA64 (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14022CE40 (CcWriteBehindInternal.c)
 *     CcSetFileSizesEx @ 0x14022D450 (CcSetFileSizesEx.c)
 *     CcCompleteAsyncRead @ 0x140234DF0 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x1402BDB04 (CcPerformReadAhead.c)
 *     CcPurgeCacheSection @ 0x1402CF540 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x140307F80 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14031FED0 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x1403201B4 (CcMdlWriteComplete2.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E5E74 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404E64A0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcScheduleLazyWriteScan @ 0x14023188C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140231918 (CcInsertIntoDirtySharedCacheMapList.c)
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
