/*
 * XREFs of HalpTscReserveResources @ 0x1403CD198
 * Callers:
 *     HalpTimerInitSystem @ 0x1403A9340 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A24C4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403CD2B0 (HalpTscCheckAdjustMsrCapability.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 HalpTscReserveResources()
{
  __int64 result; // rax
  __int64 v1; // rdi
  __int64 v2; // rcx
  ULONG_PTR v3; // rbx
  void *v4; // rax
  __int64 v5; // rsi

  HalpTscFallbackLock = 0LL;
  result = HalpQueryMaximumRegisteredProcessorCount();
  v1 = (unsigned int)result;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v2 = (4 * (_DWORD)result + ((4 * (_DWORD)result + 8 * (_DWORD)result + 7) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8;
    v3 = ((((_DWORD)v2 + 4 * (_DWORD)result + 7) & 0xFFFFFFF8) + ((_DWORD)result << 7) + 135) & 0xFFFFFFF8;
    v4 = (void *)HalpMmAllocCtxAlloc(v2, v3);
    v5 = (__int64)v4;
    if ( !v4 )
      KeBugCheckEx(0xACu, v3, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\timers\\pc\\tscsync.c", 0x15EuLL);
    memset(v4, 0, v3);
    HalpTscDeltas = v5;
    HalpTscMaximumCounterSyncSpread = 1024;
    HalpTscNopCycles = (v5 + 8 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    HalpTscWaves = (HalpTscNopCycles + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    HalpTscSkewOffset = (HalpTscWaves + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    TscRequest = (((HalpTscSkewOffset + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 120) & 0xFFFFFFFFFFFFFF80uLL;
    result = HalpTscCheckAdjustMsrCapability();
    HalpTscAdjustAvailable = result;
  }
  return result;
}
