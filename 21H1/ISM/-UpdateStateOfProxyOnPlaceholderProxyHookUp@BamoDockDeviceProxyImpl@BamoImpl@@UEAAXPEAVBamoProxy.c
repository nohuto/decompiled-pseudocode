/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180043EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDisplayOcclusionSupported@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x1800EDF58 (-UpdateDisplayOcclusionSupported@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJPEBG@Z @ 0x1800EF21C (-UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJPEBG@Z.c)
 */

void __fastcall BamoImpl::BamoDockDeviceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDockDeviceProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoDockDeviceProxyImpl::UpdatePanelId(this, *((const unsigned __int16 **)a2 + 4));
  BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionSupported(this, *((_BYTE *)a2 + 40));
  BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionLogicalRange(this, (struct tagRECT *)((char *)a2 + 44));
}
