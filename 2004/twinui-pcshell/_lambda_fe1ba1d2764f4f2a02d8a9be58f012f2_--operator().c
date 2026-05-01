/*
 * XREFs of _lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::operator() @ 0x18040D1C4
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18040D7E0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_InvokeCallback @ 0x180411FE4 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--_InvokeCallback.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x18040DE14 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 */

__int64 __fastcall lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::operator()(WindowArrangementView **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = WindowArrangementView::EndDrag(*a1, 0);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x226,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
