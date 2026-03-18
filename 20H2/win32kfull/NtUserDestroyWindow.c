/*
 * XREFs of NtUserDestroyWindow @ 0x1C00CC0B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 */

__int64 __fastcall NtUserDestroyWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  if ( v2 )
    v4 = xxxDestroyWindow(v2);
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
