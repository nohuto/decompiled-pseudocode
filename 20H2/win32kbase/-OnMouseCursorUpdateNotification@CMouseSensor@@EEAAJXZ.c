/*
 * XREFs of ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C00256F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0025730 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0054F94 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseSensor::OnMouseCursorUpdateNotification(CMouseSensor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx

  if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  v6 = *((_QWORD *)this + 218);
  if ( v6 )
    CMouseProcessor::MoveMouseWindowManagement(v6, 4LL);
  return 0LL;
}
