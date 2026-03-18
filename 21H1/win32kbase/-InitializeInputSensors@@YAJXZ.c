/*
 * XREFs of ?InitializeInputSensors@@YAJXZ @ 0x1C01B4798
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x1C01B48E0 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0036E10 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C003FE40 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sd @ 0x1C01B0C60 (WPP_RECORDER_SF_sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitializeInputSensors(__int64 a1)
{
  CMouseSensor **v1; // rsi
  __int64 v2; // rdi
  CBaseInput **v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned __int16 v7; // r9
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+30h] [rbp-28h]

  v1 = &qword_1C0247018;
  v2 = 0LL;
  v3 = &qword_1C0247018;
  while ( 1 )
  {
    v4 = *((_DWORD *)v3 - 2);
    if ( v4 != 2 )
    {
      if ( v4 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      goto LABEL_7;
    }
    v5 = CBaseInput::InitializeSensor(*v3);
    a1 = (unsigned int)v5;
    if ( v5 < 0 )
      break;
    v6 = CBaseInput::RegisterDispatcherObject(*v3, gpIOCPDispatcher);
    a1 = (unsigned int)v6;
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v7 = 21;
      goto LABEL_13;
    }
LABEL_7:
    v2 = (unsigned int)(v2 + 1);
    v3 += 6;
    if ( (unsigned int)v2 >= 3 )
      goto LABEL_14;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_14;
  v7 = 20;
LABEL_13:
  v14 = a1;
  WPP_RECORDER_SF_sd(
    a1,
    2u,
    3u,
    v7,
    (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids,
    (const char *)s_rgSensorMap[6 * v2 + 5],
    v14);
LABEL_14:
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)*v1 + 16LL))(*v1);
    v11 = v9;
    if ( v9 < 0 )
      break;
    v8 = (unsigned int)(v8 + 1);
    v1 += 6;
    if ( (unsigned int)v8 >= 3 )
      return v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v9;
    WPP_RECORDER_SF_sd(
      v10,
      2u,
      3u,
      0x16u,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids,
      (const char *)s_rgSensorMap[6 * v8 + 5],
      v13);
  }
  return v11;
}
