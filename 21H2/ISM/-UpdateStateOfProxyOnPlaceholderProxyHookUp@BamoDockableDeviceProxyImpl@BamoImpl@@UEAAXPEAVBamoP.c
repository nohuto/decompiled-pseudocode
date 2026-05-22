/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockableDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180044730
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJPEAUDockableDeviceIdentity@@@Z @ 0x1800EDD18 (-UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJPEAUDockableDeviceIdentity@@@Z.c)
 *     ?UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJPEBG@Z @ 0x1800EEC7C (-UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJPEBG@Z.c)
 *     ?UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJG@Z @ 0x1800EF5AC (-UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJG@Z.c)
 */

void __fastcall BamoImpl::BamoDockableDeviceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDockableDeviceProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoDockableDeviceProxyImpl::UpdateInterfacePath(this, *((const unsigned __int16 **)a2 + 4));
  BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceId(
    this,
    (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)a2 + 40));
  BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsagePage(this, *((_WORD *)a2 + 28));
  BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsageId(this, *((_WORD *)a2 + 29));
}
