/*
 * XREFs of GreLockDwmState @ 0x1C00A5990
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003570 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C005FF1C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006011C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00A695C (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C00A78E0 (UserReferenceDwmApiPort.c)
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00A8C70 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01CEF60 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01CF0A0 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C01E5480 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 */

__int64 GreLockDwmState()
{
  EngAcquireSemaphore(ghsemDwmState);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
}
