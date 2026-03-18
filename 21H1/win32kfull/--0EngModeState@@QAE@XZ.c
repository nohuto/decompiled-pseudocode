/*
 * XREFs of ??0EngModeState@@QAE@XZ @ 0xF6218
 * Callers:
 *     _W32kCddClipRegion@12 @ 0x1D4779 (_W32kCddClipRegion@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

EngModeState *__thiscall EngModeState::EngModeState(EngModeState *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax

  *(_DWORD *)this = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  *(_DWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_DWORD *)(ThreadWin32Thread + 180) |= 0x20u;
  return this;
}
