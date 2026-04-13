/*
 * XREFs of __crtInitializeCriticalSectionEx @ 0x1800B7624
 * Callers:
 *     _Mtxinit @ 0x1800B683C (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}
