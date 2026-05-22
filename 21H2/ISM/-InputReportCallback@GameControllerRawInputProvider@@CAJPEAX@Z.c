/*
 * XREFs of ?InputReportCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x180088990
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UInputInfo@@P6AXPEAU1@@Z@std@@QEAA@XZ @ 0x1800885BC (--1-$unique_ptr@UInputInfo@@P6AXPEAU1@@Z@std@@QEAA@XZ.c)
 */

__int64 __fastcall GameControllerRawInputProvider::InputReportCallback(void *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4[2]; // [rsp+20h] [rbp-18h] BYREF
  void *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v4 = lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_;
  v5 = a1;
  if ( GameControllerRawInputProvider::s_instance
    && (v1 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)GameControllerRawInputProvider::s_instance + 5)
                                                       + 24LL))(
               *((_QWORD *)GameControllerRawInputProvider::s_instance + 5),
               a1),
        v2 = v1,
        v1 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v1);
  }
  else
  {
    v2 = 0;
  }
  std::unique_ptr<InputInfo,void (*)(InputInfo *)>::~unique_ptr<InputInfo,void (*)(InputInfo *)>((__int64)v4);
  return v2;
}
