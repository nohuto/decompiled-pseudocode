/*
 * XREFs of RIMAddInputOfType @ 0x1C0157E60
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00AAB88 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00AABB0 (RawInputManagerObjectResolveHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00AEFCC (RIMDiscoverDevicesOfInputType.c)
 */

__int64 __fastcall RIMAddInputOfType(char *a1, int a2)
{
  int v2; // edi
  int v4; // edx
  int v5; // ebx
  _DWORD *v6; // rsi
  int v7; // edx
  struct _DRIVER_OBJECT **v8; // rcx
  int v9; // r9d
  int v10; // eax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 26, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v6) )
    {
      if ( v2 && ((v2 - 1) & v2) == 0 || (v9 = 28, (v2 & 0x1C) != 0) )
      {
        v10 = v6[21];
        if ( (v10 & v2) == 0 )
        {
          v6[21] = v2 | v10;
          RIMDiscoverDevicesOfInputType(v8);
LABEL_17:
          *((_QWORD *)v6 + 14) = 0LL;
          ExReleasePushLockExclusiveEx(v6 + 26, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v6);
          goto LABEL_18;
        }
        v5 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v9 = 27;
      }
      else
      {
        v5 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
      }
    }
    else
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_17;
      v9 = 29;
    }
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, v9, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    goto LABEL_17;
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v4, 1, 30, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v5);
  }
  return (unsigned int)v5;
}
