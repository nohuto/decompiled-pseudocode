/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800480E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180016320 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180048770 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18004E810 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359137@@@details@wil@@QEAA_NXZ @ 0x1800EA148 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359137@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x180167390 (-AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180170188 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801C098C (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801F73BC (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F77D4 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderContent(CWindowNode *this, struct _LIST_ENTRY **a2, bool *a3)
{
  int v3; // r12d
  struct _LIST_ENTRY *v7; // r14
  struct CWindowOcclusionInfo *Flink; // rsi
  struct _LIST_ENTRY *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // r8d
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  __int64 v16; // rdx
  struct IBitmapResource *v17; // r9
  int v18; // r8d
  __int64 v19; // rdx
  struct IBitmapResource *v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // edx
  struct IBitmapResource *v27; // r9
  int v28; // edx
  struct IBitmapResource *v29; // r9
  __int64 v30; // rbx
  const struct ConfirmPresentHistoryToken *v31; // rax
  CCompositionSurfaceBitmap *v32; // rcx
  bool v33; // bl
  int v34; // ebx
  const struct CShape **DxClipShape; // rax
  int v36; // r9d
  const struct CShape **v37; // rax
  unsigned int v39; // [rsp+20h] [rbp-98h]
  struct _D3DCOLORVALUE v40; // [rsp+50h] [rbp-68h] BYREF
  __int128 v41; // [rsp+60h] [rbp-58h] BYREF

  v3 = 0;
  if ( (*((_BYTE *)this + 95) & 4) != 0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1129LL) )
    {
      v10 = CWindowNode::RenderBlackContent(this, (struct CDrawingContext *)a2);
      v12 = v10;
      if ( v10 < 0 )
      {
        v39 = 1359;
        goto LABEL_81;
      }
      *a3 = 1;
      return (unsigned int)v12;
    }
    *((_BYTE *)a2 + 5948) = 1;
  }
  v7 = a2[741];
  Flink = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v7->Flink[12].Blink)(v7) )
  {
    v9 = (struct _LIST_ENTRY *)((char *)this + 320);
LABEL_6:
    if ( v9 )
    {
      Flink = (struct CWindowOcclusionInfo *)v9[2].Flink;
      if ( !Flink )
      {
        Flink = (struct CWindowOcclusionInfo *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v9[1].Blink->Flink[22].Flink)(v9[1].Blink);
        v9[2].Flink = (struct _LIST_ENTRY *)Flink;
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
        v9 = i - 18;
        if ( i[2].Flink == v7 )
          goto LABEL_6;
      }
    }
  }
  if ( *((_QWORD *)this + 90) && !*((_BYTE *)this + 914) )
  {
    v10 = CWindowNode::EnsureEffectiveSpriteClip(this);
    v12 = v10;
    if ( v10 < 0 )
    {
      v39 = 1374;
LABEL_81:
      v36 = v10;
      goto LABEL_82;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 90) + 80LL))(
           *((_QWORD *)this + 90),
           LODWORD(a2[5][60].Blink)) )
    {
      v21 = *((_QWORD *)this + 90);
      v22 = 0LL;
      v23 = v21 + 432;
      if ( !v21 )
        v23 = 488LL;
      v24 = *(_QWORD *)v23;
      if ( (__int64)(*(_QWORD *)(v23 + 8) - *(_QWORD *)v23) >> 3 )
      {
        do
        {
          v25 = *(_QWORD *)(v24 + 8 * v22);
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_31359137>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2103c_31359137>::GetImpl'::`2'::impl) )
          {
            if ( Flink )
              v26 = *((_DWORD *)Flink + 6);
            else
              v26 = 0;
            if ( v25 )
              v27 = (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v25 + 56) + 8LL) + v25 + 56);
            else
              v27 = 0LL;
            v10 = CWindowNode::RenderImage(
                    this,
                    (struct CDrawingContext *)a2,
                    Flink,
                    v27,
                    *((const struct CShape **)this + 113),
                    (struct _MARGINS *)((char *)this + 820),
                    v26);
            v12 = v10;
            if ( v10 < 0 )
            {
              v39 = 1415;
              goto LABEL_81;
            }
          }
          else
          {
            if ( Flink )
              v28 = *((_DWORD *)Flink + 6);
            else
              v28 = 0;
            if ( v25 )
              v29 = (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v25 + 56) + 8LL) + v25 + 56);
            else
              v29 = 0LL;
            v10 = CWindowNode::RenderImage(
                    this,
                    (struct CDrawingContext *)a2,
                    Flink,
                    v29,
                    *((const struct CShape **)this + 113),
                    (struct _MARGINS *)((char *)this + 820),
                    v28,
                    0,
                    0,
                    0LL);
            v12 = v10;
            if ( v10 < 0 )
            {
              v39 = 1425;
              goto LABEL_81;
            }
          }
          v24 = *(_QWORD *)v23;
          ++v22;
        }
        while ( v22 < (__int64)(*(_QWORD *)(v23 + 8) - *(_QWORD *)v23) >> 3 );
      }
    }
    else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_31359137>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2103c_31359137>::GetImpl'::`2'::impl) )
    {
      if ( Flink )
        v13 = *((_DWORD *)Flink + 6);
      else
        v13 = 0;
      v16 = *((_QWORD *)this + 90);
      if ( v16 )
        v17 = (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v16 + 8) + 8LL) + v16 + 8);
      else
        v17 = 0LL;
      v10 = CWindowNode::RenderImage(
              this,
              (struct CDrawingContext *)a2,
              Flink,
              v17,
              *((const struct CShape **)this + 113),
              (struct _MARGINS *)((char *)this + 820),
              v13);
      v12 = v10;
      if ( v10 < 0 )
      {
        v39 = 1385;
        goto LABEL_81;
      }
    }
    else
    {
      if ( Flink )
        v18 = *((_DWORD *)Flink + 6);
      else
        v18 = 0;
      v19 = *((_QWORD *)this + 90);
      if ( v19 )
        v20 = (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v19 + 8) + 8LL) + v19 + 8);
      else
        v20 = 0LL;
      v10 = CWindowNode::RenderImage(
              this,
              (struct CDrawingContext *)a2,
              Flink,
              v20,
              *((const struct CShape **)this + 113),
              (struct _MARGINS *)((char *)this + 820),
              v18,
              0,
              0,
              0LL);
      v12 = v10;
      if ( v10 < 0 )
      {
        v39 = 1395;
        goto LABEL_81;
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 90) + 40LL))(*((_QWORD *)this + 90)) )
    {
      v30 = *((_QWORD *)this + 2);
      v31 = (const struct ConfirmPresentHistoryToken *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 90)
                                                                                         + 48LL))(*((_QWORD *)this + 90));
      v10 = FRAME_TIME_INFO::AddTokenForRenderContent(*(FRAME_TIME_INFO **)(v30 + 344), v31);
      v12 = v10;
      if ( v10 < 0 )
      {
        v39 = 1432;
        goto LABEL_81;
      }
    }
  }
  v32 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 108);
  if ( v32 )
  {
    if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v32) == 1 )
    {
      v33 = 1;
      v41 = *(_OWORD *)&CCompositionSurfaceBitmap::GetBorderColor(*((CCompositionSurfaceBitmap **)this + 108), &v40)->r;
    }
    else
    {
      v33 = 0;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_31359137>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2103c_31359137>::GetImpl'::`2'::impl) )
    {
      if ( Flink )
        v34 = *((_DWORD *)Flink + 8);
      else
        v34 = 0;
      DxClipShape = (const struct CShape **)CWindowNode::GetDxClipShape(this, &v40);
      v12 = CWindowNode::RenderImage(
              this,
              (struct CDrawingContext *)a2,
              Flink,
              (struct IBitmapResource *)((*((_QWORD *)this + 108) + 64LL) & -(__int64)(*((_QWORD *)this + 108) != 0LL)),
              *DxClipShape,
              0LL,
              v34);
      CShapePtr::~CShapePtr((CShapePtr *)&v40);
      if ( v12 < 0 )
      {
        v39 = 1453;
LABEL_74:
        v36 = v12;
LABEL_82:
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v36, v39, 0LL);
        return (unsigned int)v12;
      }
    }
    else
    {
      if ( Flink )
        v3 = *((_DWORD *)Flink + 8);
      v37 = (const struct CShape **)CWindowNode::GetDxClipShape(this, &v40);
      v12 = CWindowNode::RenderImage(
              this,
              (struct CDrawingContext *)a2,
              Flink,
              (struct IBitmapResource *)((*((_QWORD *)this + 108) + 64LL) & -(__int64)(*((_QWORD *)this + 108) != 0LL)),
              *v37,
              0LL,
              v3,
              !v33,
              v33,
              (struct _D3DCOLORVALUE *)((unsigned __int64)&v41 & -(__int64)v33));
      CShapePtr::~CShapePtr((CShapePtr *)&v40);
      if ( v12 < 0 )
      {
        v39 = 1465;
        goto LABEL_74;
      }
    }
  }
  v10 = CVisual::RenderContent(this, (struct CDrawingContext *)a2, a3);
  v12 = v10;
  if ( v10 < 0 )
  {
    v39 = 1469;
    goto LABEL_81;
  }
  return (unsigned int)v12;
}
