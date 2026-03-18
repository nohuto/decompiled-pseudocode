/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1C012A070
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0016C78 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagWINDOWSTATION *v11; // rdx
  __int64 v12; // r8
  char *v13; // rsi
  __int64 v15; // rcx
  char *v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( !v2 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3, v5);
  v4 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v4 + 424) != CurrentProcessWin32Process )
  {
    v6 = 5LL;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) & 1) != 0 )
  {
    v15 = 87LL;
LABEL_13:
    UserSetLastError(v15, v9, v10);
    goto LABEL_9;
  }
  v11 = CheckClipboardAccess();
  if ( !v11 )
    goto LABEL_9;
  if ( *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) + 664LL) != v11 )
  {
    UserSetLastError(87LL, (__int64)v11, v12);
    v15 = 0LL;
    goto LABEL_13;
  }
  v13 = (char *)v11 + 152;
  if ( *((_QWORD *)v11 + 19) )
  {
    v17 = *((_QWORD *)v11 + 19);
    v16 = (char *)(v7 + 240);
    HMAssignmentLock(&v16);
  }
  v16 = v13;
  v17 = v7;
  HMAssignmentLock(&v16);
  v6 = 1LL;
  *(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) |= 1u;
LABEL_9:
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
