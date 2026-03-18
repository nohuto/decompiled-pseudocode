/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00BF690
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C00288E8 (IsShellProcess.c)
 *     IsIAMThread @ 0x1C0030384 (IsIAMThread.c)
 *     _UnregisterHotKey @ 0x1C003D200 (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C003D584 (_RegisterHotKey.c)
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C00BF620 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C00BF910 (IsMessageOnlyWindow.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  struct tagWND **v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagWND *v7; // rcx
  int v8; // eax
  __int64 v10; // rcx
  struct tagWND *v11; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v4 = *(struct tagWND ***)(gptiCurrent + 448LL);
  v6 = *(unsigned int *)(PsGetCurrentProcessWin32Process(a1) + 12);
  if ( (v6 & 0x88) != 0 || !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v10 = 5LL;
    goto LABEL_13;
  }
  v7 = v4[41];
  if ( !a2 )
  {
    if ( !v7 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1 && *((_QWORD *)v7 + 2) == gptiCurrent )
    {
      UnregisterHotKey((__int64)a1, 0xF060u);
      ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, 0LL, v11);
      return 1LL;
    }
    goto LABEL_12;
  }
  if ( v7 )
  {
    v10 = 1242LL;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
    goto LABEL_12;
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL)) )
    goto LABEL_12;
  LOBYTE(v8) = IsIAMThread(gptiCurrent);
  if ( !v8 )
    goto LABEL_12;
  if ( (unsigned int)IsMessageOnlyWindow(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
  {
    ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, a1, (struct tagWND *)v6);
    LODWORD(BugCheckParameter2) = 115;
    RegisterHotKey(v4[41], 0LL, 61536, 28673, BugCheckParameter2);
    return 1LL;
  }
  v10 = 87LL;
LABEL_13:
  UserSetLastError(v10, v5, v6);
  return 0LL;
}
