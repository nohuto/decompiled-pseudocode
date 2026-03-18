/*
 * XREFs of ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01CA5E0
 * Callers:
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C01C89B8 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01C91D8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 * Callees:
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C01CAAB0 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01CAD7C (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::Send2FingerTap(CPTPEngine *this, struct PTPInput *a2)
{
  __int128 v3; // [rsp+30h] [rbp-48h]
  __int128 v4; // [rsp+50h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp-18h]

  *((_QWORD *)this + 475) = *(_QWORD *)a2;
  CPTPEngine::SendMouseDownAtPoint(this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0, *((_DWORD *)this + 100));
  v3 = 0LL;
  LODWORD(v3) = 2;
  v4 = v3;
  v5 = 0LL;
  CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v4);
}
