/*
 * XREFs of CmFcpUnmapSection @ 0x1407D4AE8
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DD04 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MmUnmapViewInSystemSpace @ 0x1406AC5B0 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __fastcall CmFcpUnmapSection(__int64 a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return MmUnmapViewInSystemSpace(v1);
  return result;
}
