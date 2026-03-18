/*
 * XREFs of NtUserUndelegateInput @ 0x1C0124BE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01E101C (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserUndelegateInput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 260) && a2 - 1 <= 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v6, v5, v7) )
      {
        _HandleDelegatedInput(*(_QWORD *)(v9 + 264), a2, 0LL);
        CleanupInputDelegation(v9);
        v8 = 1LL;
        goto LABEL_5;
      }
      v10 = 5LL;
    }
    else
    {
      v10 = 87LL;
    }
    UserSetLastError(v10, v5, v7);
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
