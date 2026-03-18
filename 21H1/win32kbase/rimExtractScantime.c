/*
 * XREFs of rimExtractScantime @ 0x1C0181E28
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C0183B80 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     rimHidP_GetUsageValue @ 0x1C016BF8C (rimHidP_GetUsageValue.c)
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x1C017F044 (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C017F3BC (RIMDivideToCeilingOrNearestInt.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimExtractScantime(
        __int64 a1,
        _DWORD *a2,
        struct _HIDP_PREPARSED_DATA *a3,
        char *a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  unsigned __int64 *v8; // r14
  int UsageValue; // eax
  __int64 v12; // rcx
  unsigned int *v13; // r15
  _UNKNOWN **v14; // rdx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  unsigned int v20; // eax
  unsigned int v21; // r10d
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // esi
  int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // edx
  unsigned int v29; // edi
  unsigned int v30; // r8d
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned int v33; // eax

  v7 = a2 + 196;
  v8 = a6;
  LODWORD(a6) = 0;
  ++a2[202];
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, (unsigned int *)&a6, a3, a4, a5);
  v13 = a7;
  v14 = &WPP_RECORDER_INITIALIZED;
  if ( UsageValue < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v14, 1, 68, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    }
    goto LABEL_40;
  }
  v15 = v7[6];
  if ( v15 == 1 )
  {
    if ( *v7 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      if ( v7[6] != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    }
    if ( v7[2] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    if ( v7[1] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    if ( v7[3] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    if ( v7[5] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    if ( (v7[12] & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    *v7 = *v13;
    *((_QWORD *)v7 + 5) = *v8;
    v16 = (unsigned int)a6;
    v7[3] = (unsigned int)a6;
    v7[4] = v16;
    goto LABEL_41;
  }
  v17 = v7[12];
  if ( (v17 & 1) != 0 )
    goto LABEL_31;
  v18 = v7[3];
  v19 = a2[210];
  if ( (unsigned int)a6 >= v18 % v19 )
  {
    v20 = a2[203];
  }
  else
  {
    v20 = ++v7[7];
    v19 = a2[210];
  }
  v21 = (_DWORD)a6 + v20 * v19;
  if ( v21 <= v18 )
  {
    v14 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v14, 1, 65, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      v17 = a2[208];
      v14 = &WPP_RECORDER_INITIALIZED;
    }
    v25 = v17 | 1;
    v7[12] = v25;
  }
  else
  {
    v7[3] = v21;
    v22 = v21 - v7[4];
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v22, v15 - 1, 1, (int *)&a7) )
    {
      v24 = (unsigned int)a7;
      if ( !(_DWORD)a7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
      v7[5] = v24;
    }
    v25 = a2[208];
    v14 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (v25 & 1) != 0 )
  {
LABEL_31:
    v26 = v7[5];
    if ( v26 && v7[6] >= 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          (_DWORD)v14,
          1,
          66,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v7[5]);
        v26 = a2[201];
      }
      v7[3] += v26;
      goto LABEL_41;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        (_DWORD)v14,
        1,
        67,
        (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
        80);
    }
LABEL_40:
    v7[3] += 80;
  }
LABEL_41:
  if ( v7[6] <= 1 )
  {
    v30 = *v13;
    v32 = *v8;
  }
  else
  {
    v27 = v7[3] - v7[4];
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v27, 0xAu, 0, (int *)&a7) )
    {
      v29 = (unsigned int)a7;
    }
    else
    {
      v29 = 8;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 4;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v28, 1, 69, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids, 8);
      }
    }
    v30 = v29 + *v7;
    v31 = v29 * *(_QWORD *)(a1 + 520);
    *v13 = v30;
    v32 = *((_QWORD *)v7 + 5) + v31 / 0x3E8;
    *v8 = v32;
  }
  v33 = v7[1];
  v7[1] = v30;
  *((_QWORD *)v7 + 4) = v32;
  v7[2] = v33;
  InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)v7);
}
