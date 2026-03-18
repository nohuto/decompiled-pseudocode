/*
 * XREFs of NtUserAutoRotateScreen @ 0x1C01F77C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserAutoRotateScreen(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r8
  unsigned int v6; // ebx
  int v7; // eax

  UserSessionSwitchEnterCrit();
  if ( PsGetCurrentProcess(v3, v2, v4) != gpepCSRSS
    || ((*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) == 0
      ? (v7 = 0)
      : (v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 768LL) + 24LL) & 0x10),
        v7) )
  {
    v6 = -1;
    UserSetLastError(5LL, gpepCSRSS, v5);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 56LL))(P, a1);
  }
  LeaveCrit();
  return v6;
}
