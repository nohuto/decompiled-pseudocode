/*
 * XREFs of _RtlUpdateClonedCriticalSection@4 @ 0x4B306F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlUpdateClonedCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  CriticalSection->OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
  CriticalSection->LockCount = -2;
  CriticalSection->RecursionCount = 1;
  CriticalSection->LockSemaphore = 0;
}
