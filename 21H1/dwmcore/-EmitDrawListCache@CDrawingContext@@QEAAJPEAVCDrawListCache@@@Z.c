/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18004D5B4
 * Callers:
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18004D1E4 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x1800A8460 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18026259C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180050610 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18017CDAC (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x1801932B4 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x180193928 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(CDrawingContext *this, struct CDrawListCache *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  unsigned int v6; // edi
  int v7; // xmm6_4
  int v8; // eax
  bool v9; // r14
  void *v10; // r15
  ClipPlaneIterator *v11; // rbp
  int v12; // eax
  __int64 v13; // rcx
  int updated; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx

  v2 = 0;
  v4 = *((_DWORD *)this + 808);
  v6 = 0;
  if ( v4 )
    v7 = *(_DWORD *)(*((_QWORD *)this + 406) + 4LL * (unsigned int)(v4 - 1));
  else
    v7 = (int)FLOAT_1_0;
  if ( COERCE_FLOAT(v7 & _xmm) >= 0.0000011920929 )
  {
    v8 = *((_DWORD *)this + 102);
    v9 = 0;
    if ( v8 )
      v10 = (void *)(*((_QWORD *)this + 53) + 68LL * (unsigned int)(v8 - 1));
    else
      v10 = &CMILMatrix::Identity;
    if ( *((_QWORD *)this + 435) )
    {
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(this);
      v6 = updated;
      if ( updated >= 0 )
      {
        v11 = (CDrawingContext *)((char *)this + 3488);
        v9 = *((_BYTE *)this + 3488) == 0;
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0x378u, 0LL);
    }
    else
    {
      v11 = (CDrawingContext *)((char *)this + 3488);
      while ( 1 )
      {
LABEL_8:
        if ( v9 )
        {
          v17 = ClipPlaneIterator::UpdateClippingPlanes(v11);
          v6 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x384u, 0LL);
            goto LABEL_11;
          }
        }
        v12 = CDrawListCache::Render(a2, this, v10);
        v6 = v12;
        if ( v12 < 0 )
          break;
        if ( !v9 || !ClipPlaneIterator::HasMoreClipPlanes(v11) )
          goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x38Au, 0LL);
    }
  }
LABEL_11:
  if ( v6 != -2003304441 )
    return v6;
  return v2;
}
