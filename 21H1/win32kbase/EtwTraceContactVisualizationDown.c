/*
 * XREFs of EtwTraceContactVisualizationDown @ 0x1C012DB70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceContactVisualizationDown(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &ContactVisualizationDown, &W32kControlGuid);
  return result;
}
