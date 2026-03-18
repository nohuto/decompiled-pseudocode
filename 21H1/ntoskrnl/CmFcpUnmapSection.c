/*
 * XREFs of CmFcpUnmapSection @ 0x1407BEBC8
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140879504 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
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
