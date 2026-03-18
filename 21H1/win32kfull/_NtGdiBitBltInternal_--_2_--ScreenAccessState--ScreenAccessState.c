/*
 * XREFs of _NtGdiBitBltInternal_::_2_::ScreenAccessState::ScreenAccessState @ 0xF7030
 * Callers:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

bool *__thiscall NtGdiBitBltInternal_::_2_::ScreenAccessState::ScreenAccessState(bool *this, char a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax

  *this = (a2 & 4) != 0;
  if ( (a2 & 4) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      *(_DWORD *)(ThreadWin32Thread + 180) |= 0x10u;
    else
      *this = 0;
  }
  return this;
}
