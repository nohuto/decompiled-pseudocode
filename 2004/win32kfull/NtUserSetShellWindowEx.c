/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C00BFBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0064D28 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSetShellWindow @ 0x1C00BF934 (xxxSetShellWindow.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  int v2; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  struct tagWND *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int128 v24; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+30h] [rbp-20h]
  __int128 v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+48h] [rbp-8h]
  int v28; // [rsp+80h] [rbp+30h] BYREF
  int v29; // [rsp+84h] [rbp+34h]
  struct tagWND *v30; // [rsp+88h] [rbp+38h] BYREF

  v29 = -1;
  v28 = 0x2000;
  v2 = 0;
  v27 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v9 = v5;
  if ( v5 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v24;
      *((_QWORD *)&v24 + 1) = v5;
      HMLockObject(v5);
      if ( ValidateHWNDND(a2, &v30) )
      {
        if ( PsGetCurrentProcessWin32Process(v11)
          && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14),
              (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, &v28))
          && *(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL) == PsGetCurrentProcessWin32Process(v17) )
        {
          *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v26;
          v18 = v30;
          *((_QWORD *)&v26 + 1) = v30;
          HMLockObject(v30);
          v2 = xxxSetShellWindow((struct tagWND *)v9, (__int64)v18, v19);
          ThreadUnlock1(v21, v20, v22);
        }
        else
        {
          UserSetLastError(5LL, v13, v15);
        }
      }
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v2;
}
