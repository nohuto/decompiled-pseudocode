/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704
 * Callers:
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0001BB0 (-OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?MarkInvalid@CCompositionSurface@@MEAAXXZ @ 0x1C00024D0 (-MarkInvalid@CCompositionSurface@@MEAAXXZ.c)
 *     ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C00025B0 (-GetEarlyTokenSync@CFlipToken@@UEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00035A4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C0003890 (-GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C0003F78 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x1C0004004 (-GetIndependentFlipState@CompositionSurfaceObject@@QEBA-AW4IndependentFlipState@@_K@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0004618 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0005880 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C00064CC (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000C100 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000C5F0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C0014350 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C00155C0 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C00164C0 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0016AE0 (NtQueryCompositionSurfaceStatistics.c)
 *     ?MarkInvalid@CCompositionToken@@UEAAXXZ @ 0x1C0017710 (-MarkInvalid@CCompositionToken@@UEAAXXZ.c)
 *     ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x1C00177F0 (-IsAnalogExclusive@CFlipToken@@UEBA_NXZ.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C001BC84 (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001BD54 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C001C0B8 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C001C1C8 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C001C238 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C001C290 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C388 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C001C5DC (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C001DC80 (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C004BA30 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z @ 0x1C0061B20 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C0061EBC (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0061F18 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C0061FA4 (-MarkCompleted@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0062220 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C0062664 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?MarkInvalid@CFlipManagerToken@@UEAAXXZ @ 0x1C00627B0 (-MarkInvalid@CFlipManagerToken@@UEAAXXZ.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C00633DC (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z @ 0x1C0063ED0 (-GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0063F60 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0064080 (-PairedBind@CompositionSurfaceObject@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C0064120 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C0066480 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C00664F0 (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C006656C (-ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C00665E8 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C0066678 (-ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C00666E8 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C0066750 (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C00667E8 (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z @ 0x1C0066854 (-EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z.c)
 *     ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C00668D0 (-IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z.c)
 *     ?PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z @ 0x1C0066948 (-PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z.c)
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C00669A8 (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0066A18 (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0066B00 (-RemoveContent@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0066B60 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0066BD8 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C00672C0 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectSetMaximumBackchannelQueueDepth @ 0x1C00681C0 (NtFlipObjectSetMaximumBackchannelQueueDepth.c)
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0068274 (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEA.c)
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C00682FC (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipP.c)
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C0068384 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 *     ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C0068754 (-IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z.c)
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C0068868 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0068CA0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C0069820 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C006CA90 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C006CB40 (-Pending@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006CBAC (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B46C0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx((char *)this + 8, 0LL);
  }
  KeLeaveCriticalRegion();
}
