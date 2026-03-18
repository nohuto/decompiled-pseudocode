/*
 * XREFs of RIMGetDownContactCount @ 0x1C0159870
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00AAB88 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00AABB0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetDownContactCount(char *a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  int v4; // edx
  int v5; // edi
  _DWORD *v6; // rsi
  int v7; // edx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 108, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  *v2 = 0;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v6) )
    {
      RIMLockExclusive((__int64)(v6 + 142));
      *v2 = v6[118];
      *((_QWORD *)v6 + 72) = 0LL;
      ExReleasePushLockExclusiveEx(v6 + 142, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 109, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    *((_QWORD *)v6 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 26, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v4, 1, 110, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v5);
  }
  return (unsigned int)v5;
}
