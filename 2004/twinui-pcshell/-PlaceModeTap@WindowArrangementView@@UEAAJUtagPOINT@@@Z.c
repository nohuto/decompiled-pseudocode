/*
 * XREFs of ?PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z @ 0x18040F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1803A0E68 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18040DA44 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::PlaceModeTap(WindowArrangementView *this, struct tagPOINT a2)
{
  bool v2; // zf
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  struct tagPOINT v10; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v11[20]; // [rsp+28h] [rbp-48h] BYREF
  char v12; // [rsp+3Ch] [rbp-34h]
  __int128 v13; // [rsp+40h] [rbp-30h]
  __int128 v14; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = *((_QWORD *)this + 7) == 0LL;
  v10 = a2;
  if ( v2 )
  {
    v5 = -2147019873;
    v6 = 569LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)v5);
    return v5;
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 4) + 120LL))(*((_QWORD *)this + 4), &v14);
  if ( Geometry::CRect::Contains((Geometry::CRect *)&v14, &v10) )
  {
    *(_DWORD *)v11 = 5;
    v12 = 1;
    *(_OWORD *)&v11[4] = v14;
    v13 = *(_OWORD *)v11;
  }
  else
  {
    v8 = *((_QWORD *)this + 7);
    v10 = a2;
    v13 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, struct tagPOINT *))(*(_QWORD *)v8 + 40LL))(
                       v8,
                       v11,
                       &v10);
  }
  v5 = WindowArrangementView::CommitPlaceModeTap((_BYTE *)this - 48, (unsigned int)v13, v7);
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = 582LL;
    goto LABEL_8;
  }
  return v5;
}
