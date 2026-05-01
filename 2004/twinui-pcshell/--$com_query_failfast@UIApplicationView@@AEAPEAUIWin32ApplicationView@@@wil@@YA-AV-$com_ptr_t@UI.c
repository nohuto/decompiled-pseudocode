/*
 * XREFs of ??$com_query_failfast@UIApplicationView@@AEAPEAUIWin32ApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_failfast_policy@wil@@@0@AEAPEAUIWin32ApplicationView@@@Z @ 0x1800A9934
 * Callers:
 *     ?StartActivity@PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x1802523CC (-StartActivity@PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationV.c)
 *     ?StartActivity@PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x180252570 (-StartActivity@PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationVie.c)
 *     ?StartActivity@SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x180252714 (-StartActivity@SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationVie.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800938C8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query_failfast<IApplicationView,IWin32ApplicationView * &>(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      5481LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a1;
}
