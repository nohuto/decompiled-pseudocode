/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1C01563A0
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0153F00 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x1C000CC40 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000E3A8 (RIMFreeQDCActivePathsData.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     RIMGetDeviceObjectPointer @ 0x1C006EE58 (RIMGetDeviceObjectPointer.c)
 *     RIMGetDeviceLocationInfo @ 0x1C015E00C (RIMGetDeviceLocationInfo.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C016497C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164BD4 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165588 (rimFindMonitorForDigitizerWithQDCData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, int a3, __int64 *a4)
{
  char *v4; // r14
  int v6; // edx
  int v7; // esi
  _BYTE *v8; // rbx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // r14
  PVOID v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edx
  unsigned int *v19; // rbx
  _QWORD *v20; // r8
  __int64 v21; // rdx
  void *v22; // r14
  char *v24; // [rsp+30h] [rbp-68h]
  PVOID v25; // [rsp+38h] [rbp-60h] BYREF
  char *v26; // [rsp+40h] [rbp-58h] BYREF
  PVOID Object; // [rsp+48h] [rbp-50h] BYREF
  _BYTE *v28; // [rsp+50h] [rbp-48h]
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID v30; // [rsp+60h] [rbp-38h] BYREF
  PVOID v31; // [rsp+68h] [rbp-30h]
  __int128 v32; // [rsp+70h] [rbp-28h] BYREF

  v4 = a2;
  v25 = 0LL;
  v26 = 0LL;
  Handle = 0LL;
  v30 = 0LL;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 139, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v25);
  if ( v7 >= 0 )
  {
    v8 = v25;
    v28 = v25;
    RIMLockExclusive((__int64)v25 + 104);
    if ( v8[81] )
    {
      v7 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 142, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
      goto LABEL_36;
    }
    v7 = RawInputManagerDeviceObjectResolveHandle(v4, 3u, 1, (PVOID *)&v26);
    if ( v7 < 0 )
    {
LABEL_36:
      *((_QWORD *)v8 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v8);
      goto LABEL_37;
    }
    v24 = v26;
    if ( v26 )
      v12 = v26 + 88;
    else
      v12 = 0LL;
    if ( v12[48] != 2
      || (*((_DWORD *)v12 + 50) & 0x80u) != 0
      || (*((_DWORD *)v12 + 46) & 0x2000) != 0
      || *((_DWORD *)v12 + 336) )
    {
      v7 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 140, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v7 = RIMGetDeviceObjectPointer(
             (struct _UNICODE_STRING *)v12 + 13,
             v10,
             v11,
             &Handle,
             &v30,
             (PDEVICE_OBJECT *)&Object);
      if ( v7 >= 0 )
      {
        v13 = Object;
        v31 = Object;
        ObfReferenceObject(Object);
        v7 = RIMGetDeviceLocationInfo(v13, v12 + 2112);
        if ( v7 < 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 141, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
          }
          v7 = 0;
        }
        *((_DWORD *)v12 + 336) = 1;
        RIMReadDigitizerToMonitorMappings(v12, v12 + 1344);
        v32 = 0LL;
        v19 = RIMGetQDCActivePathsData((unsigned int *)&v32);
        rimFindMonitorForDigitizerWithQDCData(v12, v19, 0LL);
        RIMSetDeviceOutputConfig((struct RIMDEV *)v12, 0LL);
        RIMFreeQDCActivePathsData((__int64)v19);
        v20 = a4;
        if ( a4 )
        {
          if ( *((_QWORD *)v12 + 60) || *((_DWORD *)v12 + 336) )
            v21 = *((_QWORD *)v12 + 169);
          else
            v21 = -1LL;
          if ( a3 )
          {
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              v20 = (_QWORD *)MmUserProbeAddress;
            *v20 = v21;
            v8 = v28;
            v22 = v24;
            goto LABEL_29;
          }
          *a4 = v21;
        }
        v22 = v24;
        v8 = v28;
LABEL_29:
        ZwClose(Handle);
        ObfDereferenceObject(v30);
        ObfDereferenceObject(v31);
LABEL_33:
        ObfDereferenceObject(v22);
        goto LABEL_36;
      }
    }
    v22 = v24;
    goto LABEL_33;
  }
LABEL_37:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v6, 1, 143, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v7);
  }
  return (unsigned int)v7;
}
