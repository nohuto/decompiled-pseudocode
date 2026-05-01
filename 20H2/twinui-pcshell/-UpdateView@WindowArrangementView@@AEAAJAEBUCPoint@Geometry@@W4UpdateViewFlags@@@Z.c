/*
 * XREFs of ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x180411288
 * Callers:
 *     ?BeginDragFromPlaceMode@WindowArrangementView@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x18040CC60 (-BeginDragFromPlaceMode@WindowArrangementView@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18040EBA0 (-OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z.c)
 *     ?OnPointerUpdate@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18040EC20 (-OnPointerUpdate@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_382fa76d9980bbd2846dd440d3c3bc97__&_::Run @ 0x18040F310 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_382fa76d9980bbd2846dd440d3c3bc97__-_--Run.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18040F988 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDragVisual@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180410A20 (-UpdateDragVisual@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x180410A78 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 */

__int64 __fastcall WindowArrangementView::UpdateView(__int64 a1, _QWORD *a2, char a3)
{
  int updated; // edi
  __int64 v7; // rdx
  unsigned int v9[6]; // [rsp+20h] [rbp-58h] BYREF
  int v10[6]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 315) )
  {
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 96) + 32LL))(*(_QWORD *)(a1 + 96), v10);
    updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 96) + 24LL))(*(_QWORD *)(a1 + 96), a2);
    if ( updated < 0 )
    {
      v7 = 1212LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 96) + 32LL))(*(_QWORD *)(a1 + 96), v9);
    if ( (a3 & 1) == 0 && v10[0] != v9[0] )
    {
      updated = WindowArrangementView::UpdateDragVisual(a1, v9[0]);
      if ( updated < 0 )
      {
        v7 = 1222LL;
        goto LABEL_4;
      }
      updated = WindowArrangementView::UpdateDropFeedback(a1, v9[0], v10[0]);
      if ( updated < 0 )
      {
        v7 = 1223LL;
        goto LABEL_4;
      }
      if ( v9[0] <= 1 )
        *(_BYTE *)(a1 + 312) = 1;
    }
  }
  *(_QWORD *)(a1 + 144) = *a2;
  return 0LL;
}
