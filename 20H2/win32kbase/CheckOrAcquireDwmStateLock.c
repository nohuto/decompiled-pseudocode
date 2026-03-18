/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1C0066FA4
 * Callers:
 *     OpenDwmHandle @ 0x1C0066E3C (OpenDwmHandle.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C01CC950 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E7DBC (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E8698 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreLockDwmState @ 0x1C005E790 (GreLockDwmState.c)
 *     UserIsUserCritSecIn @ 0x1C0060D80 (UserIsUserCritSecIn.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0067070 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

char CheckOrAcquireDwmStateLock()
{
  char v0; // bl

  v0 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn()
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    return 1;
  }
  return v0;
}
