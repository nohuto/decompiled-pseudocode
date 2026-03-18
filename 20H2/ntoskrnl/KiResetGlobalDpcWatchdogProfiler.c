/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1402F81B8
 * Callers:
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MiWalkPageTablesRecursively @ 0x14026D0C0 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     KeAccumulateTicks @ 0x140283C20 (KeAccumulateTicks.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     KiExpireTimer2 @ 0x1402E01F0 (KiExpireTimer2.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x1402F8190 (KiDpcWatchdog.c)
 *     KeRelaxTimingConstraints @ 0x140510468 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
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
