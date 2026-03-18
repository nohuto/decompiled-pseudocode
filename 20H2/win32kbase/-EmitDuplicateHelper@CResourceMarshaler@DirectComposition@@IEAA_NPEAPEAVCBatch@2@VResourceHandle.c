/*
 * XREFs of ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C0079AD0
 * Callers:
 *     ?EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00046C0 (-EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004A30 (-EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00056B0 (-EmitCreationCommand@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEA.c)
 *     ?EmitCreationCommand@CSharedCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078400 (-EmitCreationCommand@CSharedCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBa.c)
 *     ?EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078420 (-EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078440 (-EmitCreationCommand@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch.c)
 *     ?EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078850 (-EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078870 (-EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078970 (-EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00789B0 (-EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F2A60 (-EmitCreationCommand@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVC.c)
 *     ?EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F2E80 (-EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@.c)
 *     ?EmitCreationCommand@CSharedReadCaptureControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F3950 (-EmitCreationCommand@CSharedReadCaptureControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CSharedCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F3D20 (-EmitCreationCommand@CSharedCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F3F30 (-EmitCreationCommand@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEA.c)
 * Callees:
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C005D9D8 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitDuplicateHelper(__int64 a1, __int64 *a2, int a3)
{
  char *v6; // rdx
  __int64 v7; // rax
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( (int)DirectComposition::CBatch::AddSystemResourceRef(*a2, a3) < 0
    || !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x14uLL, &v9) )
  {
    return 0;
  }
  v6 = (char *)v9;
  v7 = *(_QWORD *)(*(_QWORD *)(*a2 + 8) + 40LL);
  *(_DWORD *)v9 = 20;
  *(_OWORD *)(v6 + 4) = 0LL;
  *((_DWORD *)v6 + 1) = 47;
  *((_DWORD *)v6 + 2) = *(_DWORD *)(*(_QWORD *)(v7 + 152) + 28LL);
  *((_DWORD *)v6 + 3) = a3;
  *((_DWORD *)v6 + 4) = *(_DWORD *)(a1 + 24);
  return 1;
}
