/*
 * XREFs of CcScheduleLazyWriteScan @ 0x140301AAC
 * Callers:
 *     CcRescheduleLazyWriteScan @ 0x140281A20 (CcRescheduleLazyWriteScan.c)
 *     CcNotifyOfMappedWrite @ 0x1402D1EDC (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x140301600 (CcUninitializeCacheMap.c)
 *     CcSetDirtyPinnedData @ 0x140304060 (CcSetDirtyPinnedData.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     CcChargeDirtyPages @ 0x140340F60 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380FDC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1403927C0 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x1404E9900 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x1404EA280 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x1404EC0C4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1402405C0 (CcNotifyWriteBehindInternal.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 */

char __fastcall CcScheduleLazyWriteScan(__int64 a1, char a2, char a3)
{
  char result; // al
  char v6; // dl

  result = *(_BYTE *)(a1 + 964);
  if ( !result || a2 )
  {
    if ( a3 )
    {
      v6 = 8;
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
      result = KiSetTimerEx(a1 + 568, CcFirstDelay, 0, 0, a1 + 504);
    }
    if ( !*(_BYTE *)(a1 + 964) )
      *(_BYTE *)(a1 + 632) = 1;
  }
  return result;
}
