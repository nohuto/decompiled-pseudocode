/*
 * XREFs of xxxRegisterForDeviceClassNotifications @ 0x1C0008840
 * Callers:
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 * Callees:
 *     RegisterCDROMNotify @ 0x1C012B478 (RegisterCDROMNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRegisterForDeviceClassNotifications()
{
  int v0; // edi
  unsigned int i; // ebx
  CBaseInput **v2; // rcx

  v0 = -1073741811;
  for ( i = 1; i <= 2; ++i )
  {
    if ( !gpWin32kDriverObject )
      continue;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    if ( i != 2 )
    {
      if ( i != 1 )
        goto LABEL_8;
      v0 = CBaseInput::InitializeSensor(gpKeyboardSensor);
      if ( v0 < 0 )
        goto LABEL_8;
      v2 = (CBaseInput **)gpKeyboardSensor;
      goto LABEL_7;
    }
    v0 = CBaseInput::InitializeSensor(gpHidInput);
    if ( v0 >= 0 )
    {
      v2 = (CBaseInput **)gpHidInput;
LABEL_7:
      v0 = CBaseInput::Read(*v2);
    }
LABEL_8:
    EnterCrit(0LL, 1LL);
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  if ( !gbFirstConnectionDone && gpWin32kDriverObject )
  {
    if ( !gProtocolType )
      RegisterCDROMNotify();
    gbFirstConnectionDone = 1;
  }
  EnterCrit(0LL, 1LL);
  return (unsigned int)v0;
}
