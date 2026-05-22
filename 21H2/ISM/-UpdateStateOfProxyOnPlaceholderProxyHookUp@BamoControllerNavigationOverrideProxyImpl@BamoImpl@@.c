/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180047A30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBounds@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJPEAUtagRECT@@@Z @ 0x18011EC28 (-UpdateBounds@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateFeatures@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18011EE18 (-UpdateFeatures@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdatePaused@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x18011EEBC (-UpdatePaused@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
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
