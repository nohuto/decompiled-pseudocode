/*
 * XREFs of _NtUserRegisterErrorReportingDialog@8 @ 0x1680C1
 * Callers:
 *     <none>
 * Callees:
 *     __RegisterErrorReportingDialog@8 @ 0x1704ED (__RegisterErrorReportingDialog@8.c)
 */

int __stdcall NtUserRegisterErrorReportingDialog(int a1, int a2)
{
  int v2; // esi
  int v3; // eax

  v2 = 0;
  EnterSharedCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
    v2 = _RegisterErrorReportingDialog(v3, a2);
  UserSessionSwitchLeaveCrit();
  return v2;
}
