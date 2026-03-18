/*
 * XREFs of ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5C00
 * Callers:
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B8310 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5A9C (-AdjustContentWorldBounds@CVisual@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5DA4 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ @ 0x1800B7358 (-GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRects(CVisual *this, __int64 a2, __int64 a3, __int64 a4, float *a5)
{
  unsigned int v8; // esi
  struct CMergedDirtyRect *AdditionalDirtyRects; // rax
  struct CMergedDirtyRect *v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm1_4
  unsigned int v25; // [rsp+30h] [rbp-40h] BYREF
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  __int128 v27; // [rsp+40h] [rbp-30h] BYREF
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF

  v8 = 0;
  AdditionalDirtyRects = CVisual::GetAdditionalDirtyRects(this);
  v10 = AdditionalDirtyRects;
  if ( AdditionalDirtyRects )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CMergedDirtyRect *))(*(_QWORD *)AdditionalDirtyRects + 32LL))(AdditionalDirtyRects) )
    {
      (*(void (__fastcall **)(struct CMergedDirtyRect *, unsigned int *, __int64 *))(*(_QWORD *)v10 + 24LL))(
        v10,
        &v25,
        &v26);
      v12 = 0;
      if ( v25 )
      {
        while ( 1 )
        {
          v27 = 0LL;
          v28 = *(_OWORD *)(v26 + 16LL * v12);
          CMILMatrix::Transform2DBoundsHelper<1>(a4, (__int64)&v28, (float *)&v27, v11);
          if ( CVisual::AdjustContentWorldBounds(this, (float *)&v27) )
          {
            if ( a5 )
            {
              v17 = *a5;
              v18 = *(float *)&v27;
              if ( *a5 > *(float *)&v27 )
              {
                *(float *)&v27 = *a5;
                v18 = v17;
              }
              v19 = a5[1];
              v20 = *((float *)&v27 + 1);
              if ( v19 > *((float *)&v27 + 1) )
              {
                *((float *)&v27 + 1) = a5[1];
                v20 = v19;
              }
              v21 = a5[2];
              v22 = *((float *)&v27 + 2);
              if ( *((float *)&v27 + 2) > v21 )
              {
                *((float *)&v27 + 2) = a5[2];
                v22 = v21;
              }
              v23 = a5[3];
              v24 = *((float *)&v27 + 3);
              if ( *((float *)&v27 + 3) > v23 )
              {
                *((float *)&v27 + 3) = a5[3];
                v24 = v23;
              }
              if ( v22 <= v18 || v24 <= v20 )
                v27 = 0uLL;
            }
            if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v27) )
            {
              LOBYTE(v13) = 1;
              v14 = CDirtyRegion::Add(a3, this, v13, &v27);
              v8 = v14;
              if ( v14 < 0 )
                break;
            }
          }
          if ( ++v12 >= v25 )
            return v8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0xE5Du);
      }
    }
  }
  return v8;
}
