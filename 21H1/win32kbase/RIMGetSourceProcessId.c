/*
 * XREFs of RIMGetSourceProcessId @ 0x1C0160070
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x1C015CE20 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00A16E0 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetSourceProcessId(char *a1, char *a2, ULONG64 a3)
{
  char *v3; // rsi
  int v5; // edx
  int v6; // edi
  _BYTE *v7; // r15
  int v8; // edx
  PVOID v9; // rsi
  char *v10; // r14
  __int64 v11; // rdx
  _DWORD *v12; // rax
  PVOID v14; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  int v17; // [rsp+88h] [rbp+20h]

  v3 = a2;
  v14 = 0LL;
  Object = 0LL;
  v17 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 136, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v14);
  if ( v6 >= 0 )
  {
    v7 = v14;
    RIMLockExclusive((__int64)v14 + 104);
    if ( v7[81] )
    {
      v6 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 137, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(v3, 3u, 1, &Object);
      if ( v6 >= 0 )
      {
        v9 = Object;
        if ( Object )
          v10 = (char *)Object + 88;
        else
          v10 = 0LL;
        if ( *((_QWORD *)v10 + 48) )
        {
          RIMLockExclusive((__int64)&gObListLock);
          v11 = *(_QWORD *)(*((_QWORD *)v10 + 48) + 88LL);
          if ( v11 )
            v17 = *(_DWORD *)(v11 + 56);
          qword_1C02562F8 = 0LL;
          ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
          KeLeaveCriticalRegion();
        }
        v12 = (_DWORD *)a3;
        if ( a3 >= MmUserProbeAddress )
          v12 = (_DWORD *)MmUserProbeAddress;
        *v12 = v17;
        ObfDereferenceObject(v9);
      }
    }
    *((_QWORD *)v7 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v5, 1, 138, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v6);
  }
  return (unsigned int)v6;
}
