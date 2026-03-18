/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C0081DA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetShellWindow @ 0x1C007FB34 (xxxSetShellWindow.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0093258 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  int v2; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct tagWND *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int128 v23; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+30h] [rbp-20h]
  __int128 v25; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h]
  int v27; // [rsp+80h] [rbp+30h] BYREF
  int v28; // [rsp+84h] [rbp+34h]
  struct tagWND *v29; // [rsp+88h] [rbp+38h] BYREF

  v28 = -1;
  v27 = 0x2000;
  v2 = 0;
  v26 = 0LL;
  v29 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( v5 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v23;
      *((_QWORD *)&v23 + 1) = v5;
      HMLockObject(v5);
      if ( (unsigned int)ValidateHWNDND(a2, &v29) )
      {
        if ( PsGetCurrentProcessWin32Process(v9, v8, v10)
          && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11, v13),
              (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, &v27))
          && *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v16, v15, v17) )
        {
          *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v25;
          v18 = v29;
          *((_QWORD *)&v25 + 1) = v29;
          HMLockObject(v29);
          v2 = xxxSetShellWindow((struct tagWND *)v7, v18);
          ThreadUnlock1(v20, v19, v21);
        }
        else
        {
          UserSetLastError(5LL);
        }
      }
      ThreadUnlock1(v9, v8, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
