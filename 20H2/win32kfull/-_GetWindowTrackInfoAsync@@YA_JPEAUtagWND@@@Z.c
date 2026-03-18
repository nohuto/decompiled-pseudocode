/*
 * XREFs of ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C01197B0
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C003BB28 (IsShellProcess.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C0094BC0 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C0094D18 (_anonymous_namespace_--EligibleWindow.c)
 *     IsThreadHung @ 0x1C00C171C (IsThreadHung.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C0119850 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall _GetWindowTrackInfoAsync(struct tagWND *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8

  v2 = *((_QWORD *)a1 + 2);
  if ( IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v4 + 424))
    && v4 != v2
    && ShellWindowManagement::BehaviorEnabled(*((ShellWindowManagement **)a1 + 3), (const struct tagDESKTOP *)0xFF)
    && anonymous_namespace_::EligibleWindow(a1, 0)
    && (*(_DWORD *)(v2 + 1232) & 0x20) == 0
    && !(unsigned int)IsThreadHung((_QWORD *)v2, 0) )
  {
    return BeginGetWidnowTrackInfoAsync(a1);
  }
  UserSetLastError(5LL, v3, v4);
  return 0LL;
}
