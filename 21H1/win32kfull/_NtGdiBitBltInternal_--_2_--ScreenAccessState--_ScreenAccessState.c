/*
 * XREFs of _NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState @ 0xF706A
 * Callers:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

void __thiscall NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState(_BYTE *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax

  if ( *this )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    *(_DWORD *)(ThreadWin32Thread + 180) &= ~0x10u;
  }
}
