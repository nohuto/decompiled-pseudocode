/*
 * XREFs of _EditionIsGetKeyStateBlocked@0 @ 0xF193A
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

BOOL __stdcall EditionIsGetKeyStateBlocked()
{
  PKTHREAD CurrentThread; // eax

  CurrentThread = KeGetCurrentThread();
  return *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 248) != _grpdeskRitInput;
}
