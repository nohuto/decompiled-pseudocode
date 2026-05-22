/*
 * XREFs of ?InternalClose@?$HandleT@UHANDLENullTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x180093BD0
 * Callers:
 *     ??1?$HandleT@UHANDLENullTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800922E4 (--1-$HandleT@UHANDLENullTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEA.c)
 *     ??1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x18009250C (--1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800CE144 (--1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162508 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::InternalClose(
        __int64 a1)
{
  return Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close(*(void **)(a1 + 8));
}
