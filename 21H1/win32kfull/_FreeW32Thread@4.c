/*
 * XREFs of _FreeW32Thread@4 @ 0x43994
 * Callers:
 *     _W32pThreadCallout@8 @ 0x464C8 (_W32pThreadCallout@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _DereferenceW32Thread@4 @ 0x42CB6 (_DereferenceW32Thread@4.c)
 */

LONG_PTR __thiscall FreeW32Thread(void *this)
{
  int ThreadWin32Thread; // eax
  int v3; // eax

  ThreadWin32Thread = W32GetThreadWin32Thread(this);
  vMarkFreeW32Thread(ThreadWin32Thread);
  v3 = W32GetThreadWin32Thread(this);
  return DereferenceW32Thread(v3);
}
