/*
 * XREFs of NtUserModifyUserStartupInfoFlags @ 0x1C01FF8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserModifyUserStartupInfoFlags(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4, v6);
  v8 = (unsigned int)~a1;
  v9 = a2 & a1 | v8 & *(_DWORD *)(CurrentProcessWin32Process + 808);
  *(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10, v8) + 808) = v9;
  UserSessionSwitchLeaveCrit(v12);
  return 1LL;
}
