/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x1C0127CD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (_QWORD *)v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v4 = v7[2];
    if ( *(_QWORD *)(v4 + 416) == CurrentProcessWin32Process )
    {
      v9 = (unsigned __int16)gatomShutdownBlockingReason;
      v10 = v7[18];
      if ( gatomShutdownBlockingReason == word_1C033AF24 )
        *(_QWORD *)(v7[5] + 312LL) = 0LL;
      v11 = RealInternalRemoveProp(v10, v9, 1LL);
      if ( v11 )
      {
        Win32FreePool(v11);
        v6 = 1LL;
      }
      else
      {
        UserSetLastError(87LL, v12, v13);
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
