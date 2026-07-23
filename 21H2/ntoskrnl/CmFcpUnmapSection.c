/*
 * XREFs of CmFcpUnmapSection @ 0x1407D4C58
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DE64 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MmUnmapViewInSystemSpace @ 0x14060ACA0 (MmUnmapViewInSystemSpace.c)
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
