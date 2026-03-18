/*
 * XREFs of NtUserOpenThreadDesktop @ 0x1C0200860
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _OpenThreadDesktop @ 0x1C01E9E08 (_OpenThreadDesktop.c)
 */

HANDLE __fastcall NtUserOpenThreadDesktop(unsigned int a1, char a2, int a3, int a4)
{
  HANDLE v4; // r14
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  HANDLE v17; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = OpenThreadDesktop(a1, a2, a3, a4, &v17);
  if ( v9 >= 0 )
  {
    v4 = v17;
  }
  else
  {
    v13 = RtlNtStatusToDosError(v9);
    UserSetLastError(v13, v14, v15);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return v4;
}
