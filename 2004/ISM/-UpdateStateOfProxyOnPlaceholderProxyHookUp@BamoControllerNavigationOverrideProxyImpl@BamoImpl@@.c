/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180046CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBounds@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJPEAUtagRECT@@@Z @ 0x18011E7C8 (-UpdateBounds@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateFeatures@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18011E9B8 (-UpdateFeatures@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdatePaused@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x18011EA5C (-UpdatePaused@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoControllerNavigationOverrideProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdatePaused(this, *((_BYTE *)a2 + 32));
  BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdateFeatures(this, *((_DWORD *)a2 + 9));
  BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdateBounds(this, (struct tagRECT *)((char *)a2 + 40));
  BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdateResumePosition(this, (struct tagPOINT *)a2 + 7);
}
