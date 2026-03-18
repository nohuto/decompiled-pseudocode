/*
 * XREFs of ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800D0250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800D0360 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800D0448 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800E8734 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithEffects(CVisual *this, __int64 a2, float *a3)
{
  int BoundsWithEffects; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  float v10; // xmm6_4
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, float *, __int128 *); // rcx
  int v14; // eax
  __int64 v15; // rcx
  float v16[2]; // [rsp+30h] [rbp-50h] BYREF
  float v17; // [rsp+38h] [rbp-48h] BYREF
  float v18[4]; // [rsp+40h] [rbp-40h]
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF

  BoundsWithEffects = CVisual::GetBoundsWithEffects(this);
  v7 = BoundsWithEffects;
  if ( BoundsWithEffects < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, BoundsWithEffects, 0xD3u);
    return v7;
  }
  v8 = *((_QWORD *)this + 91);
  if ( v8 )
  {
    v19 = 0LL;
    v10 = *(float *)(v8 + 88);
    *(_QWORD *)v18 = *(_QWORD *)(v8 + 96);
    if ( CDropShadow::GetMaskForLayerVisualNoRef((CDropShadow *)v8) )
    {
      if ( CVisual::GetEffectiveSize(this, v16, &v17) )
      {
        v12 = *(_QWORD *)(v11 + 64);
        v16[1] = v17;
        v13 = (__int64 (__fastcall ***)(_QWORD, float *, __int128 *))(v11 + 64 + *(int *)(v12 + 8));
        v14 = (**v13)(v13, v16, &v19);
        v7 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0xE3u);
          return v7;
        }
      }
    }
    else
    {
      v19 = *(_OWORD *)a3;
    }
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v19) )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v19, v10, v10);
      *((float *)&v19 + 1) = *((float *)&v19 + 1) + v18[1];
      *(float *)&v19 = *(float *)&v19 + v18[0];
      *((float *)&v19 + 2) = *((float *)&v19 + 2) + v18[0];
      *((float *)&v19 + 3) = *((float *)&v19 + 3) + v18[1];
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)&v19);
    }
  }
  return v7;
}
