/*
 * XREFs of _EditionIsRIMInjectionBlocked@0 @ 0xF1960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EditionIsRIMInjectionBlocked()
{
  return _grpdeskRitInput
      && (*(_DWORD *)(_gptiCurrent + 248) != _grpdeskRitInput
       || PsGetCurrentProcess() != _gpepCSRSS && !RtlAreAllAccessesGranted(*(_DWORD *)(_gptiCurrent + 496), 0x20u));
}
