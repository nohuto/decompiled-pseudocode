/*
 * XREFs of EtwTraceBeginPointerFrameCreation @ 0x1C0127A20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C012A144 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceBeginPointerFrameCreation(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&BeginPointerFrameCreation, a3, a1, a2, a3);
  return result;
}
