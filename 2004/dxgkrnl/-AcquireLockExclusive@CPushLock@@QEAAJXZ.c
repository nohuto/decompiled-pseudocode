/*
 * XREFs of ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010BD4
 * Callers:
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z @ 0x1C000DD80 (-OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?MarkInvalid@CCompositionSurface@@MEAAXXZ @ 0x1C000EC60 (-MarkInvalid@CCompositionSurface@@MEAAXXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000FFA8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C00105B0 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0010760 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C001BE4C (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001BF1C (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C4B4 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C001DCD0 (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C004CA40 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C0063764 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?MarkInvalid@CFlipManagerToken@@UEAAXXZ @ 0x1C00638B0 (-MarkInvalid@CFlipManagerToken@@UEAAXXZ.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C00650F0 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0065210 (-PairedBind@CompositionSurfaceObject@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C00652B0 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C0067610 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C0067680 (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C00676FC (-ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C0067778 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C0067808 (-ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C0067878 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00678E0 (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C0067978 (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z @ 0x1C00679E4 (-EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z.c)
 *     ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C0067A60 (-IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z.c)
 *     ?PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z @ 0x1C0067AD8 (-PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z.c)
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C0067B38 (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0067BA8 (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0067C90 (-RemoveContent@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0067CF0 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0067D68 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C0068450 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectSetMaximumBackchannelQueueDepth @ 0x1C0069350 (NtFlipObjectSetMaximumBackchannelQueueDepth.c)
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0069404 (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEA.c)
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C006948C (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipP.c)
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C0069514 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 *     ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C00698E4 (-IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z.c)
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C00699F8 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0069E30 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C006A9B0 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C006DC20 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C006DCD0 (-Pending@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006DD3C (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B8C00 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPushLock::AcquireLockExclusive(CPushLock *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
    return (unsigned int)-1073741816;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 8, 0LL);
  *((_QWORD *)this + 2) = KeGetCurrentThread();
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
  {
    CPushLock::ReleaseLock(this);
    return (unsigned int)-1073741816;
  }
  return v2;
}
