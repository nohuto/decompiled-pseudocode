/*
 * XREFs of ?InitializeInputSensors@@YAJXZ @ 0x1C01AEA38
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x1C01AEB80 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0005E10 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C004C9B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sd @ 0x1C01AAF00 (WPP_RECORDER_SF_sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitializeInputSensors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CMouseSensor **v4; // rsi
  __int64 v5; // rdi
  CBaseInput **v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int16 v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+30h] [rbp-28h]

  v4 = &qword_1C0241018;
  v5 = 0LL;
  v6 = &qword_1C0241018;
  while ( 1 )
  {
    v7 = *((_DWORD *)v6 - 2);
    if ( v7 != 2 )
    {
      if ( v7 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
      goto LABEL_7;
    }
    v8 = CBaseInput::InitializeSensor(*v6);
    a1 = (unsigned int)v8;
    if ( v8 < 0 )
      break;
    v9 = CBaseInput::RegisterDispatcherObject(*v6, gpIOCPDispatcher);
    a1 = (unsigned int)v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v10 = 21;
      goto LABEL_13;
    }
LABEL_7:
    v5 = (unsigned int)(v5 + 1);
    v6 += 6;
    if ( (unsigned int)v5 >= 3 )
      goto LABEL_14;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_14;
  v10 = 20;
LABEL_13:
  v17 = a1;
  WPP_RECORDER_SF_sd(
    a1,
    2u,
    3u,
    v10,
    (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids,
    (const char *)s_rgSensorMap[6 * v5 + 5],
    v17);
LABEL_14:
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)*v4 + 16LL))(*v4);
    v14 = v12;
    if ( v12 < 0 )
      break;
    v11 = (unsigned int)(v11 + 1);
    v4 += 6;
    if ( (unsigned int)v11 >= 3 )
      return v14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v12;
    WPP_RECORDER_SF_sd(
      v13,
      2u,
      3u,
      0x16u,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids,
      (const char *)s_rgSensorMap[6 * v11 + 5],
      v16);
  }
  return v14;
}
