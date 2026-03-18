/*
 * XREFs of EtwTraceUserCreateHandle @ 0x1C005A950
 * Callers:
 *     HMCreateHandleForObject @ 0x1C005A7C0 (HMCreateHandleForObject.c)
 *     HMAllocObject @ 0x1C0070A30 (HMAllocObject.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0131038 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUserCreateHandle(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    return McTemplateK0pqqq_EtwWriteTransfer(a1, (unsigned int)&UserCreateHandle, a3, a1, a2);
  return result;
}
