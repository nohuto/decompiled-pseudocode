/*
 * XREFs of _CheckPointerDeviceConfiguration@0 @ 0xD56E0
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     _CheckPTPPointerDeviceConfiguration@0 @ 0xD577A (_CheckPTPPointerDeviceConfiguration@0.c)
 *     _ReadTiltCalibrationData@12 @ 0x13ED9B (_ReadTiltCalibrationData@12.c)
 */

void __stdcall CheckPointerDeviceConfiguration()
{
  CInpPushLock *Lock; // esi
  struct DEVICEINFO *i; // edi

  CheckPTPPointerDeviceConfiguration();
  Lock = CBaseInput::TmpGetLock(_gpHidInput);
  CInpPushLock::LockShared(Lock);
  for ( i = CBaseInput::TmpGetDeviceList(_gpHidInput); i; i = (struct DEVICEINFO *)*((_DWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 24) == 3 && (*((_DWORD *)i + 26) & 0x1000) != 0 && !IsPrecisionTouchPadEnabled() )
    {
      RIMRevokeConfigurationChange(i, 87);
    }
    else if ( *((char *)i + 120) < 0 )
    {
      if ( *(_DWORD *)(*((_DWORD *)i + 71) + 316) )
        ReadTiltCalibrationData(*((_DWORD *)i + 32), *((_DWORD *)i + 33));
      else
        PTPTelemetry::OnUserLogin();
    }
  }
  CInpPushLock::UnLockShared(Lock);
}
