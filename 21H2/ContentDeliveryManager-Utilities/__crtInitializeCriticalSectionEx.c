/*
 * XREFs of __crtInitializeCriticalSectionEx @ 0x1800BBD34
 * Callers:
 *     _Mtxinit @ 0x1800BAF4C (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}
