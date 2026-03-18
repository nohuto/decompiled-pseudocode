/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C015D4E0
 * Callers:
 *     W32kCddClipRegion @ 0x1C0277820 (W32kCddClipRegion.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  __int64 ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_DWORD *)(ThreadWin32Thread + 328) |= 0x20u;
  return this;
}
