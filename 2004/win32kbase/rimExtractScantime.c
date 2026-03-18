/*
 * XREFs of rimExtractScantime @ 0x1C017C128
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C017DE80 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     rimHidP_GetUsageValue @ 0x1C0165C3C (rimHidP_GetUsageValue.c)
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x1C0179344 (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C01796BC (RIMDivideToCeilingOrNearestInt.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // r9
  unsigned int *v14; // r15
  _UNKNOWN **v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  unsigned int v21; // eax
  unsigned int v22; // r10d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // esi
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // edx
  unsigned int v33; // edi
  unsigned int v34; // r8d
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned int v37; // eax

  v7 = a2 + 196;
  v8 = a6;
  LODWORD(a6) = 0;
  ++a2[202];
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, (unsigned int *)&a6, a3, a4, a5);
  v14 = a7;
  v15 = &WPP_RECORDER_INITIALIZED;
  if ( UsageValue < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v15, 1, 68, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    }
    goto LABEL_40;
  }
  v16 = v7[6];
  if ( (_DWORD)v16 == 1 )
  {
    if ( *v7 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, &WPP_RECORDER_INITIALIZED, v16, v13);
      if ( v7[6] != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16, v13);
    }
    if ( v7[2] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16, v13);
    if ( v7[1] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16, v13);
    if ( v7[3] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16, v13);
    if ( v7[5] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16, v13);
    if ( (v7[12] & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16, v13);
    *v7 = *v14;
    *((_QWORD *)v7 + 5) = *v8;
    v17 = (unsigned int)a6;
    v7[3] = (unsigned int)a6;
    v7[4] = v17;
    goto LABEL_41;
  }
  v18 = v7[12];
  if ( (v18 & 1) != 0 )
    goto LABEL_31;
  v19 = v7[3];
  v20 = a2[210];
  if ( (unsigned int)a6 >= v19 % v20 )
  {
    v21 = a2[203];
  }
  else
  {
    v21 = ++v7[7];
    v20 = a2[210];
  }
  v22 = (_DWORD)a6 + v21 * v20;
  if ( v22 <= v19 )
  {
    v15 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v15, 1, 65, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      v18 = a2[208];
      v15 = &WPP_RECORDER_INITIALIZED;
    }
    v29 = v18 | 1;
    v7[12] = v29;
  }
  else
  {
    v7[3] = v22;
    v23 = v22 - v7[4];
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v23, (unsigned int)(v16 - 1), 1LL, (int *)&a7) )
    {
      v28 = (unsigned int)a7;
      if ( !(_DWORD)a7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26, v27);
      v7[5] = v28;
    }
    v29 = a2[208];
    v15 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (v29 & 1) != 0 )
  {
LABEL_31:
    v30 = v7[5];
    if ( v30 && v7[6] >= 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          (_DWORD)v15,
          1,
          66,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v7[5]);
        v30 = a2[201];
      }
      v7[3] += v30;
      goto LABEL_41;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        (_DWORD)v15,
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
    v34 = *v14;
    v36 = *v8;
  }
  else
  {
    v31 = v7[3] - v7[4];
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v31, 10LL, 0LL, (int *)&a7) )
    {
      v33 = (unsigned int)a7;
    }
    else
    {
      v33 = 8;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = 4;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v32, 1, 69, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids, 8);
      }
    }
    v34 = v33 + *v7;
    v35 = v33 * *(_QWORD *)(a1 + 520);
    *v14 = v34;
    v36 = *((_QWORD *)v7 + 5) + v35 / 0x3E8;
    *v8 = v36;
  }
  v37 = v7[1];
  v7[1] = v34;
  *((_QWORD *)v7 + 4) = v36;
  v7[2] = v37;
  InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)v7);
}
