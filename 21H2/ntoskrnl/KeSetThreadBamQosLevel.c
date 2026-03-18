/*
 * XREFs of KeSetThreadBamQosLevel @ 0x14045AB80
 * Callers:
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KeApplyWobBamQos @ 0x14030F970 (KeApplyWobBamQos.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14045AD66 (KiConvertDynamicHeteroPolicy.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x140574018 (KiHeteroComputeThreadWorkloadProperties.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetThreadBamQosLevel(__int64 a1, int a2)
{
  __int64 result; // rax
  signed __int32 v3; // ett

  do
  {
    v3 = *(_DWORD *)(a1 + 512);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 512), a2 | v3 & 0xFFFFFF00, v3);
  }
  while ( v3 != (_DWORD)result );
  return result;
}
