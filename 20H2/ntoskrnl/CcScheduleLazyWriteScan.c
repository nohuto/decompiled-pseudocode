/*
 * XREFs of CcScheduleLazyWriteScan @ 0x1402418E0
 * Callers:
 *     CcSetDirtyPinnedData @ 0x140241270 (CcSetDirtyPinnedData.c)
 *     CcRescheduleLazyWriteScan @ 0x14024724C (CcRescheduleLazyWriteScan.c)
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWrite @ 0x140295F24 (CcNotifyOfMappedWrite.c)
 *     CcDecrementOpenCount @ 0x14029A71C (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x14029A7B0 (CcCanIWrite.c)
 *     CcUninitializeCacheMap @ 0x14029E760 (CcUninitializeCacheMap.c)
 *     CcChargeDirtyPages @ 0x1402B9460 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x1402B96C0 (CcSetDirtyInMask.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380CCC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x140392200 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x1404E7B30 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x1404E84B0 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x1404EA2F4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x1403208E0 (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcScheduleLazyWriteScan(__int64 a1, char a2, char a3)
{
  char result; // al
  __int64 v6; // rdx

  result = *(_BYTE *)(a1 + 964);
  if ( !result || a2 )
  {
    if ( a3 )
    {
      v6 = 8LL;
    }
    else
    {
      result = -result;
      v6 = result != 0 ? 16 : 4;
    }
    if ( a2 )
    {
      result = CcNotifyWriteBehindInternal(a1, v6);
    }
    else if ( !*(_BYTE *)(a1 + 632) )
    {
      result = KiSetTimerEx((int)a1 + 568, CcFirstDelay, 0, 0, a1 + 504);
    }
    if ( !*(_BYTE *)(a1 + 964) )
      *(_BYTE *)(a1 + 632) = 1;
  }
  return result;
}
