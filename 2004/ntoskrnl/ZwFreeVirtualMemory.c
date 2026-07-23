/*
 * XREFs of ZwFreeVirtualMemory @ 0x1403F3980
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14034F888 (SepRmDispatchDataToLsa.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F256C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpDeCommitFreeBlock @ 0x140584D74 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x140585344 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x140585824 (RtlpFreeHeap.c)
 *     PspSetupUserStack @ 0x140603EA8 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x140603FCC (RtlCreateUserStack.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     WbFreeMemoryBlock @ 0x1406D9FD8 (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x1406FE398 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x14070C948 (PspDeleteUserStack.c)
 *     RtlCreateHeap @ 0x140756C80 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1407603A0 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140883C60 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x140912B14 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140922004 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x14093E64C (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140952B80 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
