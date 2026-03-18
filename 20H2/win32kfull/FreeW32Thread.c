/*
 * XREFs of FreeW32Thread @ 0x1C008CC2C
 * Callers:
 *     W32pThreadCallout @ 0x1C008CFA0 (W32pThreadCallout.c)
 * Callees:
 *     DereferenceW32Thread @ 0x1C008CC70 (DereferenceW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall FreeW32Thread(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(a1);
  vMarkFreeW32Thread(ThreadWin32Thread);
  v3 = W32GetThreadWin32Thread(a1);
  return DereferenceW32Thread(v3);
}
