/*
 * XREFs of WheapFreeErrorRecord @ 0x1405B6500
 * Callers:
 *     WheaReportHwError @ 0x1405B5B70 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1405B6620 (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x1407C0950 (WheapEtwEnableCallback.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 */

__int64 __fastcall WheapFreeErrorRecord(ULONG_PTR a1)
{
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
  else
    return ExFreeHeapPool(a1);
}
