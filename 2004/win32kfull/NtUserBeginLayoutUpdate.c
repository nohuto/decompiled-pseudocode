/*
 * XREFs of NtUserBeginLayoutUpdate @ 0x1C0125960
 * Callers:
 *     <none>
 * Callees:
 *     GreWindowBeginLayoutUpdate @ 0x1C0008B80 (GreWindowBeginLayoutUpdate.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserBeginLayoutUpdate(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 TopLevelWindow; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v7 = v3;
  if ( v3 && (v5 = *(_QWORD *)(v3 + 40), v4 = (*(_WORD *)(v5 + 42) & 0x3FFFu) - 669, (v4 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v13;
    *((_QWORD *)&v13 + 1) = v3;
    HMLockObject(v3);
    if ( !(unsigned int)IsTopLevelWindow(v7) && *(char *)(*(_QWORD *)(v7 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v7);
      if ( TopLevelWindow )
      {
        v8 = *(_QWORD *)(TopLevelWindow + 40);
        v9 = *(_WORD *)(v8 + 42) & 0x3FFF;
        if ( (_DWORD)v9 != 669 && *(char *)(v8 + 25) < 0 )
          GreWindowBeginLayoutUpdate(*(HWND *)TopLevelWindow, v8);
      }
    }
    ThreadUnlock1(v9, v8, v10);
  }
  else
  {
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v2;
}
