/*
 * XREFs of ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803F4DA0
 * Callers:
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803F5254 (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x1803F4840 (-AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@.c)
 *     ?GetDropTargetEnabledList@DragData@@AEAA?AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803F4A6C (-GetDropTargetEnabledList@DragData@@AEAA-AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrang.c)
 *     ?GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z @ 0x1803F4B3C (-GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z.c)
 *     ?GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z @ 0x1803F4BEC (-GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z.c)
 */

__int64 __fastcall DragData::InitDropTargets(__int64 a1, char a2)
{
  char DropTargetEnabledList; // si
  __int32 v4; // ecx
  int ReplaceDropTargetRects; // edi
  __int64 v6; // rdx
  int v8; // ecx
  int LeftAndRightItems; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int32 v16; // r14d
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  struct IAppLayoutItem *v20[2]; // [rsp+38h] [rbp-38h] BYREF
  struct IAppLayoutItem *v21; // [rsp+48h] [rbp-28h] BYREF
  __m128i v22; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  DropTargetEnabledList = DragData::GetDropTargetEnabledList(a1, a2);
  if ( (DropTargetEnabledList & 1) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 84) + HIDWORD(*(_QWORD *)(a1 + 56));
    v22 = *(__m128i *)(a1 + 56);
    v22.m128i_i32[3] = v4;
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 5, &v22, 0);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 237LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)ReplaceDropTargetRects);
      return (unsigned int)ReplaceDropTargetRects;
    }
  }
  if ( (DropTargetEnabledList & 2) != 0 )
  {
    v22 = *(__m128i *)(a1 + 56);
    v22.m128i_i32[1] = _mm_srli_si128(v22, 8).m128i_i32[1] - *(_DWORD *)(a1 + 88);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 6, &v22, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 244LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 4) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 92);
    *(_OWORD *)v20 = *(_OWORD *)(a1 + 56);
    LODWORD(v20[1]) = _mm_cvtsi128_si32(*(__m128i *)v20) + v8;
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 0, v20, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 252LL;
      goto LABEL_4;
    }
    *(_OWORD *)v20 = *(_OWORD *)(a1 + 56);
    LODWORD(v20[0]) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v20, 8)) - *(_DWORD *)(a1 + 92);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 1, v20, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 256LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 8) != 0 )
  {
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 4, (_OWORD *)(a1 + 56), 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 265LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 0x10) != 0 )
  {
    v21 = 0LL;
    v20[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    LeftAndRightItems = DragData::GetLeftAndRightItems((DragData *)a1, &v21, v20);
    ReplaceDropTargetRects = LeftAndRightItems;
    if ( LeftAndRightItems < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)LeftAndRightItems);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      return (unsigned int)ReplaceDropTargetRects;
    }
    v10 = *(_QWORD *)(a1 + 40);
    v19 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 184LL))(v10, *(_QWORD *)(a1 + 48));
    v12 = *(_QWORD *)(a1 + 40);
    if ( v11 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v12 + 152LL))(
              v12,
              *(_QWORD *)(a1 + 48),
              &v19,
              0LL);
      ReplaceDropTargetRects = v13;
      if ( v13 < 0 )
      {
        v14 = 281LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_33;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v12 + 168LL))(v12, &v19, 0LL);
      ReplaceDropTargetRects = v13;
      if ( v13 < 0 )
      {
        v14 = 289LL;
        goto LABEL_32;
      }
    }
    v15 = (*(__int64 (__fastcall **)(__int64, struct IAppLayoutItem *))(*(_QWORD *)v19 + 96LL))(v19, v21);
    v22 = 0LL;
    if ( v15 )
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __m128i *))(*(_QWORD *)v20[0] + 56LL))(v20[0], 0LL, &v22);
      v16 = v22.m128i_i32[2] - MulDiv(v22.m128i_i32[2] - v22.m128i_i32[0], 50, 100);
    }
    else
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __m128i *))(*(_QWORD *)v21 + 56LL))(v21, 0LL, &v22);
      v16 = MulDiv(v22.m128i_i32[2] - v22.m128i_i32[0], 50, 100) + v22.m128i_i32[0];
    }
    v22 = *(__m128i *)(a1 + 56);
    v22.m128i_i32[2] = v16;
    v13 = DragData::AddDropTarget((_QWORD *)a1, 0, &v22, 1);
    ReplaceDropTargetRects = v13;
    if ( v13 < 0 )
    {
      v14 = 317LL;
      goto LABEL_32;
    }
    v22 = *(__m128i *)(a1 + 56);
    v22.m128i_i32[0] = v16;
    v13 = DragData::AddDropTarget((_QWORD *)a1, 1, &v22, 1);
    ReplaceDropTargetRects = v13;
    if ( v13 < 0 )
    {
      v14 = 321LL;
      goto LABEL_32;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  if ( (DropTargetEnabledList & 0x20) == 0 )
    return 0LL;
  v22 = 0LL;
  *(_OWORD *)v20 = 0LL;
  ReplaceDropTargetRects = DragData::GetReplaceDropTargetRects(
                             (DragData *)a1,
                             (struct Geometry::CRect *)&v22,
                             (struct Geometry::CRect *)v20);
  if ( ReplaceDropTargetRects < 0 )
  {
    v6 = 328LL;
    goto LABEL_4;
  }
  ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 2, &v22, 1);
  if ( ReplaceDropTargetRects < 0 )
  {
    v6 = 329LL;
    goto LABEL_4;
  }
  v17 = DragData::AddDropTarget((_QWORD *)a1, 3, v20, 1);
  v18 = v17;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14A,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
    (const char *)(unsigned int)v17);
  return v18;
}
