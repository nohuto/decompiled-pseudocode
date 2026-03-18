/*
 * XREFs of _NtUserValidateTimerCallback@4 @ 0x9819A
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _ValidateTimerCallback@8 @ 0x981D0 (_ValidateTimerCallback@8.c)
 */

int __stdcall NtUserValidateTimerCallback(int a1)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v3; // esi

  EnterSharedCrit(0, 1);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v3 = ValidateTimerCallback(ThreadWin32Thread, a1);
  UserSessionSwitchLeaveCrit();
  return v3;
}
