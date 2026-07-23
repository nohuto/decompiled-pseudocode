/*
 * XREFs of RtlIsCriticalSectionLockedByThread @ 0x180014890
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpPrepareModuleForExecution @ 0x18003D878 (LdrpPrepareModuleForExecution.c)
 *     RtlSetEnvironmentVar @ 0x18004E110 (RtlSetEnvironmentVar.c)
 *     LdrpAllocateModuleEntry @ 0x18006B340 (LdrpAllocateModuleEntry.c)
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlIsCriticalSectionLockedByThread(PRTL_CRITICAL_SECTION CriticalSection)
{
  return CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
