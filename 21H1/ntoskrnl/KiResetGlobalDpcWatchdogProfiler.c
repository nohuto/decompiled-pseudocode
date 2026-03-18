/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1402EE388
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14020B270 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     KiExpireTimer2 @ 0x140243360 (KiExpireTimer2.c)
 *     KeAccumulateTicks @ 0x140272200 (KeAccumulateTicks.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x1402EE360 (KiDpcWatchdog.c)
 *     KeRelaxTimingConstraints @ 0x14050C4E8 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void *__fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  void *v1; // r9
  void *result; // rax
  __int64 v3; // r8

  v1 = *(void **)(a1 + 33960);
  if ( v1 && *(void **)(a1 + 33968) != v1 )
  {
    result = (void *)*(unsigned int *)(a1 + 31732);
    if ( *(_DWORD *)(a1 + 31724) < (int)result )
    {
      v3 = (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 33968) = v1;
      return memset(v1, 0, 8 * v3);
    }
  }
  return result;
}
