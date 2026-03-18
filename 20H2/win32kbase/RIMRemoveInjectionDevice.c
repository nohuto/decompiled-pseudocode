/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1C0158AB0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00274C8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     RIMFreeDev @ 0x1C0150B40 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, char *a2)
{
  char *v2; // rdi
  int v4; // edx
  int v5; // ebx
  HANDLE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  PVOID v19; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 48, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v19 = 0LL;
  Object = 0LL;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v19);
  if ( v5 >= 0 )
  {
    v6 = (HANDLE *)v19;
    RIMLockExclusive((__int64)v19 + 104);
    v5 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 50, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v9 = Object;
      if ( (v6[80] || *((_DWORD *)v6 + 216)) && v6[4] != (HANDLE)PsGetCurrentProcess(v8, v7) )
      {
        v9[68] |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        v9[72] |= 4u;
        qword_1C024E368 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v14 = v9[68];
        if ( (v14 & 0x200000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
          v14 = v9[68];
        }
        v9[68] = v14 | 0x200000;
        ZwSetEvent(v6[48], 0LL);
        v5 = 0;
      }
      else if ( bRimDispositionNormal((struct RawInputManagerObject *)v6) )
      {
        if ( v9 )
          v17 = (__int64)(v9 + 22);
        else
          v17 = 0LL;
        v5 = RIMFreeDev(v16, v17);
      }
      else
      {
        v5 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, 49, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
        }
      }
      ObfDereferenceObject(v9);
    }
    v6[14] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v4, 1, 51, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v5);
  }
  return (unsigned int)v5;
}
