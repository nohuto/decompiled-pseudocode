/*
 * XREFs of RIMRemoveInputOfType @ 0x1C0075600
 * Callers:
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00755E0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 * Callees:
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00274C8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C002776C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     RIMRemoveDevOfInputType @ 0x1C007574C (RIMRemoveDevOfInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C0075830 (RimInputTypeToDeviceType.c)
 */

__int64 __fastcall RIMRemoveInputOfType(char *a1, unsigned int a2)
{
  unsigned int v2; // edi
  int v4; // edx
  int v5; // ebx
  _DWORD *v6; // rsi
  int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v11; // r9d
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 21, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v6) )
    {
      if ( v2 && ((v2 - 1) & v2) == 0 || (v2 & 0x1C) != 0 )
      {
        if ( (v2 & v6[21]) != 0 )
        {
          RIMRemoveDevOfInputType(v8, v2);
          v9 = RimInputTypeToDeviceType(v2);
          v5 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v6, v9);
          v6[21] &= ~v2;
LABEL_10:
          *((_QWORD *)v6 + 14) = 0LL;
          ExReleasePushLockExclusiveEx(v6 + 26, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v6);
          goto LABEL_11;
        }
        v5 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_10;
        v11 = 22;
      }
      else
      {
        v5 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_10;
        v11 = 23;
      }
    }
    else
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v11 = 24;
    }
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, v11, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    goto LABEL_10;
  }
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v4, 1, 25, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v5);
  }
  return (unsigned int)v5;
}
