/*
 * XREFs of _PopW32ThreadLock@4 @ 0xAE3DC
 * Callers:
 *     _EditionCreateWindowStationEntryPoint@32 @ 0xF228C (_EditionCreateWindowStationEntryPoint@32.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __stdcall PopW32ThreadLock(_DWORD *a1)
{
  PKTHREAD CurrentThread; // eax
  int result; // eax

  CurrentThread = KeGetCurrentThread();
  result = W32GetThreadWin32Thread(CurrentThread);
  *(_DWORD *)(result + 8) = *a1;
  return result;
}
