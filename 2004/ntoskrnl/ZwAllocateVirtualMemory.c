/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1403F38C0
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x140355B2C (PspWow64ThunkProcessParameters.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F256C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpStdExtendLowerWatermark @ 0x140580BAC (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x140580CF4 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x140585344 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405855C8 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x140585D90 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x14058F710 (RtlpHpFixedHeapCommitRoutine.c)
 *     RtlCreateUserStack @ 0x140603FCC (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x14065D2E4 (PspSetupUserProcessAddressSpace.c)
 *     EtwpFindUserBufferSpace @ 0x14069C394 (EtwpFindUserBufferSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1406E5004 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x1406E5298 (MiCheckShadowStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1406FE398 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x140703CF8 (PspSetupReservedUserMappings.c)
 *     RtlCreateHeap @ 0x140756C80 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140883C60 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140906F48 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140922004 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x14092B670 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x140952B80 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
