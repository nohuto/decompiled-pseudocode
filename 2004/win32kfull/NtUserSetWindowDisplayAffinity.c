/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1C0203960
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SetDisplayAffinity @ 0x1C0249130 (SetDisplayAffinity.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v6) )
    {
      v10 = 5LL;
LABEL_14:
      UserSetLastError(v10, v5, v7);
      goto LABEL_15;
    }
    v11 = *(_QWORD *)(v9 + 104);
    if ( v11 && (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 1224LL) & 0x40000) != 0 )
      v9 = *(_QWORD *)(v9 + 104);
    if ( !(unsigned int)IsTopLevelWindow(v9) || a2 && (a2 & 0x11) == 0 )
    {
      v10 = 87LL;
      goto LABEL_14;
    }
    if ( !(unsigned int)SetDisplayAffinity((struct tagWND *)v9) )
    {
      v10 = 8LL;
      goto LABEL_14;
    }
    v8 = 1LL;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
