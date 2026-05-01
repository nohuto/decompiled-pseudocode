/*
 * XREFs of ?TryInvokeBack@WindowArrangementView@@UEAAJXZ @ 0x1803EE370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1803EACB0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 */

__int64 __fastcall WindowArrangementView::TryInvokeBack(WindowArrangementView *this, volatile int *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WindowArrangementView::CancelPlacement((WindowArrangementView *)((char *)this - 8), a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
