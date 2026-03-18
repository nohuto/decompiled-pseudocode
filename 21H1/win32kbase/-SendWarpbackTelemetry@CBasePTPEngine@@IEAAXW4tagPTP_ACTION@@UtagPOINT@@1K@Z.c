/*
 * XREFs of ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C01CAE2C
 * Callers:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C01C70CC (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C01C76D4 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01CAD7C (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CBasePTPEngine::SendWarpbackTelemetry(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  _BYTE v10[24]; // [rsp+20h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  *(_OWORD *)v10 = 0LL;
  *(_DWORD *)v10 = a2;
  v11 = *(_OWORD *)v10;
  v12 = 0LL;
  CBasePTPEngine::SendTelemetryOutput(a1, 4, (__int64)&v11);
  *(_QWORD *)&v10[12] = a4;
  *(_DWORD *)&v10[20] = a5;
  *(_DWORD *)v10 = a2;
  *(_QWORD *)&v10[4] = a3;
  v12 = *(_QWORD *)&v10[16];
  v11 = *(_OWORD *)v10;
  return CBasePTPEngine::SendTelemetryOutput(a1, 7, (__int64)&v11);
}
