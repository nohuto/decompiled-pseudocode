/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180043BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateIsIntensitySupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x1800EE9B4 (-UpdateIsIntensitySupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdateIsPlayCountSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x1800EEA58 (-UpdateIsPlayCountSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdateIsPlayDurationSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x1800EEAFC (-UpdateIsPlayDurationSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdateSupportedFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EF588 (-UpdateSupportedFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a2 + 4);
  if ( v2 )
    BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateSupportedFeedback(this, *(_DWORD *)(v2 + 40));
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsIntensitySupported(this, *((_BYTE *)a2 + 40));
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsPlayCountSupported(this, *((_BYTE *)a2 + 41));
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsPlayDurationSupported(this, *((_BYTE *)a2 + 42));
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsReplayPauseIntervalSupported(this, *((_BYTE *)a2 + 43));
}
