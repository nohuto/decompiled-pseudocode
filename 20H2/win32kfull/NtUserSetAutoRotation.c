/*
 * XREFs of NtUserSetAutoRotation @ 0x1C02011C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C008004C (UserSetLastStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetAutoRotation(unsigned int a1)
{
  __int64 v2; // rdi
  NTSTATUS v3; // eax
  __int64 v4; // rcx

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v3 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 48LL))(P, a1);
  if ( v3 < 0 )
  {
    UserSetLastStatus(v3, 1);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
