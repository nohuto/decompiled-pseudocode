/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x140327CB8
 * Callers:
 *     KeAccumulateTicks @ 0x1402191B0 (KeAccumulateTicks.c)
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     KiExpireTimer2 @ 0x14027FA60 (KiExpireTimer2.c)
 *     MiWalkPageTablesRecursively @ 0x14029DD80 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x140327C90 (KiDpcWatchdog.c)
 *     KeRelaxTimingConstraints @ 0x14050CB38 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
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
