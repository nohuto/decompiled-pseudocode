/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C0158D2C
 * Callers:
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00274C8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     RIMFreeDev @ 0x1C0150B40 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 45, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  Object = 0LL;
  v4 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 47, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  else
  {
    v7 = Object;
    if ( *((_BYTE *)Object + 136) >= 2u )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v5, v6);
    v8 = v7[53];
    RIMLockExclusive(v8 + 104);
    if ( v8 )
    {
      if ( (*(_QWORD *)(v8 + 640) || *(_DWORD *)(v8 + 864)) && *(_QWORD *)(v8 + 32) != PsGetCurrentProcess(v10, v9) )
      {
        *((_DWORD *)v7 + 68) |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        *((_DWORD *)v7 + 72) |= 4u;
        qword_1C024E368 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v15 = *((_DWORD *)v7 + 68);
        if ( (v15 & 0x200000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
          v15 = *((_DWORD *)v7 + 68);
        }
        *((_DWORD *)v7 + 68) = v15 | 0x200000;
        ZwSetEvent(*(HANDLE *)(v8 + 384), 0LL);
        v4 = 0;
      }
      else if ( bRimDispositionNormal((struct RawInputManagerObject *)v8) )
      {
        v4 = RIMFreeDev(v16, (__int64)(v7 + 11));
      }
      else
      {
        v4 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 46, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    *(_QWORD *)(v8 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v4;
}
