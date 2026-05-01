/*
 * XREFs of ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180060EF0
 * Callers:
 *     _lambda_11a25c1b712ef8d7b807ed3fc486eab4_::operator() @ 0x18006C8E0 (_lambda_11a25c1b712ef8d7b807ed3fc486eab4_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::GetApplication(
        CWinRTApplicationView *this,
        struct IImmersiveApplication **a2)
{
  __int64 v4; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = (struct IImmersiveApplication *)*((_QWORD *)this + 7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A5,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007139FLL,
      v6);
    return 2147947423LL;
  }
}
