/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800941F8
 * Callers:
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180068ADC (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CDF0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180093DB4 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802619FC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18008D4E0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?HasBspCurrentPolygon@CDrawingContext@@QEBA_NXZ @ 0x18008D818 (-HasBspCurrentPolygon@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008D82C (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsAnyHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x18008D854 (-IsAnyHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3161392440@@@details@wil@@QEAA_NXZ @ 0x1800EBD14 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3161392440@@@details@wil@@QEAA_NX.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x180178A1C (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18018F494 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18018FB08 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(CDrawingContext *this, struct CDrawListCache *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v6; // edi
  float v7; // xmm6_4
  char IsEnabled; // al
  bool v9; // r14
  CMatrixStack *v10; // rcx
  const struct CMILMatrix *TopByReference; // rax
  CDrawingContext *v12; // rcx
  int updated; // eax
  __int64 v14; // rcx
  ClipPlaneIterator *v15; // rbp
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  float *v20; // r15
  CDrawingContext *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  ClipPlaneIterator *v24; // rbp
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _OWORD v30[4]; // [rsp+30h] [rbp-78h] BYREF
  int v31; // [rsp+70h] [rbp-38h]

  v2 = 0;
  v3 = *((_DWORD *)this + 808);
  v6 = 0;
  if ( v3 )
    v7 = *(float *)(*((_QWORD *)this + 406) + 4LL * (unsigned int)(v3 - 1));
  else
    v7 = *(float *)&FLOAT_1_0;
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) >= 0.0000011920929 )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_3161392440>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3161392440>::GetImpl'::`2'::impl);
    v9 = 0;
    v10 = (CDrawingContext *)((char *)this + 408);
    if ( IsEnabled )
    {
      TopByReference = CMatrixStack::GetTopByReference(v10);
      v30[0] = *(_OWORD *)TopByReference;
      v30[1] = *((_OWORD *)TopByReference + 1);
      v30[2] = *((_OWORD *)TopByReference + 2);
      v30[3] = *((_OWORD *)TopByReference + 3);
      v31 = *((_DWORD *)TopByReference + 16);
      if ( CComposition::IsAnyHeatMapEnabled(g_pComposition) )
        v7 = *(float *)&FLOAT_1_0;
      if ( !CDrawingContext::HasBspCurrentPolygon(this) )
      {
        v15 = (CDrawingContext *)((char *)this + 3488);
        goto LABEL_13;
      }
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(v12);
      v6 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, updated, 0x38Fu, 0LL);
      }
      else
      {
        v15 = (CDrawingContext *)((char *)this + 3488);
        v9 = *((_BYTE *)this + 3488) == 0;
        while ( 1 )
        {
LABEL_13:
          if ( v9 )
          {
            v16 = ClipPlaneIterator::UpdateClippingPlanes(v15);
            v6 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x39Bu, 0LL);
              goto LABEL_36;
            }
          }
          v18 = CDrawListCache::Render((__int64)a2, this, (float *)v30, v7);
          v6 = v18;
          if ( v18 < 0 )
            break;
          if ( !v9 || !ClipPlaneIterator::HasMoreClipPlanes(v15) )
            goto LABEL_36;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3A1u, 0LL);
      }
    }
    else
    {
      v20 = (float *)CMatrixStack::GetTopByReference(v10);
      if ( CComposition::IsAnyHeatMapEnabled(g_pComposition) )
        v7 = *(float *)&FLOAT_1_0;
      if ( !CDrawingContext::HasBspCurrentPolygon(this) )
      {
        v24 = (CDrawingContext *)((char *)this + 3488);
        goto LABEL_28;
      }
      v22 = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(v21);
      v6 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x3B5u, 0LL);
      }
      else
      {
        v24 = (CDrawingContext *)((char *)this + 3488);
        v9 = *((_BYTE *)this + 3488) == 0;
        while ( 1 )
        {
LABEL_28:
          if ( v9 )
          {
            v25 = ClipPlaneIterator::UpdateClippingPlanes(v24);
            v6 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x3C1u, 0LL);
              goto LABEL_36;
            }
          }
          v27 = CDrawListCache::Render((__int64)a2, this, v20, v7);
          v6 = v27;
          if ( v27 < 0 )
            break;
          if ( !v9 || !ClipPlaneIterator::HasMoreClipPlanes(v24) )
            goto LABEL_36;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x3C7u, 0LL);
      }
    }
  }
LABEL_36:
  if ( v6 != -2003304441 )
    return v6;
  return v2;
}
