/*
 * XREFs of ?GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z @ 0x1803F4BEC
 * Callers:
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803F4DA0 (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z @ 0x1803F4B3C (-GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z.c)
 */

__int64 __fastcall DragData::GetReplaceDropTargetRects(
        DragData *this,
        struct Geometry::CRect *a2,
        struct Geometry::CRect *a3)
{
  int LeftAndRightItems; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  struct IAppLayoutItem *v12; // [rsp+20h] [rbp-40h] BYREF
  struct IAppLayoutItem *v13; // [rsp+28h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 3) = 0;
  *(_DWORD *)a3 = 0;
  *((_DWORD *)a3 + 1) = 0;
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 3) = 0;
  v13 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  LeftAndRightItems = DragData::GetLeftAndRightItems(this, &v13, &v12);
  v7 = LeftAndRightItems;
  if ( LeftAndRightItems >= 0 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v13 + 56LL))(v13, 0LL, &v14);
    v15 = 0LL;
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v12 + 56LL))(v12, 0LL, &v15);
    v8 = DWORD2(v14);
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 56);
    *((_DWORD *)a2 + 2) = v8;
    v9 = v15;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 56);
    *(_DWORD *)a3 = v9;
    v10 = (v9 - *((_DWORD *)a2 + 2)) / 2 + *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v10;
    v7 = 0;
    *(_DWORD *)a3 = v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x181,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)LeftAndRightItems);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v7;
}
