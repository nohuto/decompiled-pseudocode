/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1C0128060
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  struct tagWINDOWSTATION *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  char *v9; // rsi
  __int64 v11; // rcx
  char *v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( !v2 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v4 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v4 + 416) != CurrentProcessWin32Process )
  {
    v6 = 5LL;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) & 1) != 0 )
  {
    v11 = 87LL;
LABEL_13:
    UserSetLastError(v11, (__int64)v3, v5);
    goto LABEL_9;
  }
  v3 = CheckClipboardAccess();
  if ( !v3 )
    goto LABEL_9;
  if ( *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL) + 664LL) != v3 )
  {
    UserSetLastError(87LL, (__int64)v3, v5);
    v11 = 0LL;
    goto LABEL_13;
  }
  v9 = (char *)v3 + 152;
  if ( *((_QWORD *)v3 + 19) )
  {
    v13 = *((_QWORD *)v3 + 19);
    v12 = (char *)(v7 + 240);
    HMAssignmentLock(&v12);
  }
  v12 = v9;
  v13 = v7;
  HMAssignmentLock(&v12);
  v6 = 1LL;
  *(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) |= 1u;
LABEL_9:
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
