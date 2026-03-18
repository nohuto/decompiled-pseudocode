/*
 * XREFs of CmFcpUnmapSection @ 0x1407D06B8
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140880364 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MmUnmapViewInSystemSpace @ 0x140658CE0 (MmUnmapViewInSystemSpace.c)
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
