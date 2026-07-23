/*
 * XREFs of NtWriteRequestData @ 0x1408BD9A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     LpcpCopyRequestData @ 0x1408BD3BC (LpcpCopyRequestData.c)
 */

NTSTATUS __cdecl NtWriteRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG DataEntryIndex,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = LpcpCopyRequestData(
         1,
         PortHandle,
         (unsigned __int64)Message,
         DataEntryIndex,
         (char *)Buffer,
         BufferSize,
         (__int64 *)NumberOfBytesWritten);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  return v7;
}
