/*
 * XREFs of EtwTracPowerOnMonitoreBegin @ 0x1C0063D68
 * Callers:
 *     PowerOnMonitor @ 0x1C00636E0 (PowerOnMonitor.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C011F610 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C012A0E0 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracPowerOnMonitoreBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &PowerOnMonitorBegin, a3, (unsigned int)a1);
  return result;
}
