/*
 * XREFs of EtwTraceEndPointerFrameBuildPartial @ 0x1C01280D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C012A144 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceEndPointerFrameBuildPartial(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&EndPointerFrameBuildPartial, a3, 0, a1, a2);
  return result;
}
