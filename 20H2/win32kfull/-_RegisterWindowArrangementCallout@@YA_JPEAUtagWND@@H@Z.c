/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C007FA20
 * Callers:
 *     <none>
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C0012C50 (IsMessageOnlyWindow.c)
 *     IsIAMThread @ 0x1C002CEEC (IsIAMThread.c)
 *     _UnregisterHotKey @ 0x1C002E9F0 (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C002ED74 (_RegisterHotKey.c)
 *     IsShellProcess @ 0x1C003BB28 (IsShellProcess.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C007F9B0 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  struct tagWND **v5; // rsi
  struct tagWND *v6; // rcx
  int v7; // eax
  int v8; // eax
  struct tagWND *v9; // r8
  __int64 v11; // rcx
  struct tagWND *v12; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v3 = a2;
  v5 = *(struct tagWND ***)(gptiCurrent + 456LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 12) & 0x88) != 0
    || !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v11 = 5LL;
    goto LABEL_13;
  }
  v6 = v5[41];
  if ( !v3 )
  {
    if ( !v6 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1 && *((_QWORD *)v6 + 2) == gptiCurrent )
    {
      UnregisterHotKey((__int64)a1, 0xF060u);
      ShellWindowManagement::SetWindow((ShellWindowManagement *)v5, 0LL, v12);
      return 1LL;
    }
    goto LABEL_12;
  }
  if ( v6 )
  {
    v11 = 1242LL;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
    goto LABEL_12;
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
    goto LABEL_12;
  LOBYTE(v7) = IsIAMThread(gptiCurrent);
  if ( !v7 )
    goto LABEL_12;
  LOBYTE(v8) = IsMessageOnlyWindow((__int64)a1);
  if ( v8 && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
  {
    ShellWindowManagement::SetWindow((ShellWindowManagement *)v5, a1, v9);
    LODWORD(BugCheckParameter2) = 115;
    RegisterHotKey(v5[41], 0LL, 61536LL, 28673, BugCheckParameter2);
    return 1LL;
  }
  v11 = 87LL;
LABEL_13:
  UserSetLastError(v11);
  return 0LL;
}
