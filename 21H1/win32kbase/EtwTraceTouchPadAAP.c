/*
 * XREFs of EtwTraceTouchPadAAP @ 0x1C012EC80
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A9640 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     McTemplateK0qqqtq_EtwWriteTransfer @ 0x1C0131B84 (McTemplateK0qqqtq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadAAP(int a1, int a2, int a3, char a4, char a5)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0qqqtq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5);
  return result;
}
