/*
 * XREFs of ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180016D80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007EF08 (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180080610 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A2CC0 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800BBFC8 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1801C0770 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithEffects(CDropShadow **this, __int64 a2, __int128 *a3)
{
  int BoundsWithEffects; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  CDropShadow *v8; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 (__fastcall ***v12)(_QWORD, float *, __int128 *); // rcx
  int v13; // eax
  unsigned int v14; // ecx
  float v15[2]; // [rsp+30h] [rbp-50h] BYREF
  float v16; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF

  BoundsWithEffects = CVisual::GetBoundsWithEffects((CLayerVisual *)this);
  v7 = BoundsWithEffects;
  if ( BoundsWithEffects < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, BoundsWithEffects, 0xABu, 0LL);
    return v7;
  }
  v8 = this[77];
  if ( v8 )
  {
    v18 = 0LL;
    v17 = *((_QWORD *)v8 + 13);
    if ( CDropShadow::GetMaskForLayerVisualNoRef(v8) )
    {
      if ( CVisual::GetEffectiveSize((CVisual *)this, v15, &v16) )
      {
        v11 = *(_QWORD *)(v10 + 56);
        v15[1] = v16;
        v12 = (__int64 (__fastcall ***)(_QWORD, float *, __int128 *))(v10 + 56 + *(int *)(v11 + 8));
        v13 = (**v12)(v12, v15, &v18);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xBBu, 0LL);
          return v7;
        }
      }
    }
    else
    {
      v18 = *a3;
    }
    if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v18) )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v18);
      *((float *)&v18 + 1) = *((float *)&v18 + 1) + *((float *)&v17 + 1);
      *(float *)&v18 = *(float *)&v18 + *(float *)&v17;
      *((float *)&v18 + 2) = *((float *)&v18 + 2) + *(float *)&v17;
      *((float *)&v18 + 3) = *((float *)&v18 + 3) + *((float *)&v17 + 1);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v18);
    }
  }
  return v7;
}
