/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1403F2630
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x14031800C (PspWow64ThunkProcessParameters.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F120C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpStdExtendLowerWatermark @ 0x14058042C (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x140580574 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x140584C14 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x140584E98 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x140585660 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x14058F020 (RtlpHpFixedHeapCommitRoutine.c)
 *     RtlCreateUserStack @ 0x14063900C (RtlCreateUserStack.c)
 *     MiCheckForUserStackOverflow @ 0x1406C55F4 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x1406C5888 (MiCheckShadowStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1406DB328 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406E0F68 (PspSetupReservedUserMappings.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406F98FC (PspSetupUserProcessAddressSpace.c)
 *     EtwpFindUserBufferSpace @ 0x140704C90 (EtwpFindUserBufferSpace.c)
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140882940 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140905CA0 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140920D54 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x14092A3C0 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x1409517E0 (ExRaiseHardError.c)
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
