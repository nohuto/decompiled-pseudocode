/*
 * XREFs of EtwTraceEdgyDetectionStart @ 0x1C0125B50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01272A0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceEdgyDetectionStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &EdgyDetectionStart, &W32kControlGuid);
  return result;
}
