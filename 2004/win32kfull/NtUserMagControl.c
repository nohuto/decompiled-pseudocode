/*
 * XREFs of NtUserMagControl @ 0x1C01FF3B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MagControl @ 0x1C01CD39C (MagControl.c)
 */

__int64 __fastcall NtUserMagControl(int a1, __int64 a2)
{
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  ULONG v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( a2 )
  {
    a2 = ValidateHwnd(a2);
    if ( !a2 )
    {
      v5 = -1073741811;
LABEL_5:
      v4 = 0LL;
      v10 = RtlNtStatusToDosError(v5);
      UserSetLastError(v10, v11, v12);
      goto LABEL_6;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = MagControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, a1, a2);
  if ( v5 < 0 )
    goto LABEL_5;
LABEL_6:
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v4;
}
