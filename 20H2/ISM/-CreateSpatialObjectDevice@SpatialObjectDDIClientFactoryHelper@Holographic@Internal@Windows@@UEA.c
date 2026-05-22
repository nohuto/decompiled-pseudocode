/*
 * XREFs of ?CreateSpatialObjectDevice@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UEAAJW4SpatialObjectDeviceOptions@234@PEB_WAEBU_GUID@@PEAPEAUISpatialObjectDevice@234@@Z @ 0x1800D7040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::CreateSpatialObjectDevice(
        __int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72));
}
