/*
 * XREFs of NtWriteRequestData @ 0x1408BECF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     LpcpCopyRequestData @ 0x1408BE6DC (LpcpCopyRequestData.c)
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
