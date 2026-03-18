/*
 * XREFs of _zzzRegisterSystemThread@4 @ 0x152CC2
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?zzzJournalAttach@@YGHPAUtagTHREADINFO@@H@Z @ 0x1526E3 (-zzzJournalAttach@@YGHPAUtagTHREADINFO@@H@Z.c)
 */

int __stdcall zzzRegisterSystemThread(char a1)
{
  PKTHREAD CurrentThread; // eax
  PKTHREAD v2; // eax

  if ( (a1 & 1) != 0 )
    *(_DWORD *)(_gptiCurrent + 264) |= 0x40u;
  if ( (a1 & 2) != 0 )
  {
    *(_DWORD *)(_gptiCurrent + 264) |= 0x80u;
    CurrentThread = KeGetCurrentThread();
    if ( *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 252) + 28)
      || (v2 = KeGetCurrentThread(), *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v2) + 252) + 24)) )
    {
      zzzJournalAttach(_gptiCurrent, 0);
      zzzJournalAttach(_gptiCurrent, 1);
    }
  }
  return 1;
}
