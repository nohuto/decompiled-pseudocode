/*
 * XREFs of EtwTraceTouchPadCurtainState @ 0x1C0126A10
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A1560 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     McTemplateK0t_EtwWriteTransfer @ 0x1C012A010 (McTemplateK0t_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadCurtainState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0t_EtwWriteTransfer(a1, a2, a3, (unsigned int)a1);
  return result;
}
