/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMagnifierControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1800458E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGesturesEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180100BB4 (-UpdateGesturesEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180100C58 (-UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

void __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoMagnifierControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoMagnifierControllerProxyImpl::UpdateToggleEnabled(this, *((_BYTE *)a2 + 32));
  BamoImpl::BamoMagnifierControllerProxyImpl::UpdateGesturesEnabled(this, *((_BYTE *)a2 + 33));
  BamoImpl::BamoMagnifierControllerProxyImpl::UpdateUseInputSiteCoordinateSpace(this, *((_BYTE *)a2 + 34));
}
