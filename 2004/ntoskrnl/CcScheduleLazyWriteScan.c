/*
 * XREFs of CcScheduleLazyWriteScan @ 0x1402C46BC
 * Callers:
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPages @ 0x1402229D0 (CcChargeDirtyPages.c)
 *     CcNotifyOfMappedWrite @ 0x1402BF88C (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     CcDecrementOpenCount @ 0x1402C0EE4 (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     CcSetDirtyPinnedData @ 0x1402C28E0 (CcSetDirtyPinnedData.c)
 *     CcUninitializeCacheMap @ 0x1402C4180 (CcUninitializeCacheMap.c)
 *     CcRescheduleLazyWriteScan @ 0x1402C8DC4 (CcRescheduleLazyWriteScan.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14037EF9C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14038FD40 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x1404E45A0 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x1404E4F20 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x1404E6D64 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x1403501D0 (CcNotifyWriteBehindInternal.c)
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
