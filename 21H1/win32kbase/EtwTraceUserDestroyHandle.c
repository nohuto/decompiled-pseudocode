/*
 * XREFs of EtwTraceUserDestroyHandle @ 0x1C005AC2C
 * Callers:
 *     HMRemoveHandleForObject @ 0x1C005AAB0 (HMRemoveHandleForObject.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007049C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0131038 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUserDestroyHandle(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    return McTemplateK0pqqq_EtwWriteTransfer(a1, (unsigned int)&UserDestroyHandle, a3, a1, a2);
  return result;
}
