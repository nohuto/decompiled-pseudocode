/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C00AA480
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00AA310 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0016124 (RimDeviceTypeToRimInputType.c)
 *     rimOnPnpArrived @ 0x1C0016384 (rimOnPnpArrived.c)
 *     RIMHidTLCActive @ 0x1C0019CAC (RIMHidTLCActive.c)
 *     RIMHidValidExclusive @ 0x1C0019CEC (RIMHidValidExclusive.c)
 *     rimFakePnpRemoveComplete @ 0x1C001A450 (rimFakePnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ApiSetIsRemoteConnection @ 0x1C00AAADC (ApiSetIsRemoteConnection.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00AAB88 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00AABB0 (RawInputManagerObjectResolveHandle.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C00AF5D8 (RIMChildInputTypeIsVirtualized.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(__int64 a1)
{
  int v2; // edx
  int v3; // ebp
  struct RawInputManagerObject *v4; // rsi
  __int64 v5; // rbx
  __int64 v7; // r14
  unsigned int v8; // r8d
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 99, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( !bRimDispositionNormal(v4) || (unsigned int)ApiSetIsRemoteConnection() )
    {
      v3 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 100, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    }
    else
    {
      v5 = *((_QWORD *)v4 + 53);
      if ( v5 )
      {
        do
        {
          v7 = *(_QWORD *)(v5 + 40);
          v8 = RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48));
          if ( (v8 & 0x3C) != 0 )
          {
            v9 = *(_DWORD *)(v5 + 184);
            if ( (v9 & 0x2000) == 0
              && (v9 & 1) == 0
              && (v9 & 2) == 0
              && (v9 & 4) == 0
              && (v9 & 8) == 0
              && (v9 & 0x400) == 0
              && (v9 & 0x4000) == 0
              && (!*(_DWORD *)(*(_QWORD *)(v5 + 32) + 64LL) || !(unsigned __int8)RIMChildInputTypeIsVirtualized(v8)) )
            {
              v10 = *(_QWORD *)(v5 + 472);
              if ( v10 )
              {
                if ( (unsigned int)RIMHidTLCActive(*(_DWORD **)(v5 + 472)) )
                {
                  if ( !*(_QWORD *)(v5 + 224) )
                  {
                    *(_DWORD *)(v5 + 184) |= 1u;
                    rimOnPnpArrived((__int64)v4, v5, (void *)0xFFFFFFFFFFFFFFFFLL, v14);
                    if ( *(_QWORD *)(v5 + 224) )
                    {
                      if ( (*(_DWORD *)(v5 + 184) & 0x400) != 0 )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
                      *(_DWORD *)(v5 + 200) |= 0x20u;
                    }
                  }
                }
                else
                {
                  if ( *(_DWORD *)(v10 + 24)
                    || *(_DWORD *)(v10 + 32) > (unsigned int)RIMHidValidExclusive(v10, v11, v13, v14) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
                  }
                  if ( *(_QWORD *)(v5 + 224) )
                  {
                    v19 = *(_DWORD *)(v5 + 200);
                    if ( (v19 & 0x80u) == 0 && (v19 & 0x100) == 0 && (v19 & 0x200) == 0 )
                      rimFakePnpRemoveComplete((__int64)v4, v5, v13, v14);
                  }
                }
              }
            }
          }
          v5 = v7;
        }
        while ( v7 );
      }
    }
    *((_QWORD *)v4 + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v4 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v2, 1, 101, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v3);
  }
  return (unsigned int)v3;
}
