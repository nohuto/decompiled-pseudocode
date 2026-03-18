/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC
 * Callers:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C0002538 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0003190 (-OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00038CC (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0004FF8 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0005748 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00057A0 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C0005C40 (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C0005CB4 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C0005E60 (-GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 *     ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z @ 0x1C0005FA0 (-GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C00064CC (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C00066AC (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0006830 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 *     ?Discard@CCompositionFrame@@UEAAXXZ @ 0x1C00083B0 (-Discard@CCompositionFrame@@UEAAXXZ.c)
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x1C000874C (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Confirm@CCompositionFrame@@UEAAXXZ @ 0x1C00087A0 (-Confirm@CCompositionFrame@@UEAAXXZ.c)
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00154B0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ??1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ @ 0x1C0054560 (--1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ.c)
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C005B9A0 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C0075C50 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C00760CC (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C007624C (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0076DF0 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C0076FAC (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C0077020 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?DxgkSetCompositionSurfaceInkCookie@@YAJPEAXI@Z @ 0x1C0077380 (-DxgkSetCompositionSurfaceInkCookie@@YAJPEAXI@Z.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C00773F4 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z @ 0x1C0077B60 (-GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0077BF0 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C0077D10 (-PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C0077D90 (-PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C0077E10 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C0079AA0 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C0079B10 (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C0079B8C (-ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C0079C08 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C0079C98 (-ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C0079D08 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C0079D70 (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C0079E0C (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z @ 0x1C0079E78 (-EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z.c)
 *     ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C0079EF4 (-IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z.c)
 *     ?PresentCancel@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0079F64 (-PresentCancel@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C0079FC4 (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 *     ?QueryLostEvent@FlipManagerObject@@QEAAJPEAXPEAPEAX@Z @ 0x1C007A034 (-QueryLostEvent@FlipManagerObject@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C007A0C0 (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1C007A1A8 (-RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C007A218 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C007A278 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C007A960 (NtFlipObjectConsumerEndProcessPresent.c)
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007B978 (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPr.c)
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C007BA00 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x1C007BA60 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 *     ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C007BD58 (-IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z.c)
 *     ?NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z @ 0x1C007BDB8 (-NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C007C060 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C007C660 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C007F5C4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C00817E0 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0081850 (-Discard@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C00818C0 (-Pending@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0315B70 (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0354840 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 1) )
  {
    *((_QWORD *)this + 1) = 0LL;
    ExReleasePushLockExclusiveEx(this, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(this, 0LL);
  }
  KeLeaveCriticalRegion();
}
