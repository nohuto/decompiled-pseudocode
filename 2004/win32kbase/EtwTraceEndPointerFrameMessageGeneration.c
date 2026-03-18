/*
 * XREFs of EtwTraceEndPointerFrameMessageGeneration @ 0x1C01281E0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C012A144 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceEndPointerFrameMessageGeneration(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&EndPointerFrameMessageGeneration, a3, a1, a2, 0);
  return result;
}
