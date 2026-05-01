/*
 * XREFs of ?GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z @ 0x180418098
 * Callers:
 *     ?GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z @ 0x180418148 (-GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z.c)
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180418310 (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragData::GetLeftAndRightItems(
        DragData *this,
        struct IAppLayoutItem **a2,
        struct IAppLayoutItem **a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, GUID *, struct IAppLayoutItem **))(**((_QWORD **)this + 5)
                                                                                            + 104LL))(
         *((_QWORD *)this + 5),
         0LL,
         5LL,
         &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
         a2);
  if ( v5 < 0 )
  {
    v6 = 371LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, GUID *, struct IAppLayoutItem **))(**((_QWORD **)this + 5)
                                                                                             + 104LL))(
         *((_QWORD *)this + 5),
         1LL,
         5LL,
         &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
         a3);
  if ( v5 < 0 )
  {
    v6 = 373LL;
    goto LABEL_3;
  }
  return 0LL;
}
