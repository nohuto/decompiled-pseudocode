/*
 * XREFs of CcScheduleLazyWriteScan @ 0x1402F6D5C
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14022D68C (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14022DA70 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x14022E5C0 (CcInitializeCacheMapEx.c)
 *     CcRescheduleLazyWriteScan @ 0x140260454 (CcRescheduleLazyWriteScan.c)
 *     CcUninitializeCacheMap @ 0x1402F68B0 (CcUninitializeCacheMap.c)
 *     CcSetDirtyPinnedData @ 0x1402F9310 (CcSetDirtyPinnedData.c)
 *     CcDecrementOpenCount @ 0x14031313C (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     CcChargeDirtyPages @ 0x140336210 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x140336470 (CcSetDirtyInMask.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14038148C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x140392670 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x1404E96C0 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x1404EA040 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x1404EBE84 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x1402C2120 (CcNotifyWriteBehindInternal.c)
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
