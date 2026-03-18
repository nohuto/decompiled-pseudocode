/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C01588E0
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C01A5DB0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C01ACC38 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00274C8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     RIMQueryDev @ 0x1C0075350 (RIMQueryDev.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(char *a1, char *a2)
{
  char *v2; // rdi
  int v4; // edx
  int v5; // ebx
  struct RawInputManagerObject *v6; // rsi
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // rdi
  char *v11; // rdx
  PVOID v13; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v2 = a2;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 102, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v13);
  if ( v5 >= 0 )
  {
    v6 = (struct RawInputManagerObject *)v13;
    RIMLockExclusive((__int64)v13 + 104);
    RIMLockExclusive((__int64)v6 + 568);
    if ( bRimDispositionNormal(v6) )
    {
      v5 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
      if ( v5 >= 0 )
      {
        v10 = Object;
        if ( Object )
          v11 = (char *)Object + 88;
        else
          v11 = 0LL;
        if ( v11[48] == 2 )
          v5 = -1073741811;
        else
          v5 = RIMQueryDev((__int64)v6, (__int64)v11, v8, v9);
        ObfDereferenceObject(v10);
      }
    }
    else
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 103, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    *((_QWORD *)v6 + 72) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 568, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v6 + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v4, 1, 104, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v5);
  }
  return (unsigned int)v5;
}
