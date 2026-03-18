/*
 * XREFs of NtUserSetAutoRotation @ 0x1C0202030
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C004AC8C (UserSetLastStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetAutoRotation(unsigned int a1)
{
  __int64 v2; // rdi
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v3 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 48LL))(P, a1);
  if ( v3 < 0 )
  {
    UserSetLastStatus(v3, 1);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v2;
}
