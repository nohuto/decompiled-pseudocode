/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1403F8470
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x1402FE928 (PspWow64ThunkProcessParameters.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F6BB4 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpStdExtendLowerWatermark @ 0x14058450C (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x140584654 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x140588CA4 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x140588F28 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1405896F0 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1405931B0 (RtlpHpFixedHeapCommitRoutine.c)
 *     RtlCreateUserStack @ 0x140685EDC (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406ACE1C (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1406BBEC4 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x1406BC158 (MiCheckShadowStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1406D12FC (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406D6F04 (PspSetupReservedUserMappings.c)
 *     EtwpFindUserBufferSpace @ 0x1407177C4 (EtwpFindUserBufferSpace.c)
 *     RtlCreateHeap @ 0x1407658C0 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x1408897B0 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x14090CB68 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14092805C (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1409314A0 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x140958940 (ExRaiseHardError.c)
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
