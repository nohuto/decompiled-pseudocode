/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01615DC
 * Callers:
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00A16B8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeDev @ 0x1C0159410 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  __int64 v2; // rcx
  int v3; // esi
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 45, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  Object = 0LL;
  v3 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 47, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  else
  {
    v4 = Object;
    if ( *((_BYTE *)Object + 136) >= 2u )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    v5 = v4[53];
    RIMLockExclusive(v5 + 104);
    if ( v5 )
    {
      if ( (*(_QWORD *)(v5 + 640) || *(_DWORD *)(v5 + 864)) && *(_QWORD *)(v5 + 32) != PsGetCurrentProcess(v7, v6) )
      {
        *((_DWORD *)v4 + 68) |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        *((_DWORD *)v4 + 72) |= 4u;
        qword_1C02562F8 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v9 = *((_DWORD *)v4 + 68);
        if ( (v9 & 0x200000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
          v9 = *((_DWORD *)v4 + 68);
        }
        *((_DWORD *)v4 + 68) = v9 | 0x200000;
        ZwSetEvent(*(HANDLE *)(v5 + 384), 0LL);
        v3 = 0;
      }
      else if ( bRimDispositionNormal((struct RawInputManagerObject *)v5) )
      {
        v3 = RIMFreeDev(v10, (__int64)(v4 + 11));
      }
      else
      {
        v3 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 46, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    *(_QWORD *)(v5 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
