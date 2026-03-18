/*
 * XREFs of CcDecrementOpenCount @ 0x140282AF4
 * Callers:
 *     CcMdlWriteComplete2 @ 0x1402581E0 (CcMdlWriteComplete2.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402590D8 (CcNotifyOfMappedWriteComplete.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x14027FB60 (CcGetFlushedValidData.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 *     CcCompleteAsyncRead @ 0x14028F324 (CcCompleteAsyncRead.c)
 *     CcNotifyOfMappedWrite @ 0x140310AD0 (CcNotifyOfMappedWrite.c)
 *     CcPerformReadAhead @ 0x14035E3C4 (CcPerformReadAhead.c)
 *     CcUnmapInactiveViewsInternal @ 0x14053B55C (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x14053BB80 (CcMdlWriteAbort.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402767FC (CcInsertIntoDirtySharedCacheMapList.c)
 */

char __fastcall CcDecrementOpenCount(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  _BYTE *v6; // rax
  int v7; // edx
  __int64 v8; // r11
  char v9; // r9

  v3 = *(_BYTE **)(a1 + 528);
  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 536);
  LOBYTE(v4) = CcEnablePerVolumeLazyWriter;
  if ( CcEnablePerVolumeLazyWriter == 1 )
    v5 = *(_QWORD *)(a1 + 592);
  else
    v5 = 0LL;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    if ( CcEnablePerVolumeLazyWriter == 1 )
      v6 = *(_BYTE **)(a1 + 592);
    else
      v6 = v3;
    v6[986] = 1;
    v7 = *(_DWORD *)(a1 + 152);
    v4 = *(_DWORD *)(a1 + 112);
    if ( (v7 & 0x10000) != 0 )
    {
      if ( !v4 )
        CcInsertIntoDirtySharedCacheMapList(a1);
      v9 = 1;
      LOBYTE(a3) = 1;
    }
    else
    {
      if ( v4 || (v7 & 0x20) != 0 )
        return v4;
      CcInsertIntoDirtySharedCacheMapList(a1);
      LOBYTE(a3) = v8 != 0;
      v9 = 0;
    }
    LOBYTE(v4) = CcScheduleLazyWriteScan(v3, v5, a3, v9);
  }
  return v4;
}
