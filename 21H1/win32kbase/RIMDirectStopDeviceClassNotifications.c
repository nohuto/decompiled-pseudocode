/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x1C009ED70
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0057070 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00A16E0 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00A1A1C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStopDeviceClassNotifications(__int64 a1)
{
  int v2; // edx
  int v3; // ebx
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  unsigned int i; // esi
  int v7; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 111, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 0LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v4[81] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
    for ( i = 0; i <= 2; ++i )
    {
      v7 = RIMUnRegisterForInputDeviceTypeClassNotifications(v4, i);
      v3 = v7;
    }
    *((_QWORD *)v4 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v2, 1, 112, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v3);
  }
  return (unsigned int)v3;
}
