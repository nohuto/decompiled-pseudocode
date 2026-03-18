/*
 * XREFs of NtUserSetSensorPresence @ 0x1C02025E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetSensorPresence(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 CurrentProcess; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v3, v2, v4);
  if ( CurrentProcess == gpepCSRSS )
    (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 40LL))(P, a1);
  else
    UserSetLastError(5LL, CurrentProcess, v6);
  UserSessionSwitchLeaveCrit(v7);
  return 1LL;
}
