/*
 * XREFs of KdpDeleteBreakpoint @ 0x1409BB248
 * Callers:
 *     KdpRestoreBreakPointEx @ 0x1409B8F08 (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x1409BA090 (KdpWriteBreakPointEx.c)
 *     KdpDeleteBreakpointRange @ 0x1409BB2B0 (KdpDeleteBreakpointRange.c)
 * Callees:
 *     KdpLowWriteContent @ 0x1409BB450 (KdpLowWriteContent.c)
 */

char __fastcall KdpDeleteBreakpoint(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  int v3; // eax

  v1 = (unsigned int)(a1 - 1);
  if ( (unsigned int)(a1 - 1) > 0x1F )
    return 0;
  v2 = 5 * v1;
  v3 = *((_DWORD *)&unk_140C33220 + 10 * v1);
  if ( !v3 )
    return 0;
  if ( (v3 & 0xC) == 4 )
  {
    *((_DWORD *)&unk_140C33220 + 10 * v1) = 0;
    ++KdpBreakpointChangeCount;
  }
  else if ( (unsigned __int8)KdpLowWriteContent((unsigned int)v1) )
  {
    *((_DWORD *)&unk_140C33220 + 2 * v2) = 0;
  }
  return 1;
}
