/*
 * XREFs of ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C01A0B60
 * Callers:
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01A0DE0 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A7410 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C01A8130 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C01AF240 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00AB3A0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct DEVICEINFO *__fastcall CBaseInput::FindDeviceInfo(CBaseInput *this, char *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  char *v5; // rbx
  struct DEVICEINFO *v6; // rsi
  int v7; // edx
  int v9; // edx
  PVOID v10; // rbx
  struct DEVICEINFO *v11; // rdi
  struct DEVICEINFO *i; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v4 = a3;
  v5 = a2;
  Object = 0LL;
  v6 = 0LL;
  if ( (struct _KTHREAD *)qword_1C0250418 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      3,
      15,
      (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids);
  }
  if ( v5 == (char *)-1LL )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        3,
        16,
        (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v7) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v7,
            3,
            17,
            (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids);
        }
      }
    }
    return 0LL;
  }
  else
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v5, 3u, v4 == 0, &Object) >= 0 )
    {
      v10 = Object;
      v11 = (struct DEVICEINFO *)((char *)Object + 88);
      if ( !Object )
        v11 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( i == v11 )
        {
          v6 = i;
          break;
        }
      }
      ObfDereferenceObject(v10);
      ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        3,
        18,
        (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids);
    }
    return v6;
  }
}
