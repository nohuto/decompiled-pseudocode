/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C003B090
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C003B114 (CheckGrantedAccess.c)
 */

__int64 NtUserGetCaretBlinkTime()
{
  __int64 v0; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v0);
  v3 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v4 = PsGetCurrentProcessWin32Process(gpepCSRSS),
        v6 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(v4 + 680), 2LL)) )
  {
    v5 = gpsi;
    v6 = *(_DWORD *)(gpsi + 4984LL);
  }
  UserSessionSwitchLeaveCrit(v5, v3, v2);
  return v6;
}
