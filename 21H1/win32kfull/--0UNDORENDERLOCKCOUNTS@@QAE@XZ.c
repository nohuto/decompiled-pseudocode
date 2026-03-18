/*
 * XREFs of ??0UNDORENDERLOCKCOUNTS@@QAE@XZ @ 0x7BD3E
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

UNDORENDERLOCKCOUNTS *__thiscall UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS(UNDORENDERLOCKCOUNTS *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  *((_DWORD *)this + 2) = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    *(_DWORD *)this = *(_DWORD *)(ThreadWin32Thread + 52);
    *((_DWORD *)this + 1) = *(_DWORD *)(ThreadWin32Thread + 56);
    *(_DWORD *)(ThreadWin32Thread + 52) = 0;
    *(_DWORD *)(*((_DWORD *)this + 2) + 56) = 0;
  }
  return this;
}
