/*
 * XREFs of ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180417BD0
 * Callers:
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1804180B4 (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x18041764C (-AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@.c)
 *     ?GetDropTargetEnabledList@DragData@@AEAA?AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180417888 (-GetDropTargetEnabledList@DragData@@AEAA-AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrang.c)
 *     ?GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z @ 0x180417958 (-GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z.c)
 *     ?GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z @ 0x180417A08 (-GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragData::InitDropTargets(__int64 a1, char a2)
{
  char DropTargetEnabledList; // si
  int ReplaceDropTargetRects; // edi
  __int64 v5; // rdx
  int LeftAndRightItems; // eax
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int32 v13; // r14d
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  struct IAppLayoutItem *v17[2]; // [rsp+38h] [rbp-38h] BYREF
  struct IAppLayoutItem *v18; // [rsp+48h] [rbp-28h] BYREF
  __m128i v19; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  DropTargetEnabledList = DragData::GetDropTargetEnabledList(a1, a2);
  if ( (DropTargetEnabledList & 1) != 0 )
  {
    v19 = *(__m128i *)(a1 + 56);
    v19.m128i_i32[3] = *(_DWORD *)(a1 + 84) + v19.m128i_i32[1];
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 5, &v19, 0);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 237LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)ReplaceDropTargetRects);
      return (unsigned int)ReplaceDropTargetRects;
    }
  }
  if ( (DropTargetEnabledList & 2) != 0 )
  {
    v19 = *(__m128i *)(a1 + 56);
    v19.m128i_i32[1] = _mm_srli_si128(v19, 8).m128i_i32[1] - *(_DWORD *)(a1 + 88);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 6, &v19, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 244LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 4) != 0 )
  {
    *(_OWORD *)v17 = *(_OWORD *)(a1 + 56);
    LODWORD(v17[1]) = _mm_cvtsi128_si32(*(__m128i *)v17) + *(_DWORD *)(a1 + 92);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 0, v17, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 252LL;
      goto LABEL_4;
    }
    *(_OWORD *)v17 = *(_OWORD *)(a1 + 56);
    LODWORD(v17[0]) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v17, 8)) - *(_DWORD *)(a1 + 92);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 1, v17, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 256LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 8) != 0 )
  {
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 4, (_OWORD *)(a1 + 56), 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 265LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 0x10) != 0 )
  {
    v18 = 0LL;
    v17[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    LeftAndRightItems = DragData::GetLeftAndRightItems((DragData *)a1, &v18, v17);
    ReplaceDropTargetRects = LeftAndRightItems;
    if ( LeftAndRightItems < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)LeftAndRightItems);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      return (unsigned int)ReplaceDropTargetRects;
    }
    v16 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 184LL))(
           *(_QWORD *)(a1 + 40),
           *(_QWORD *)(a1 + 48));
    v9 = *(_QWORD *)(a1 + 40);
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v9 + 152LL))(
              v9,
              *(_QWORD *)(a1 + 48),
              &v16,
              0LL);
      ReplaceDropTargetRects = v10;
      if ( v10 < 0 )
      {
        v11 = 281LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        goto LABEL_33;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v9 + 168LL))(v9, &v16, 0LL);
      ReplaceDropTargetRects = v10;
      if ( v10 < 0 )
      {
        v11 = 289LL;
        goto LABEL_32;
      }
    }
    v12 = (*(__int64 (__fastcall **)(__int64, struct IAppLayoutItem *))(*(_QWORD *)v16 + 96LL))(v16, v18);
    v19 = 0LL;
    if ( v12 )
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __m128i *))(*(_QWORD *)v17[0] + 56LL))(v17[0], 0LL, &v19);
      v13 = v19.m128i_i32[2] - MulDiv(v19.m128i_i32[2] - v19.m128i_i32[0], 50, 100);
    }
    else
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __m128i *))(*(_QWORD *)v18 + 56LL))(v18, 0LL, &v19);
      v13 = MulDiv(v19.m128i_i32[2] - v19.m128i_i32[0], 50, 100) + v19.m128i_i32[0];
    }
    v19 = *(__m128i *)(a1 + 56);
    v19.m128i_i32[2] = v13;
    v10 = DragData::AddDropTarget((_QWORD *)a1, 0, &v19, 1);
    ReplaceDropTargetRects = v10;
    if ( v10 < 0 )
    {
      v11 = 317LL;
      goto LABEL_32;
    }
    v19 = *(__m128i *)(a1 + 56);
    v19.m128i_i32[0] = v13;
    v10 = DragData::AddDropTarget((_QWORD *)a1, 1, &v19, 1);
    ReplaceDropTargetRects = v10;
    if ( v10 < 0 )
    {
      v11 = 321LL;
      goto LABEL_32;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  if ( (DropTargetEnabledList & 0x20) == 0 )
    return 0LL;
  v19 = 0LL;
  *(_OWORD *)v17 = 0LL;
  ReplaceDropTargetRects = DragData::GetReplaceDropTargetRects(
                             (DragData *)a1,
                             (struct Geometry::CRect *)&v19,
                             (struct Geometry::CRect *)v17);
  if ( ReplaceDropTargetRects < 0 )
  {
    v5 = 328LL;
    goto LABEL_4;
  }
  ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 2, &v19, 1);
  if ( ReplaceDropTargetRects < 0 )
  {
    v5 = 329LL;
    goto LABEL_4;
  }
  v14 = DragData::AddDropTarget((_QWORD *)a1, 3, v17, 1);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14A,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
