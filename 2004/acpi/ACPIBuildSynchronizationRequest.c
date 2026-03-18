/*
 * XREFs of ACPIBuildSynchronizationRequest @ 0x1C004C3F4
 * Callers:
 *     ACPIDockIrpStartDevice @ 0x1C00AC260 (ACPIDockIrpStartDevice.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C690 (ACPIBuildSynchronizationRequestInternal.c)
 */

__int64 __fastcall ACPIBuildSynchronizationRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  return ACPIBuildSynchronizationRequestInternal(a1, a2, a3, a4, a5);
}
