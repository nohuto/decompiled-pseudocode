/*
 * XREFs of ?Thunk_UpdateDeviceId_58@?$IDockableDeviceProxy_Receive@VBamoDockableDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800ED1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall IDockableDeviceProxy_Receive<BamoImpl::BamoDockableDeviceProxyImpl>::Thunk_UpdateDeviceId_58(
        BamoImpl::BamoDockableDeviceProxyImpl *a1,
        struct DockableDeviceIdentity **a2)
{
  return BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceId(a1, *a2);
}
