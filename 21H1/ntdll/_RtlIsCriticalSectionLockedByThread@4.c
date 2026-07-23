/*
 * XREFs of _RtlIsCriticalSectionLockedByThread@4 @ 0x4B2D2150
 * Callers:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrpAllocateModuleEntry@4 @ 0x4B2D0962 (_LdrpAllocateModuleEntry@4.c)
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 *     _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0 (_RtlSetEnvironmentVar@20.c)
 *     _TppCheckLdrLockHeld@0 @ 0x4B38477D (_TppCheckLdrLockHeld@0.c)
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlIsCriticalSectionLockedByThread(PRTL_CRITICAL_SECTION CriticalSection)
{
  return CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
