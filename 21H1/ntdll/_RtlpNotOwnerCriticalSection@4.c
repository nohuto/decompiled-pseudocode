/*
 * XREFs of _RtlpNotOwnerCriticalSection@4 @ 0x4B34A880
 * Callers:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

_PEB_LDR_DATA *__stdcall RtlpNotOwnerCriticalSection(_RTL_CRITICAL_SECTION *a1)
{
  _PEB_LDR_DATA *result; // eax
  int v2; // eax
  ULONG *ProcessInformation; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  result = NtCurrentPeb()->Ldr;
  if ( !result->ShutdownInProgress
    || a1 == &LdrpLoaderLock
    && (result = (_PEB_LDR_DATA *)result->ShutdownThreadId, result != NtCurrentTeb()->ClientId.UniqueThread) )
  {
    if ( NtCurrentPeb()->BeingDebugged )
    {
      DbgPrintEx(
        0x65u,
        0,
        (int)"NTDLL: Calling thread (%p) not owner of CritSect: %p  Owner ThreadId: %p\n",
        (int)NtCurrentTeb()->ClientId.UniqueThread);
      __debugbreak();
    }
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      v2 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
      if ( v2 < 0 )
        RtlRaiseStatus(v2);
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    ms_exc.registration.TryLevel = 0;
    RtlRaiseStatus(-1073741212);
  }
  return result;
}
