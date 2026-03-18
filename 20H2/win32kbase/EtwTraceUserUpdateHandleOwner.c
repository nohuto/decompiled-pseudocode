/*
 * XREFs of EtwTraceUserUpdateHandleOwner @ 0x1C00A5564
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x1C00A53C8 (HMChangeOwnerPheProcessWorker.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00B0834 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0128CF8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUserUpdateHandleOwner(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    return McTemplateK0pqqq_EtwWriteTransfer(a1, (unsigned int)&UserUpdateHandleOwner, a3, a1, a2);
  return result;
}
