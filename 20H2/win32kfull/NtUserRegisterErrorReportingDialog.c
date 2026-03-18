/*
 * XREFs of NtUserRegisterErrorReportingDialog @ 0x1C02008A0
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterErrorReportingDialog @ 0x1C0209D30 (_RegisterErrorReportingDialog.c)
 */

__int64 __fastcall NtUserRegisterErrorReportingDialog(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  if ( v4 )
    v6 = RegisterErrorReportingDialog(v4, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
