/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x140212038
 * Callers:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x140212010 (KiDpcWatchdog.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     KeAccumulateTicks @ 0x1402C8D10 (KeAccumulateTicks.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     KeRelaxTimingConstraints @ 0x1405121D8 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
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
