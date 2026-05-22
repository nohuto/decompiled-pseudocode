/*
 * XREFs of ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180096288
 * Callers:
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x180095DDC (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?StartActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z @ 0x1800D2818 (-StartActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z.c)
 *     ?StartActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x1800D28D8 (-StartActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevice.c)
 *     ?StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800D29F8 (-StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ?StartActivity@DdiSource_BackgroundInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800D9268 (-StartActivity@DdiSource_BackgroundInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX.c)
 *     ?StartActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@@Z @ 0x1800D932C (-StartActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA.c)
 *     ?StartActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800D942C (-StartActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@Q.c)
 *     ?StartActivity@InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800D94F0 (-StartActivity@InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDe.c)
 *     ?StartActivity@SpatialObjectDeviceAdded@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_W@Z @ 0x1800D9584 (-StartActivity@SpatialObjectDeviceAdded@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX.c)
 *     ?StartActivity@SpatialObjectDeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_W@Z @ 0x1800D9628 (-StartActivity@SpatialObjectDeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEA.c)
 *     ?StartActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800E1C58 (-StartActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPE.c)
 *     ?StartActivity@OnHandSpatialObjectRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800E1D1C (-StartActivity@OnHandSpatialObjectRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEA.c)
 *     ?StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1801646E4 (-StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@.c)
 *     ?StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1801647D4 (-StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU.c)
 *     ?StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x180164904 (-StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEB.c)
 *     ?StartActivity@OpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180164A18 (-StartActivity@OpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@.c)
 *     ?StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180164B08 (-StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDr.c)
 *     ?StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180164C10 (-StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDri.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180039C7C (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800681BC (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StartWatching(
        wil::details::ThreadFailureCallbackHolder *this)
{
  const struct wil::FailureInfo *v2; // rdx
  _QWORD *Local; // rcx
  _BYTE v4[152]; // [rsp+20h] [rbp-98h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    memset_0(v4, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v4, v2);
  }
  if ( wil::details::g_pThreadFailureCallbacks )
    Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                        (__int64)this,
                        1);
  else
    Local = 0LL;
  *(_QWORD *)this = Local;
  if ( Local )
  {
    *((_QWORD *)this + 2) = *Local;
    *Local = this;
    *((_DWORD *)this + 6) = GetCurrentThreadId();
  }
}
