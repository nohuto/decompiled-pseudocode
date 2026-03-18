/*
 * XREFs of EtwTraceTouchPadWMPointerProcessingStop @ 0x1C0128F80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadWMPointerProcessingStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchPadWMPointerProcessingStop, &W32kControlGuid);
  return result;
}
