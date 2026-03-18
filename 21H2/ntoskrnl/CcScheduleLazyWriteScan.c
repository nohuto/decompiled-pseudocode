/*
 * XREFs of CcScheduleLazyWriteScan @ 0x140276758
 * Callers:
 *     CcRescheduleLazyWriteScan @ 0x140248B24 (CcRescheduleLazyWriteScan.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     CcDecrementOpenCount @ 0x140282AF4 (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14029D860 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPagesInternal @ 0x14029E120 (CcChargeDirtyPagesInternal.c)
 *     CcNotifyOfMappedWrite @ 0x140310AD0 (CcNotifyOfMappedWrite.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140389670 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14039EB90 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x140538930 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x14053DDB8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x140389160 (CcNotifyWriteBehindInternal.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CcScheduleLazyWriteScanVolume @ 0x14053DA58 (CcScheduleLazyWriteScanVolume.c)
 */

char __fastcall CcScheduleLazyWriteScan(_BYTE *a1, __int64 a2, __int64 a3, char a4)
{
  char result; // al
  __int64 v5; // r10
  char v7; // cl
  __int64 v8; // rdx

  result = a3;
  v5 = a2;
  if ( CcEnablePerVolumeLazyWriter == 1 )
  {
    LOBYTE(a3) = a4;
    LOBYTE(a2) = result;
    return CcScheduleLazyWriteScanVolume(v5, a2, a3);
  }
  else
  {
    v7 = a1[1228];
    if ( !v7 || (_BYTE)a3 )
    {
      if ( a4 )
        v8 = 8LL;
      else
        v8 = v7 != 0 ? 16 : 4;
      if ( (_BYTE)a3 )
      {
        result = CcNotifyWriteBehindInternal(a1, v8);
      }
      else if ( !a1[985] )
      {
        if ( !a1[984] )
          KeBugCheckEx(0x34u, 0x366uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        result = KiSetTimerEx((int)a1 + 920, CcFirstDelay, 0, 0, 0LL);
      }
      if ( !a1[1228] )
        a1[985] = 1;
    }
  }
  return result;
}
