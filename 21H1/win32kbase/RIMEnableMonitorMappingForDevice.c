/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1C015EC50
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C015C7B0 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00A16E0 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A2F44 (RIMGetDeviceObjectPointer.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00A4A24 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C00A4CD8 (RIMGetQDCActivePathsData.c)
 *     RIMGetDeviceLocationInfo @ 0x1C01668BC (RIMGetDeviceLocationInfo.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C016D22C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C016D484 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C016DE38 (rimFindMonitorForDigitizerWithQDCData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // r8
  __int64 v22; // rdx
  void *v23; // r14
  char *v25; // [rsp+30h] [rbp-68h]
  PVOID v26; // [rsp+38h] [rbp-60h] BYREF
  char *v27; // [rsp+40h] [rbp-58h] BYREF
  PVOID Object; // [rsp+48h] [rbp-50h] BYREF
  _BYTE *v29; // [rsp+50h] [rbp-48h]
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID v31; // [rsp+60h] [rbp-38h] BYREF
  PVOID v32; // [rsp+68h] [rbp-30h]
  __int128 v33; // [rsp+70h] [rbp-28h] BYREF

  v4 = a2;
  v26 = 0LL;
  v27 = 0LL;
  Handle = 0LL;
  v31 = 0LL;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 139, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v26);
  if ( v7 >= 0 )
  {
    v8 = v26;
    v29 = v26;
    RIMLockExclusive((__int64)v26 + 104);
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
    v7 = RawInputManagerDeviceObjectResolveHandle(v4, 3u, 1, (PVOID *)&v27);
    if ( v7 < 0 )
    {
LABEL_36:
      *((_QWORD *)v8 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v8);
      goto LABEL_37;
    }
    v25 = v27;
    if ( v27 )
      v12 = v27 + 88;
    else
      v12 = 0LL;
    if ( v12[48] != 2
      || (*((_DWORD *)v12 + 50) & 0x80u) != 0
      || (*((_DWORD *)v12 + 46) & 0x2000) != 0
      || *((_DWORD *)v12 + 334) )
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
             &v31,
             (PDEVICE_OBJECT *)&Object);
      if ( v7 >= 0 )
      {
        v13 = Object;
        v32 = Object;
        ObfReferenceObject(Object);
        v7 = RIMGetDeviceLocationInfo(v13, v12 + 2104);
        if ( v7 < 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, 141, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
          }
          v7 = 0;
        }
        *((_DWORD *)v12 + 334) = 1;
        RIMReadDigitizerToMonitorMappings(v12, v12 + 1336);
        v33 = 0LL;
        v18 = RIMGetQDCActivePathsData((unsigned int *)&v33, v16, v17);
        rimFindMonitorForDigitizerWithQDCData(v12, v18, 0LL);
        RIMSetDeviceOutputConfig((struct RIMDEV *)v12, 0LL);
        RIMFreeQDCActivePathsData((__int64)v18, v19, v20);
        v21 = a4;
        if ( a4 )
        {
          if ( *((_QWORD *)v12 + 60) || *((_DWORD *)v12 + 334) )
            v22 = *((_QWORD *)v12 + 168);
          else
            v22 = -1LL;
          if ( a3 )
          {
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              v21 = (_QWORD *)MmUserProbeAddress;
            *v21 = v22;
            v8 = v29;
            v23 = v25;
            goto LABEL_29;
          }
          *a4 = v22;
        }
        v23 = v25;
        v8 = v29;
LABEL_29:
        ZwClose(Handle);
        ObfDereferenceObject(v31);
        ObfDereferenceObject(v32);
LABEL_33:
        ObfDereferenceObject(v23);
        goto LABEL_36;
      }
    }
    v23 = v25;
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
