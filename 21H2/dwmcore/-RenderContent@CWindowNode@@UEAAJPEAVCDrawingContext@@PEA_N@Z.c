/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800068A4 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800604DC (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008CB20 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18008CE74 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C8ED0 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801B2C98 (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x180207464 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18021011C (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180244228 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802445C0 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderContent(const struct CShape **this, struct _LIST_ENTRY **a2, bool *a3)
{
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rbx
  struct _LIST_ENTRY *v8; // r14
  struct CWindowOcclusionInfo *v9; // rbp
  struct _LIST_ENTRY *v10; // rdi
  __int64 *v11; // r14
  struct CWindowOcclusionInfo **i; // rax
  struct CWindowOcclusionInfo *v13; // rdx
  struct _LIST_ENTRY *Flink; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  int v24; // ecx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rbx
  unsigned int v32; // edx
  unsigned int v33; // r8d
  __int64 v34; // rcx
  __int64 v35; // r14
  int v36; // r8d
  __int64 v37; // rdx
  struct IBitmapResource *v38; // r9
  CCompositionSurfaceBitmap *v39; // rbx
  int v40; // edi
  const struct CShape **DxClipShape; // rax
  struct IBitmapResource *v42; // r9
  __int64 v43; // rcx
  unsigned int v44; // [rsp+20h] [rbp-58h]
  struct _D3DCOLORVALUE v45; // [rsp+40h] [rbp-38h] BYREF

  if ( CVisual::HasProtectedContent((CVisual *)this) )
  {
    if ( *((_BYTE *)this[2] + 1274) )
    {
      v20 = CWindowNode::RenderBlackContent((CWindowNode *)this, (struct CDrawingContext *)a2);
      v22 = v20;
      if ( v20 >= 0 )
      {
        *a3 = 1;
        return v22;
      }
      v44 = 1209;
      goto LABEL_82;
    }
    *((_BYTE *)a2 + 7964) = 1;
  }
  v6 = a2[21];
  v7 = v6 + 118;
  if ( !v6 )
    v7 = (struct _LIST_ENTRY *)&CBackdropVisualImageKey::sc_NoBVIKey;
  v8 = a2[991];
  v9 = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v8->Flink[11].Blink)(v8) )
  {
    v10 = (struct _LIST_ENTRY *)(this + 42);
LABEL_6:
    if ( v10 )
    {
      v11 = (__int64 *)&v10[14];
      for ( i = (struct CWindowOcclusionInfo **)v10[14].Flink; i != (struct CWindowOcclusionInfo **)v10[14].Blink; ++i )
      {
        v13 = *i;
        if ( (struct _LIST_ENTRY *)*((_QWORD *)*i + 1) == v7->Flink
          && (struct _LIST_ENTRY *)*((_QWORD *)v13 + 2) == v7->Blink )
        {
          v9 = *i;
          if ( v13 )
            *((_BYTE *)v13 + 25) = 10;
          break;
        }
      }
      Flink = v10[18].Flink[1].Flink[31].Flink;
      if ( v10[16].Blink != Flink )
      {
        v10[16].Blink = Flink;
        v28 = *v11;
        while ( (struct _LIST_ENTRY *)v28 != v10[14].Blink )
        {
          v29 = *(_QWORD *)v28;
          if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) == CBackdropVisualImageKey::sc_NoBVIKey
            && *(_QWORD *)(v29 + 16) == qword_1803D73D8
            || (v30 = *(_BYTE *)(v29 + 25) == 1, --*(_BYTE *)(v29 + 25), !v30) )
          {
            v28 += 8LL;
          }
          else
          {
            v31 = (v28 - *v11) >> 3;
            detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
              &v10[14],
              v31);
            v28 = *v11 + 8 * v31;
          }
        }
      }
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)this);
    if ( TreeDataListHead )
    {
      for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
      {
        v10 = j - 24;
        if ( j[2].Flink == v8 )
          goto LABEL_6;
      }
    }
  }
  if ( !*((_BYTE *)this + 919) || *((_BYTE *)this + 914) )
    goto LABEL_29;
  v15 = (unsigned __int64)this[100];
  if ( (v15 & 2) != 0 )
    v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v16 = v15 & 1;
  v17 = (unsigned __int64)this[100];
  if ( (v17 & 2) == 0 )
    v17 = (unsigned __int64)this[100];
  v18 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v16 )
  {
    if ( v16 == 1 )
      v19 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v19 = *(_QWORD *)(v18 + 16);
  }
  else
  {
    v19 = 0LL;
  }
  v20 = CWindowNode::EnsureEffectiveSpriteClip((CWindowNode *)this);
  v22 = v20;
  if ( v20 < 0 )
  {
    v44 = 1227;
    goto LABEL_82;
  }
  v23 = (unsigned int)a2[5][58].Flink;
  if ( *(_DWORD *)(v19 + 408) <= v23 && *(_DWORD *)(v19 + 412) <= v23
    || *(_QWORD *)(v19 + 432) == *(_QWORD *)(v19 + 440)
    && (!*(_QWORD *)(v19 + 336)
     || !CGdiSpriteBitmap::EnsureBitmapRealization((CGdiSpriteBitmap *)v19)
     || (int)CGdiSpriteBitmap::CreateSectionBitmapSubRects((CGdiSpriteBitmap *)v19, v32, v33) < 0) )
  {
    if ( v9 )
      v24 = *((_DWORD *)v9 + 10);
    else
      v24 = 0;
    v20 = CWindowNode::RenderImage(
            (CWindowNode *)this,
            (struct CDrawingContext *)a2,
            v9,
            (struct IBitmapResource *)(v19 + 96),
            this[113],
            1,
            v24);
    v22 = v20;
    if ( v20 >= 0 )
      goto LABEL_29;
    v44 = 1236;
LABEL_82:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, v44);
    return v22;
  }
  v34 = *(_QWORD *)(v19 + 432);
  v35 = 0LL;
  if ( (*(_QWORD *)(v19 + 440) - v34) >> 3 )
  {
    while ( 1 )
    {
      v36 = v9 ? *((_DWORD *)v9 + 10) : 0;
      v37 = *(_QWORD *)(v34 + 8 * v35);
      v38 = v37 ? (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v37 + 64) + 8LL) + v37 + 64) : 0LL;
      v20 = CWindowNode::RenderImage((CWindowNode *)this, (struct CDrawingContext *)a2, v9, v38, this[113], 1, v36);
      v22 = v20;
      if ( v20 < 0 )
        break;
      v34 = *(_QWORD *)(v19 + 432);
      if ( ++v35 >= (unsigned __int64)((*(_QWORD *)(v19 + 440) - v34) >> 3) )
        goto LABEL_29;
    }
    v44 = 1247;
    goto LABEL_82;
  }
LABEL_29:
  if ( *((_BYTE *)this + 920) )
  {
    v39 = (CCompositionSurfaceBitmap *)CPtrArrayBase::operator[](this + 101, 0LL);
    if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v39) == 1 )
      CCompositionSurfaceBitmap::GetBorderColor(v39, &v45);
    v40 = v9 ? *((_DWORD *)v9 + 12) : 0;
    DxClipShape = (const struct CShape **)CWindowNode::GetDxClipShape(this, &v45);
    v42 = (CCompositionSurfaceBitmap *)((char *)v39 + 72);
    if ( !v39 )
      v42 = 0LL;
    v22 = CWindowNode::RenderImage((CWindowNode *)this, (struct CDrawingContext *)a2, v9, v42, *DxClipShape, 0, v40);
    CShapePtr::Release((CShapePtr *)&v45);
    if ( (v22 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0LL, v22, 0x4F4u);
      return v22;
    }
  }
  v20 = CVisual::RenderContent((CVisual *)this, (struct CDrawingContext *)a2, a3);
  v22 = v20;
  if ( v20 < 0 )
  {
    v44 = 1271;
    goto LABEL_82;
  }
  return v22;
}
