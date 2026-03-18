/*
 * XREFs of NtUserOpenDesktop @ 0x1C00101A0
 * Callers:
 *     <none>
 * Callees:
 *     _OpenDesktop @ 0x1C0010238 (_OpenDesktop.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserOpenDesktop(int a1, int a2, int a3)
{
  __int64 v3; // rbp
  int v7; // edx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  ULONG v11; // eax
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = OpenDesktop(a1, v7, a2, a3, (__int64)&v12);
  if ( v8 < 0 )
  {
    v11 = RtlNtStatusToDosError(v8);
    UserSetLastError(v11);
  }
  else
  {
    v3 = v12;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v3;
}
