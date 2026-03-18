/*
 * XREFs of EtwTraceUserUpdateHandleOwner @ 0x1C002D494
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C002D084 (HMChangeOwnerThreadWorker.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C002D308 (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0131038 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUserUpdateHandleOwner(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    return McTemplateK0pqqq_EtwWriteTransfer(a1, (unsigned int)&UserUpdateHandleOwner, a3, a1, a2);
  return result;
}
