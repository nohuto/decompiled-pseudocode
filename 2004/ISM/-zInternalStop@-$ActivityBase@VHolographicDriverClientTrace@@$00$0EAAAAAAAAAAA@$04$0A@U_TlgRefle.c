/*
 * XREFs of ?zInternalStop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180096AD0
 * Callers:
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x180095E40 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ?StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ @ 0x1800960C0 (-StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ.c)
 *     ?Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W_N1@Z @ 0x1800D2838 (-Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W.c)
 *     ?StopActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800D2B10 (-StopActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ.c)
 *     ?StopActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800D2D40 (-StopActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices.c)
 *     ?StopActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800D2F70 (-StopActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@MEA.c)
 *     ?StopActivity@DdiSource_BackgroundInit@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800D9330 (-StopActivity@DdiSource_BackgroundInit@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXX.c)
 *     ?StopActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800D9560 (-StopActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAX.c)
 *     ?StopActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800D9790 (-StopActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@ME.c)
 *     ?StopActivity@InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800D99C0 (-StopActivity@InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDev.c)
 *     ?StopActivity@SpatialObjectDeviceAdded@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800D9BF0 (-StopActivity@SpatialObjectDeviceAdded@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXX.c)
 *     ?StopActivity@SpatialObjectDeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800D9E20 (-StopActivity@SpatialObjectDeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAA.c)
 *     ?StopActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800E1990 (-StopActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ.c)
 *     ?StopActivity@OnHandSpatialObjectRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800E1BC0 (-StopActivity@OnHandSpatialObjectRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAA.c)
 *     ?StopActivity@CloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x180165090 (-StopActivity@CloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x1801652C0 (-StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x1801654F0 (-StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?StopActivity@OpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x180165720 (-StopActivity@OpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x180165950 (-StopActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x180165B80 (-StopActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180093CA4 (-LockExclusive@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A.c)
 */

void __fastcall wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
