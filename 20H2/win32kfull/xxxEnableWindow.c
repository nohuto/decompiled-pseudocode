/*
 * XREFs of xxxEnableWindow @ 0x1C00C9A30
 * Callers:
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     xxxEnableScrollBar @ 0x1C00EC140 (xxxEnableScrollBar.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00C9A9C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C00C9C04 (IsNonImmersiveBand.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D2758 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 CurrentProcessWin32Process; // rax

  v7 = 0;
  if ( (unsigned int)IsNonImmersiveBand(a1)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4, v6),
        !(unsigned int)IsDesktopApp(CurrentProcessWin32Process))
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    LOBYTE(v7) = a2 != 0;
    return xxxEnableWindowWorker(a1, v7);
  }
  else
  {
    UserSetLastError(5LL);
    return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
  }
}
