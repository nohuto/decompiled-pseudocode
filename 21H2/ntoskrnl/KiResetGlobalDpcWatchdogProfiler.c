/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x140222280
 * Callers:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdogCounterReset @ 0x1402221F4 (KiDpcWatchdogCounterReset.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     KeRelaxTimingConstraints @ 0x140568560 (KeRelaxTimingConstraints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 34984);
  if ( v1 && *(_QWORD *)(a1 + 34992) != v1 )
  {
    result = *(unsigned int *)(a1 + 32436);
    if ( *(_DWORD *)(a1 + 32428) < (int)result )
      *(_QWORD *)(a1 + 34992) = v1;
  }
  return result;
}
