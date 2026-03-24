/*
 * XREFs of ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020C9AC
 * Callers:
 *     ?Draw@CTextVisualContent@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F6B00 (-Draw@CTextVisualContent@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800520D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800BA570 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800BA7B0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18020CE60 (-GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEA.c)
 */

__int64 __fastcall CTextVisualContent::Draw(
        CTextVisualContent *this,
        const struct CVisualTree **a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CVisual *CurrentVisual; // rax
  CTextVisualContent *v7; // rcx
  __int64 **TreeData; // r13
  _QWORD *v10; // rax
  unsigned int v11; // edi
  __int64 *v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rax
  int DrawListCacheForTextObject; // eax
  CDrawListEntry *v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 *v19; // r14
  __int64 *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rsi
  __int64 *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r12
  int v27; // eax
  CDrawListEntry *v28; // rbx
  unsigned int v29; // ebp
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  CDrawListEntry *v35; // [rsp+88h] [rbp+10h] BYREF
  const struct D2D_SIZE_F *v36; // [rsp+90h] [rbp+18h]

  v36 = a3;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 3));
  TreeData = CVisual::FindTreeData(CurrentVisual, a2[741]);
  if ( !TreeData )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
      (const char *)0x88982F04LL);
    return 2291674884LL;
  }
  v10 = (_QWORD *)*((_QWORD *)this - 4);
  v11 = 0;
  v12 = (__int64 *)v10[77];
  v13 = (__int64 *)v10[78];
  if ( v12 != v13 )
  {
    while ( 1 )
    {
      v14 = *v12;
      v35 = 0LL;
      v32 = v14;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(
                                     v7,
                                     (struct CDrawingContext *)a2,
                                     (struct CTreeData *)TreeData,
                                     v11,
                                     &v35);
      v16 = v35;
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
        break;
      v18 = v32 + 56 + *(int *)(*(_QWORD *)(v32 + 56) + 8LL);
      DrawListCacheForTextObject = (*(__int64 (__fastcall **)(__int64, const struct CVisualTree **, const struct D2D_SIZE_F *, CDrawListEntry *))(*(_QWORD *)v18 + 16LL))(
                                     v18,
                                     a2,
                                     v36,
                                     v35);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v25 = 36LL;
        goto LABEL_20;
      }
      ++v11;
      if ( v16 )
        CDrawListEntry::Release(v16);
      if ( ++v12 == v13 )
      {
        v10 = (_QWORD *)*((_QWORD *)this - 4);
        goto LABEL_10;
      }
    }
    v25 = 32LL;
    goto LABEL_20;
  }
LABEL_10:
  v19 = (__int64 *)v10[83];
  v20 = (__int64 *)v10[84];
  if ( v19 != v20 )
  {
    while ( 1 )
    {
      v21 = *v19;
      v35 = 0LL;
      v33 = v21;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(
                                     v7,
                                     (struct CDrawingContext *)a2,
                                     (struct CTreeData *)TreeData,
                                     v11,
                                     &v35);
      v16 = v35;
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
        break;
      v22 = v33 + 56 + *(int *)(*(_QWORD *)(v33 + 56) + 8LL);
      DrawListCacheForTextObject = (*(__int64 (__fastcall **)(__int64, const struct CVisualTree **, const struct D2D_SIZE_F *, CDrawListEntry *))(*(_QWORD *)v22 + 16LL))(
                                     v22,
                                     a2,
                                     v36,
                                     v35);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v25 = 50LL;
        goto LABEL_20;
      }
      ++v11;
      if ( v16 )
        CDrawListEntry::Release(v16);
      if ( ++v19 == v20 )
      {
        v10 = (_QWORD *)*((_QWORD *)this - 4);
        goto LABEL_17;
      }
    }
    v25 = 46LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
      (const char *)(unsigned int)DrawListCacheForTextObject);
    if ( v16 )
      CDrawListEntry::Release(v16);
    return v17;
  }
LABEL_17:
  v23 = (__int64 *)v10[80];
  v24 = (__int64 *)v10[81];
  while ( 1 )
  {
    if ( v23 == v24 )
      return 0LL;
    v26 = *v23;
    v35 = 0LL;
    v27 = CTextVisualContent::GetDrawListCacheForTextObject(
            v7,
            (struct CDrawingContext *)a2,
            (struct CTreeData *)TreeData,
            v11,
            &v35);
    v28 = v35;
    v29 = v27;
    if ( v27 < 0 )
      break;
    v30 = v26 + *(int *)(*(_QWORD *)(v26 + 56) + 8LL) + 56LL;
    v27 = (*(__int64 (__fastcall **)(__int64, const struct CVisualTree **, const struct D2D_SIZE_F *, CDrawListEntry *))(*(_QWORD *)v30 + 16LL))(
            v30,
            a2,
            v36,
            v35);
    v29 = v27;
    if ( v27 < 0 )
    {
      v31 = 64LL;
      goto LABEL_34;
    }
    ++v11;
    if ( v28 )
      CDrawListEntry::Release(v28);
    ++v23;
  }
  v31 = 60LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v31,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
    (const char *)(unsigned int)v27);
  if ( v28 )
    CDrawListEntry::Release(v28);
  return v29;
}
