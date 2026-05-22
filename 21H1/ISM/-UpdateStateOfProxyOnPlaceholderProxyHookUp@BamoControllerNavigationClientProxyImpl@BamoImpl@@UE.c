/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180047280
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBounds@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJPEAUtagRECT@@@Z @ 0x18011EBE0 (-UpdateBounds@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateEnabled@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x18011ED30 (-UpdateEnabled@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdateFeatures@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18011EDD4 (-UpdateFeatures@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoControllerNavigationClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateEnabled(this, *((_BYTE *)a2 + 32));
  BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateFeatures(this, *((_DWORD *)a2 + 9));
  BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateBounds(this, (struct tagRECT *)((char *)a2 + 40));
  BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateStartPosition(this, (struct tagPOINT *)a2 + 7);
}
