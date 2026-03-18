/*
 * XREFs of NtUserDestroyWindow @ 0x1C01047E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 */

__int64 __fastcall NtUserDestroyWindow(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ebx

  EnterCrit(0LL, 1LL);
  v2 = (__int64 *)ValidateHwnd(a1);
  v6 = 0;
  if ( v2 )
    v6 = xxxDestroyWindow(v2);
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
