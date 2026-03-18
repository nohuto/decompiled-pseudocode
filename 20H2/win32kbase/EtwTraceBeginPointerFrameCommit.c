/*
 * XREFs of EtwTraceBeginPointerFrameCommit @ 0x1C0125690
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0188B30 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ApiSetEtwTraceBeginPointerFrameCommit @ 0x1C01C8B30 (ApiSetEtwTraceBeginPointerFrameCommit.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C0127DF4 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceBeginPointerFrameCommit(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&BeginPointerFrameCommit, a3, a1, a2, 0);
  return result;
}
