/*
 * XREFs of _RtlGetCriticalSectionRecursionCount@4 @ 0x4B34A650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlGetCriticalSectionRecursionCount(PRTL_CRITICAL_SECTION CriticalSection)
{
  if ( CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    return CriticalSection->RecursionCount;
  else
    return 0;
}
