/*
 * XREFs of EtwTraceUserDestroyHandle @ 0x1C00174EC
 * Callers:
 *     HMFreeObject @ 0x1C0017080 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C0017370 (HMRemoveHandleForObject.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007447C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C012B048 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUserDestroyHandle(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    return McTemplateK0pqqq_EtwWriteTransfer(a1, (unsigned int)&UserDestroyHandle, a3, a1, a2);
  return result;
}
