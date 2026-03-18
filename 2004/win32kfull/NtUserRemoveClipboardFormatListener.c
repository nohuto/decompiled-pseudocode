/*
 * XREFs of NtUserRemoveClipboardFormatListener @ 0x1C00C3880
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00C3A0C (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserRemoveClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v4 = *(_QWORD *)(v7 + 16);
    if ( *(_QWORD *)(v4 + 416) == CurrentProcessWin32Process )
    {
      if ( CheckClipboardAccess() )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) & 1) != 0 )
        {
          _RemoveClipboardFormatListener((struct tagWND *)v7);
          v6 = 1LL;
        }
        else
        {
          UserSetLastError(87LL, v3, v5);
        }
      }
    }
    else
    {
      v6 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
