/*
 * XREFs of PowerInputEvent @ 0x1C00642E0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00608E8 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011F550 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C011F610 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011FE4C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0064360 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall PowerInputEvent(unsigned __int8 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  __int64 InputBuffer; // [rsp+48h] [rbp+10h] BYREF
  __int64 OutputBuffer; // [rsp+50h] [rbp+18h] BYREF

  OutputBuffer = 0LL;
  InputBuffer = a1;
  HIDWORD(InputBuffer) = CInputGlobals::GetLastInputTime(gpInputGlobals);
  if ( ZwPowerInformation(PowerInformationLevelMaximum|AdministratorPowerPolicy, &InputBuffer, 8u, &OutputBuffer, 8u) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3, v4);
  giPowerSessionActivityTimeOutMs = 1000 * OutputBuffer;
  result = (unsigned int)(1000 * HIDWORD(OutputBuffer));
  giPowerOffTimeOutMs = 1000 * HIDWORD(OutputBuffer);
  return result;
}
