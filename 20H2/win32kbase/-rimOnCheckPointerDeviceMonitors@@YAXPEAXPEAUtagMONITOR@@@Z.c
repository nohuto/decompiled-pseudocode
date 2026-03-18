/*
 * XREFs of ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0153AE0
 * Callers:
 *     DestroyMonitor @ 0x1C00B4360 (DestroyMonitor.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimOnCheckPointerDeviceMonitors(char *a1, struct tagMONITOR *a2)
{
  struct tagMONITOR *v2; // r14
  int v4; // eax
  int v5; // edx
  char v6; // r15
  _QWORD *v7; // rdi
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  __int64 v14; // rax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 73, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v7 + 81) )
    {
      v6 = -69;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 74, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((__int64)(v7 + 71));
      for ( i = v7[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 1344) )
        {
          v14 = v2 ? *(_QWORD *)v2 : 0LL;
          if ( *(_QWORD *)(i + 1352) == v14 )
          {
            if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 480) + 24LL) == 6 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
            *(_QWORD *)(i + 1352) = 0LL;
            *(_DWORD *)(i + 1360) = 0;
          }
        }
      }
      v7[72] = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 71, 0LL);
      KeLeaveCriticalRegion();
    }
    v7[14] = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v5, 1, 75, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v6);
  }
}
