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

_PEB_LDR_DATA *__cdecl RtlpNotOwnerCriticalSection(const void **a1)
{
  _PEB_LDR_DATA *result; // eax
  int InformationProcess; // eax
  int v3; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  result = NtCurrentPeb()->Ldr;
  if ( !result->ShutdownInProgress
    || a1 == (const void **)&LdrpLoaderLock
    && (result = (_PEB_LDR_DATA *)result->ShutdownThreadId, result != NtCurrentTeb()->ClientId.UniqueThread) )
  {
    if ( NtCurrentPeb()->BeingDebugged )
    {
      DbgPrintEx(
        101,
        0,
        "NTDLL: Calling thread (%p) not owner of CritSect: %p  Owner ThreadId: %p\n",
        NtCurrentTeb()->ClientId.UniqueThread,
        a1,
        a1[3]);
      __debugbreak();
    }
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      InformationProcess = ZwQueryInformationProcess(-1, 36, (int)&v3, 4, 0);
      if ( InformationProcess < 0 )
        RtlRaiseStatus(InformationProcess);
      `RtlpGetCookieValue'::`2'::CookieValue = v3;
    }
    ms_exc.registration.TryLevel = 0;
    RtlRaiseStatus(-1073741212);
  }
  return result;
}
