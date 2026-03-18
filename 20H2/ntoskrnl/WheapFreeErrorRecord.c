/*
 * XREFs of WheapFreeErrorRecord @ 0x1405BA060
 * Callers:
 *     WheaReportHwError @ 0x1405B96D0 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1405BA180 (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x1407CF1E0 (WheapEtwEnableCallback.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 */

__int64 __fastcall WheapFreeErrorRecord(ULONG_PTR a1)
{
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
  else
    return ExFreeHeapPool(a1);
}
