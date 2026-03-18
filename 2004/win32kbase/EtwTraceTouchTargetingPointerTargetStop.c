/*
 * XREFs of EtwTraceTouchTargetingPointerTargetStop @ 0x1C01290E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchTargetingPointerTargetStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchTargetingPointerTargetStop, &W32kControlGuid);
  return result;
}
