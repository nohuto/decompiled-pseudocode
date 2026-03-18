/*
 * XREFs of EtwTraceEndPointerFrameCommit @ 0x1C012E150
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C019C474 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C0130134 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceEndPointerFrameCommit(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&EndPointerFrameCommit, a3, a1, a2, 0);
  return result;
}
