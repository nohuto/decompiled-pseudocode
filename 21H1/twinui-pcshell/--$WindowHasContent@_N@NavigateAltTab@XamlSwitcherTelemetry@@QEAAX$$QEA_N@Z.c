/*
 * XREFs of ??$WindowHasContent@_N@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX$$QEA_N@Z @ 0x1802ED830
 * Callers:
 *     _lambda_7e6d277de2b049706e6768307ccc7deb_::operator() @ 0x1802EE898 (_lambda_7e6d277de2b049706e6768307ccc7deb_--operator().c)
 *     _lambda_adedda421da4a00589298a86f7993fb7_::operator() @ 0x1802EE9E4 (_lambda_adedda421da4a00589298a86f7993fb7_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802CA02C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

int __fastcall XamlSwitcherTelemetry::NavigateAltTab::WindowHasContent<bool>(__int64 a1, char *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rcx
  char v6; // al
  __int64 v7; // r8
  char v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-40h] BYREF
  char *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v4 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         a1,
         _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    v6 = *a2;
    v7 = *(_QWORD *)(a1 + 48);
    v13 = 0;
    v9 = v6;
    v11 = &v9;
    v12 = 1;
    LODWORD(v4) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v5,
                    (unsigned __int8 *)dword_1804EDD0B,
                    (const GUID *)(v7 + 8),
                    0LL,
                    3u,
                    &v10);
  }
  return (int)v4;
}
