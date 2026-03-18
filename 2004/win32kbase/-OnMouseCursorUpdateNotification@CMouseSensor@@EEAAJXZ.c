/*
 * XREFs of ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C00B0270
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C00749C4 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C00B02B0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseSensor::OnMouseCursorUpdateNotification(CMouseSensor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx

  if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  v6 = (_DWORD *)*((_QWORD *)this + 218);
  if ( v6 )
    CMouseProcessor::MoveMouseWindowManagement(v6, 4LL, v4, v5);
  return 0LL;
}
