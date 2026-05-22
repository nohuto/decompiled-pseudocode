/*
 * XREFs of ?CreateSpatialObjectDeviceWatcher@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UEAAJAEBU_GUID@@PEAUISpatialObjectDeviceWatcherCallback@234@PEAPEAUISpatialObjectDeviceWatcher@234@@Z @ 0x1800D74D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::CreateSpatialObjectDeviceWatcher(
        Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *this,
        const struct _GUID *a2,
        struct Windows::Internal::Holographic::ISpatialObjectDeviceWatcherCallback *a3,
        struct Windows::Internal::Holographic::ISpatialObjectDeviceWatcher **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct Windows::Internal::Holographic::ISpatialObjectDeviceWatcherCallback *, struct Windows::Internal::Holographic::ISpatialObjectDeviceWatcher **))(**((_QWORD **)this + 9) + 40LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           a4);
}
