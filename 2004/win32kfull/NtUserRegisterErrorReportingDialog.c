/*
 * XREFs of NtUserRegisterErrorReportingDialog @ 0x1C0201710
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterErrorReportingDialog @ 0x1C020ABB0 (_RegisterErrorReportingDialog.c)
 */

__int64 __fastcall NtUserRegisterErrorReportingDialog(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  if ( v4 )
    v8 = RegisterErrorReportingDialog(v4, a2);
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
