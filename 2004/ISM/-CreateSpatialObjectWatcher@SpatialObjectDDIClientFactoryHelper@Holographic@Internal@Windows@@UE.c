/*
 * XREFs of ?CreateSpatialObjectWatcher@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UEAAJPEAUISpatialObject@234@AEBU_GUID@@PEAUISpatialObjectWatcherCallback@234@PEAPEAUISpatialObjectWatcher@234@@Z @ 0x1800D7130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::CreateSpatialObjectWatcher(
        Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *this,
        struct Windows::Internal::Holographic::ISpatialObject *a2,
        const struct _GUID *a3,
        struct Windows::Internal::Holographic::ISpatialObjectWatcherCallback *a4,
        struct Windows::Internal::Holographic::ISpatialObjectWatcher **a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Holographic::ISpatialObject *, const struct _GUID *, struct Windows::Internal::Holographic::ISpatialObjectWatcherCallback *, struct Windows::Internal::Holographic::ISpatialObjectWatcher **))(**((_QWORD **)this + 9) + 32LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           a4,
           a5);
}
