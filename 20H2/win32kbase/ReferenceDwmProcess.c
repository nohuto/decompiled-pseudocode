/*
 * XREFs of ReferenceDwmProcess @ 0x1C0066F60
 * Callers:
 *     OpenDwmHandle @ 0x1C0066E3C (OpenDwmHandle.c)
 *     UserReferenceDwmProcess @ 0x1C0066F40 (UserReferenceDwmProcess.c)
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00679F0 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C01CC950 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C01E3640 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E7DBC (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E8698 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
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
