/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B4370
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180015370 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180080D20 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180085320 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B4820 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800EAA70 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x180162A20 (-AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801773B0 (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801BC17C (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801F2BBC (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F2FD4 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderContent(CWindowNode *this, struct _LIST_ENTRY **a2, bool *a3)
{
  struct _LIST_ENTRY *v6; // r14
  struct CWindowOcclusionInfo *Flink; // rsi
  struct _LIST_ENTRY *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  __int64 v17; // rdx
  struct IBitmapResource *v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // r8d
  struct IBitmapResource *v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rbx
  const struct ConfirmPresentHistoryToken *v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  CCompositionSurfaceBitmap *v34; // rcx
  int v35; // ebx
  const struct CShape **DxClipShape; // rax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  struct _D3DCOLORVALUE v41; // [rsp+40h] [rbp-38h] BYREF

  if ( CVisual::HasProtectedContent(this) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1129LL) )
    {
      v13 = CWindowNode::RenderBlackContent(this, (struct CDrawingContext *)a2);
      v11 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x53Du, 0LL);
      else
        *a3 = 1;
      return v11;
    }
    *((_BYTE *)a2 + 5948) = 1;
  }
  v6 = a2[741];
  Flink = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v6->Flink[12].Blink)(v6) )
  {
    v8 = (struct _LIST_ENTRY *)((char *)this + 320);
LABEL_6:
    if ( v8 )
    {
      Flink = (struct CWindowOcclusionInfo *)v8[2].Flink;
      if ( !Flink )
      {
        Flink = (struct CWindowOcclusionInfo *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v8[1].Blink->Flink[22].Blink)(v8[1].Blink);
        v8[2].Flink = (struct _LIST_ENTRY *)Flink;
      }
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        v8 = i - 18;
        if ( i[2].Flink == v6 )
          goto LABEL_6;
      }
    }
  }
  if ( !*((_QWORD *)this + 90) || *((_BYTE *)this + 914) )
    goto LABEL_46;
  v9 = CWindowNode::EnsureEffectiveSpriteClip(this);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x54Cu, 0LL);
    return v11;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 90) + 80LL))(
          *((_QWORD *)this + 90),
          LODWORD(a2[5][60].Blink)) )
  {
    if ( Flink )
      v12 = *((_DWORD *)Flink + 6);
    else
      v12 = 0;
    v17 = *((_QWORD *)this + 90);
    if ( v17 )
      v18 = (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v17 + 8) + 8LL) + v17 + 8);
    else
      v18 = 0LL;
    v19 = CWindowNode::RenderImage(
            this,
            (struct CDrawingContext *)a2,
            Flink,
            v18,
            *((const struct CShape **)this + 113),
            (struct _MARGINS *)((char *)this + 820),
            v12);
    v11 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x555u, 0LL);
      return v11;
    }
    goto LABEL_41;
  }
  v21 = *((_QWORD *)this + 90);
  v22 = 0LL;
  v23 = v21 + 432;
  if ( !v21 )
    v23 = 488LL;
  v24 = *(_QWORD *)v23;
  if ( !((__int64)(*(_QWORD *)(v23 + 8) - *(_QWORD *)v23) >> 3) )
  {
LABEL_41:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 90) + 40LL))(*((_QWORD *)this + 90)) )
    {
      v30 = *((_QWORD *)this + 2);
      v31 = (const struct ConfirmPresentHistoryToken *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 90)
                                                                                         + 48LL))(*((_QWORD *)this + 90));
      v32 = FRAME_TIME_INFO::AddTokenForRenderContent(*(FRAME_TIME_INFO **)(v30 + 344), v31);
      v11 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x56Cu, 0LL);
        return v11;
      }
    }
LABEL_46:
    v34 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 108);
    if ( !v34 )
      goto LABEL_54;
    if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v34) == 1 )
      CCompositionSurfaceBitmap::GetBorderColor(*((CCompositionSurfaceBitmap **)this + 108), &v41);
    v35 = Flink ? *((_DWORD *)Flink + 8) : 0;
    DxClipShape = (const struct CShape **)CWindowNode::GetDxClipShape(this, &v41);
    v11 = CWindowNode::RenderImage(
            this,
            (struct CDrawingContext *)a2,
            Flink,
            (struct IBitmapResource *)((*((_QWORD *)this + 108) + 64LL) & -(__int64)(*((_QWORD *)this + 108) != 0LL)),
            *DxClipShape,
            0LL,
            v35);
    CShapePtr::Release((CShapePtr *)&v41);
    if ( (v11 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v11, 0x57Fu, 0LL);
    }
    else
    {
LABEL_54:
      v38 = CVisual::RenderContent(this, (struct CDrawingContext *)a2, a3);
      v11 = v38;
      if ( v38 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x582u, 0LL);
    }
    return v11;
  }
  while ( 1 )
  {
    v25 = *(_QWORD *)(v24 + 8 * v22);
    v26 = Flink ? *((_DWORD *)Flink + 6) : 0;
    v27 = v25 ? (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v25 + 56) + 8LL) + v25 + 56) : 0LL;
    v28 = CWindowNode::RenderImage(
            this,
            (struct CDrawingContext *)a2,
            Flink,
            v27,
            *((const struct CShape **)this + 113),
            (struct _MARGINS *)((char *)this + 820),
            v26);
    v11 = v28;
    if ( v28 < 0 )
      break;
    v24 = *(_QWORD *)v23;
    if ( ++v22 >= (unsigned __int64)((__int64)(*(_QWORD *)(v23 + 8) - *(_QWORD *)v23) >> 3) )
      goto LABEL_41;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x566u, 0LL);
  return v11;
}
