/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C00A13D0
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00A1260 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     RIMHidValidExclusive @ 0x1C004F8B0 (RIMHidValidExclusive.c)
 *     rimFakePnpRemoveComplete @ 0x1C00569D0 (rimFakePnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C009E37C (RIMChildInputTypeIsVirtualized.c)
 *     ApiSetIsRemoteConnection @ 0x1C00A160C (ApiSetIsRemoteConnection.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00A16B8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00A16E0 (RawInputManagerObjectResolveHandle.c)
 *     RIMHidTLCActive @ 0x1C00A307C (RIMHidTLCActive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(__int64 a1)
{
  int v2; // edx
  int v3; // ebp
  struct RawInputManagerObject *v4; // rsi
  __int64 v5; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned int v9; // r8d
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
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
          v9 = RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48));
          if ( (v9 & 0x3C) != 0 )
          {
            v10 = *(_DWORD *)(v5 + 184);
            if ( (v10 & 0x2000) == 0
              && (v10 & 1) == 0
              && (v10 & 2) == 0
              && (v10 & 4) == 0
              && (v10 & 8) == 0
              && (v10 & 0x400) == 0
              && (v10 & 0x4000) == 0
              && (!*(_DWORD *)(*(_QWORD *)(v5 + 32) + 64LL) || !RIMChildInputTypeIsVirtualized(v9, v8)) )
            {
              v11 = *(_QWORD *)(v5 + 472);
              if ( v11 )
              {
                if ( (unsigned int)RIMHidTLCActive(*(_QWORD *)(v5 + 472)) )
                {
                  if ( !*(_QWORD *)(v5 + 224) )
                  {
                    *(_DWORD *)(v5 + 184) |= 1u;
                    rimOnPnpArrived((__int64)v4, v5, (void *)0xFFFFFFFFFFFFFFFFLL);
                    if ( *(_QWORD *)(v5 + 224) )
                    {
                      if ( (*(_DWORD *)(v5 + 184) & 0x400) != 0 )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
                      *(_DWORD *)(v5 + 200) |= 0x20u;
                    }
                  }
                }
                else
                {
                  if ( *(_DWORD *)(v11 + 24) || *(_DWORD *)(v11 + 32) > (unsigned int)RIMHidValidExclusive(v11) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
                  if ( *(_QWORD *)(v5 + 224) )
                  {
                    v14 = *(_DWORD *)(v5 + 200);
                    if ( (v14 & 0x80u) == 0 && (v14 & 0x100) == 0 && (v14 & 0x200) == 0 )
                      rimFakePnpRemoveComplete((__int64)v4, v5);
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
