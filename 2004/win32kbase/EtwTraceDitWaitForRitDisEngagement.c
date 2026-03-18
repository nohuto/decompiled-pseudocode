/*
 * XREFs of EtwTraceDitWaitForRitDisEngagement @ 0x1C005FB20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDitWaitForRitDisEngagement(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &DitWaitForRitDisEngagement, &W32kControlGuid);
  return result;
}
