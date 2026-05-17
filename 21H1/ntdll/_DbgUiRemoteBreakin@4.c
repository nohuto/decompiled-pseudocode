/*
 * XREFs of _DbgUiRemoteBreakin@4 @ 0x4B32DB60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _DbgBreakPoint@0 @ 0x4B2F4CE0 (_DbgBreakPoint@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

void __stdcall __noreturn DbgUiRemoteBreakin(int a1)
{
  if ( (NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 2) != 0) && (NtCurrentTeb()->SameTebFlags & 0x20) == 0 )
    DbgBreakPoint();
  RtlExitUserThread(0);
}
