/*
 * XREFs of ?CreateSpatialPayloadDescriptor@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UEAAJPEBX_KPEAPEAUISpatialPayloadDescriptor@234@@Z @ 0x1800D7620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::CreateSpatialPayloadDescriptor(
        Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *this,
        const void *a2,
        __int64 a3,
        struct Windows::Internal::Holographic::ISpatialPayloadDescriptor **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, const void *, __int64, struct Windows::Internal::Holographic::ISpatialPayloadDescriptor **))(**((_QWORD **)this + 9) + 48LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           a4);
}
