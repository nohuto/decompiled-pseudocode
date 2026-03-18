/*
 * XREFs of NtUserRemoveClipboardFormatListener @ 0x1C000EFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000F13C (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0016C78 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRemoveClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v3 = 0LL;
  v4 = v2;
  if ( v2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 424LL) == PsGetCurrentProcessWin32Process() )
    {
      if ( CheckClipboardAccess() )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 232LL) & 1) != 0 )
        {
          _RemoveClipboardFormatListener((struct tagWND *)v4);
          v3 = 1LL;
        }
        else
        {
          UserSetLastError(87LL);
        }
      }
    }
    else
    {
      v3 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
