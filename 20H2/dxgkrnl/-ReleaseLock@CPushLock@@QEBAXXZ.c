/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002F70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z @ 0x1C000DDE0 (-OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C000E530 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?MarkInvalid@CCompositionSurface@@MEAAXXZ @ 0x1C000ECC0 (-MarkInvalid@CCompositionSurface@@MEAAXXZ.c)
 *     ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C000EDA0 (-GetEarlyTokenSync@CFlipToken@@UEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000FDE4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C00100D0 (-GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C00107C0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010C34 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010CB0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0010D20 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C0013110 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0013654 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0013B10 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0014F9C (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0015EA0 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C00164C0 (NtQueryCompositionSurfaceStatistics.c)
 *     ?MarkInvalid@CCompositionToken@@UEAAXXZ @ 0x1C00171E0 (-MarkInvalid@CCompositionToken@@UEAAXXZ.c)
 *     ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x1C00172C0 (-IsAnalogExclusive@CFlipToken@@UEBA_NXZ.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C001BEAC (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001BF7C (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C001C278 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C001C2E8 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C001C340 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C514 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C001C68C (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C001DD30 (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C004C980 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z @ 0x1C0062A70 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C0062E0C (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0062E68 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C0062EF4 (-MarkCompleted@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C006302C (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C00631F0 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C0063634 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?MarkInvalid@CFlipManagerToken@@UEAAXXZ @ 0x1C0063780 (-MarkInvalid@CFlipManagerToken@@UEAAXXZ.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C00640D8 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C0064438 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z @ 0x1C0064F30 (-GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0064FC0 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C00650E0 (-PairedBind@CompositionSurfaceObject@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C0065180 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C00674E0 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C0067550 (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C00675CC (-ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C0067648 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C00676D8 (-ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C0067748 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00677B0 (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C0067848 (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z @ 0x1C00678B4 (-EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z.c)
 *     ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C0067930 (-IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z.c)
 *     ?PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z @ 0x1C00679A8 (-PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z.c)
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C0067A08 (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0067A78 (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0067B60 (-RemoveContent@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0067BC0 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0067C38 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C0068320 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectSetMaximumBackchannelQueueDepth @ 0x1C0069220 (NtFlipObjectSetMaximumBackchannelQueueDepth.c)
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C00692D4 (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEA.c)
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C006935C (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipP.c)
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C00693E4 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 *     ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C00697B4 (-IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z.c)
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C00698C8 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0069D00 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C006A880 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C006DAF0 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C006DBA0 (-Pending@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006DC0C (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B7C20 (NtDxgkVailPromoteCompositionSurface.c)
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
