/*
 * XREFs of CcScheduleLazyWriteScan @ 0x14023188C
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14022CA64 (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14022CE40 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     CcDecrementOpenCount @ 0x14022E0B4 (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x14022E140 (CcCanIWrite.c)
 *     CcSetDirtyPinnedData @ 0x14022FAB0 (CcSetDirtyPinnedData.c)
 *     CcUninitializeCacheMap @ 0x140231350 (CcUninitializeCacheMap.c)
 *     CcRescheduleLazyWriteScan @ 0x140235F94 (CcRescheduleLazyWriteScan.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPages @ 0x14027BA20 (CcChargeDirtyPages.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14037E4DC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14038F1D0 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x1404E3FF0 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x1404E4970 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x1404E67B4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x140312440 (CcNotifyWriteBehindInternal.c)
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
