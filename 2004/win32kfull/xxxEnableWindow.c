/*
 * XREFs of xxxEnableWindow @ 0x1C0021E90
 * Callers:
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxEnableScrollBar @ 0x1C00F12C0 (xxxEnableScrollBar.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0021EFC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C0022AB4 (IsNonImmersiveBand.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D3568 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  int v4; // ebx
  __int64 CurrentProcessWin32Process; // rax

  v4 = 0;
  if ( (unsigned int)IsNonImmersiveBand(a1)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
        !(unsigned int)IsDesktopApp(CurrentProcessWin32Process))
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    LOBYTE(v4) = a2 != 0;
    return xxxEnableWindowWorker(a1, v4);
  }
  else
  {
    UserSetLastError(5LL);
    return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
  }
}
