/*
 * XREFs of ReferenceDwmProcess @ 0x1C00B45A0
 * Callers:
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00B3A00 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1C00B4484 (OpenDwmHandle.c)
 *     UserReferenceDwmProcess @ 0x1C00B4580 (UserReferenceDwmProcess.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C01D4C50 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C01EB400 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EF12C (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EFA08 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

PVOID ReferenceDwmProcess()
{
  PVOID v0; // rbx

  v0 = g_pepDwm;
  if ( g_pepDwm )
    ObReferenceObjectByPointer(g_pepDwm, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  return v0;
}
