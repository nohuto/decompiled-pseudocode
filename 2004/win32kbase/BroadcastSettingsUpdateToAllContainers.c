/*
 * XREFs of BroadcastSettingsUpdateToAllContainers @ 0x1C0025820
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0025210 (xxxSystemParametersInfo.c)
 *     UpdateMouseSensitivity @ 0x1C0025790 (UpdateMouseSensitivity.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0122C10 (_SetPrecisionTouchPadConfiguration.c)
 *     SetSwapMouseButton @ 0x1C012C820 (SetSwapMouseButton.c)
 *     UnpackMouseSettings @ 0x1C01AC7E0 (UnpackMouseSettings.c)
 * Callees:
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AC61C (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 */

void BroadcastSettingsUpdateToAllContainers()
{
  const struct CONTAINER_ID *v0; // rdx
  int v1; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)isRootPartition() )
  {
    if ( !gpHidInput || *((_DWORD *)gpHidInput + 314) )
    {
      v1 = 0;
      IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v1, v0);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v0,
        12,
        18,
        (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids);
    }
  }
}
