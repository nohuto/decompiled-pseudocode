/*
 * XREFs of GreUnlockDwmState @ 0x1C005E7D0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003570 (NtDCompositionRegisterThumbnailVisual.c)
 *     OpenDwmHandle @ 0x1C0066E3C (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1C0067000 (UserReferenceDwmApiPort.c)
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00679F0 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007491C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074B1C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C01CC950 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01CCBE0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01CCD20 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C01E3640 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E7DBC (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E8698 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockDwmState()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    return PsLeavePriorityRegion(v1);
  }
  return result;
}
