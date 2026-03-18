/*
 * XREFs of _EditionIsGetAsyncKeyStateBlocked@0 @ 0xF18D6
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

BOOL __stdcall EditionIsGetAsyncKeyStateBlocked()
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // esi

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  return *(_DWORD *)(ThreadWin32Thread + 248) != _grpdeskRitInput
      || (!_gptiForeground || PsGetCurrentProcessWin32Process() != *(_DWORD *)(_gptiForeground + 232))
      && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 496), 0x18u);
}
