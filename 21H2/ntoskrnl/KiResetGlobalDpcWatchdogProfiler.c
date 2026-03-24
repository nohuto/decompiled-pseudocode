/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1402940C8
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     MiWalkPageTablesRecursively @ 0x14020BDA0 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x140212D10 (MiGetPageChain.c)
 *     KeAccumulateTicks @ 0x140224410 (KeAccumulateTicks.c)
 *     KiExpireTimer2 @ 0x14024B5C0 (KiExpireTimer2.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x1402940A0 (KiDpcWatchdog.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     KeRelaxTimingConstraints @ 0x140511F98 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
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
