/*
 * XREFs of ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C00A8570
 * Callers:
 *     ?OpenSharedHandle@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0005220 (-OpenSharedHandle@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C005C150 (-OpenSharedHandle@CSharedCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedCompositionDistantLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C005C190 (-OpenSharedHandle@CSharedCompositionDistantLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedCompositionAmbientLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C005E0D0 (-OpenSharedHandle@CSharedCompositionAmbientLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00A80E0 (-OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00A8120 (-OpenSharedHandle@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00A8160 (-OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     NtDCompositionCreateSharedResourceHandle @ 0x1C00A8350 (NtDCompositionCreateSharedResourceHandle.c)
 *     NtDuplicateCompositionInputSink @ 0x1C00A8420 (NtDuplicateCompositionInputSink.c)
 *     ?OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00A8F30 (-OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     NtDCompositionGetMaterialProperty @ 0x1C00A98B0 (NtDCompositionGetMaterialProperty.c)
 *     ?OpenSharedHandle@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C01F40C0 (-OpenSharedHandle@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C01F4470 (-OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C01F44B0 (-OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C01F47D0 (-OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C01F52D0 (-OpenSharedHandle@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedCompositionPointLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C01F56D0 (-OpenSharedHandle@CSharedCompositionPointLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C01F58B0 (-OpenSharedHandle@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionObject::CreateHandle(
        CompositionObject *this,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        KPROCESSOR_MODE AccessMode,
        void **Handle)
{
  *Handle = (void *)-1LL;
  return ObOpenObjectByPointer(this, 2 * a3 + 64, 0LL, a2, ExCompositionObjectType, AccessMode, Handle);
}
