/*
 * XREFs of NtUserOpenDesktop @ 0x1C00C4370
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _OpenDesktop @ 0x1C00C4408 (_OpenDesktop.c)
 */

__int64 __fastcall NtUserOpenDesktop(int a1, int a2, int a3)
{
  __int64 v3; // rbp
  int v7; // edx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = OpenDesktop(a1, v7, a2, a3, (__int64)&v16);
  if ( v8 < 0 )
  {
    v13 = RtlNtStatusToDosError(v8);
    UserSetLastError(v13, v14, v15);
  }
  else
  {
    v3 = v16;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v3;
}
