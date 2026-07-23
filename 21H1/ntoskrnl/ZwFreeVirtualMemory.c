/*
 * XREFs of ZwFreeVirtualMemory @ 0x1403F26F0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x140312098 (SepRmDispatchDataToLsa.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F120C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpDeCommitFreeBlock @ 0x140584644 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x140584C14 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405850F4 (RtlpFreeHeap.c)
 *     PspSetupUserStack @ 0x140638EE8 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x14063900C (RtlCreateUserStack.c)
 *     WbFreeMemoryBlock @ 0x14065BC4C (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x1406DB328 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1406E8978 (PspDeleteUserStack.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x14075E030 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140882940 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x140911794 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140920D54 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x14093D3CC (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x1409517E0 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
