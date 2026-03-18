/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C00BD780
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C00BD804 (CheckGrantedAccess.c)
 */

__int64 NtUserGetCaretBlinkTime()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterSharedCrit(0LL, 1LL);
  if ( *(_QWORD *)PsGetCurrentProcessWin32Process(v1, v0, v2) == gpepCSRSS
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpepCSRSS, gpepCSRSS, v3),
        v6 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(CurrentProcessWin32Process + 680), 2LL)) )
  {
    v5 = gpsi;
    v6 = *(_DWORD *)(gpsi + 4984LL);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
