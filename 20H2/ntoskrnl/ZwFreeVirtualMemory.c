/*
 * XREFs of ZwFreeVirtualMemory @ 0x1403F8530
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1403204A8 (SepRmDispatchDataToLsa.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F6BB4 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpDeCommitFreeBlock @ 0x1405886D4 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x140588CA4 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x140589184 (RtlpFreeHeap.c)
 *     WbFreeMemoryBlock @ 0x14065D558 (WbFreeMemoryBlock.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspSetupUserStack @ 0x140685318 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x140685EDC (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1406D12FC (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1406DEE58 (PspDeleteUserStack.c)
 *     RtlCreateHeap @ 0x1407658C0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x14076E9B0 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x1408897B0 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x140918654 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14092805C (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x14094440C (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140958940 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
