/*
 * XREFs of ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801DF0D8
 * Callers:
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800BB300 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5DA4 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180113274 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::AddOverdrawToDirtyRegion(
        FastRegion::Internal::CRgnData ***this,
        struct CDirtyRegion *a2,
        const struct CMILMatrix *a3)
{
  unsigned int v3; // ebx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 i; // rax
  int v14; // eax
  FastRegion::Internal::CRgnData *v15; // rcx
  _DWORD v17[4]; // [rsp+30h] [rbp-89h]
  _BYTE v18[8]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-71h]
  _DWORD *v20; // [rsp+50h] [rbp-69h]
  __int64 v21; // [rsp+58h] [rbp-61h]
  int v22; // [rsp+60h] [rbp-59h]
  _OWORD v23[4]; // [rsp+70h] [rbp-49h] BYREF
  int v24; // [rsp+B0h] [rbp-9h]
  __int128 v25; // [rsp+C0h] [rbp+7h] BYREF
  _DWORD v26[4]; // [rsp+D0h] [rbp+17h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 13) == 3
     || *((_DWORD *)this + 13) == 4 && CDirectFlipInfo::RenderingRealizationChanged((CDirectFlipInfo *)this))
    && this[4] )
  {
    v7 = *(_OWORD *)a3;
    v8 = *((_OWORD *)a3 + 1);
    v24 = *((_DWORD *)a3 + 16);
    v23[0] = v7;
    v9 = *((_OWORD *)a3 + 2);
    v23[1] = v8;
    v10 = *((_OWORD *)a3 + 3);
    v23[2] = v9;
    v23[3] = v10;
    CMILMatrix::Invert((CMILMatrix *)v23, (__int64)a2, a3);
    FastRegion::Internal::CRgnData::BeginIterator(*this[4], (struct FastRegion::CRegion::Iterator *)v18);
    while ( (unsigned __int64)v20 < v19 )
    {
      v17[1] = *v20;
      v17[3] = v20[2];
      v12 = 2 * v22;
      v17[0] = *(_DWORD *)(v21 + 4 * v12);
      v17[2] = *(_DWORD *)(v21 + 4 * v12 + 4);
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v26[i] = (float)(int)v17[i];
      v25 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v23, (__int64)v26, (float *)&v25, v11);
      v14 = CDirtyRegion::Add((__int64)a2, 0LL, 0LL, (__int64)&v25);
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0LL, v14, 0x1BCu);
        return v3;
      }
      FastRegion::Internal::CRgnData::StepIterator(v15, (struct FastRegion::CRegion::Iterator *)v18);
    }
  }
  return v3;
}
