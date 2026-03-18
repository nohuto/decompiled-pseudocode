/*
 * XREFs of NtUserGetTopLevelWindow @ 0x1C01FCBC0
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserGetTopLevelWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 && GetTopLevelWindow(v2) )
    v6 = *(_QWORD *)GetTopLevelWindow(v7);
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
