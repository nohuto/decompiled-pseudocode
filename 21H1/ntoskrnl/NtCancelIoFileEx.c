/*
 * XREFs of NtCancelIoFileEx @ 0x1406CD700
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030A95C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140699F58 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

NTSTATUS __cdecl NtCancelIoFileEx(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v6; // rdx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v9; // rdi
  int v10; // eax
  int v11; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-18h] BYREF

  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v6 = (__int64)IoStatusBlock;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v9 = DmaAdapter;
    v10 = IopCancelIrpsInFileObjectList(
            (__int64)DmaAdapter,
            (int)KeGetCurrentThread()->ApcState.Process,
            (int)IoRequestToCancel,
            0,
            0,
            0);
    v11 = v10;
    if ( !IoRequestToCancel || !v10 )
      v11 = IopCancelIrpsInThreadListForCurrentProcess((__int64)v9, (__int64)IoRequestToCancel) | v10;
    IoStatusBlock->Status = v11 == 0 ? 0xC0000225 : 0;
    IoStatusBlock->Information = 0LL;
    HalPutDmaAdapter(v9);
    return v11 == 0 ? 0xC0000225 : 0;
  }
  return result;
}
