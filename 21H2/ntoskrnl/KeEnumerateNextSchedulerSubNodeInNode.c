/*
 * XREFs of KeEnumerateNextSchedulerSubNodeInNode @ 0x140354698
 * Callers:
 *     KeQueryNodeActiveAffinityEx @ 0x140263260 (KeQueryNodeActiveAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1402D990C (PoCopyDeepIdleMask.c)
 *     PoAllProcessorsDeepIdle @ 0x1403545B0 (PoAllProcessorsDeepIdle.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1403DDCA0 (KeQueryNodeActiveProcessorCount.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x140568D20 (KiConfigureHeteroProcessorsTarget.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x14056D9C0 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     KiSynchNumaCounterSetCallback @ 0x140960E60 (KiSynchNumaCounterSetCallback.c)
 *     KiConfigureAllSchedulingInformation @ 0x140B03BA8 (KiConfigureAllSchedulingInformation.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140B2ED24 (KiCountNodeZeroSetBitsGroupAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextSchedulerSubNodeInNode(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 2147483674LL;
  _BitScanForward((unsigned int *)&v4, v2);
  *(_DWORD *)(a1 + 8) = v2 & ~(1 << v4);
  result = 0LL;
  *a2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4 + 24);
  return result;
}
