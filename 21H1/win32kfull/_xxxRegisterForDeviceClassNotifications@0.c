/*
 * XREFs of _xxxRegisterForDeviceClassNotifications@0 @ 0xED552
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     _RegisterCDROMNotify@0 @ 0xEC8A8 (_RegisterCDROMNotify@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxRegisterForDeviceClassNotifications()
{
  unsigned int v0; // esi
  int v1; // edi
  CBaseInput **v2; // ecx

  v0 = 1;
  v1 = -1073741811;
  do
  {
    if ( !_gpWin32kDriverObject )
      goto LABEL_9;
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    if ( v0 != 2 )
    {
      if ( v0 != 1 )
        goto LABEL_8;
      v1 = CBaseInput::InitializeSensor(_gpKeyboardSensor);
      if ( v1 < 0 )
        goto LABEL_8;
      v2 = (CBaseInput **)_gpKeyboardSensor;
      goto LABEL_7;
    }
    v1 = CBaseInput::InitializeSensor(_gpHidInput);
    if ( v1 >= 0 )
    {
      v2 = (CBaseInput **)_gpHidInput;
LABEL_7:
      v1 = CBaseInput::Read(*v2);
    }
LABEL_8:
    EnterCrit(0, 1);
LABEL_9:
    ++v0;
  }
  while ( v0 <= 2 );
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  UserSessionSwitchLeaveCrit();
  if ( !_gbFirstConnectionDone && _gpWin32kDriverObject )
  {
    if ( !_gProtocolType )
      RegisterCDROMNotify();
    _gbFirstConnectionDone = 1;
  }
  EnterCrit(0, 1);
  return v1;
}
