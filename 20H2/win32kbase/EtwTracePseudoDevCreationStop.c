/*
 * XREFs of EtwTracePseudoDevCreationStop @ 0x1C0126680
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01272A0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePseudoDevCreationStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PseudoDevCreationStop, &W32kControlGuid);
  return result;
}
