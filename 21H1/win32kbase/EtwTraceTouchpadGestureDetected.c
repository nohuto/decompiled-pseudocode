/*
 * XREFs of EtwTraceTouchpadGestureDetected @ 0x1C012F1F0
 * Callers:
 *     ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1C01AA148 (-SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchpadGestureDetected(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchpadGestureDetected, &W32kControlGuid);
  return result;
}
