/*
 * XREFs of ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A2CC0
 * Callers:
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180016D80 (-GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18000776C (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x180007C94 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18001017C (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800A2DD8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800BBFC8 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C22D4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetBoundsWithEffects(CLayerVisual *this, __int128 *a2, __int128 *a3)
{
  int v3; // ebx
  struct CEffect *EffectInternal; // rdi
  int Bounds; // eax
  __int64 v10; // rcx
  char v11; // r9
  __int64 (*v12)(void); // rax
  __int64 v13; // rcx
  float v14; // [rsp+50h] [rbp+8h] BYREF
  float v15; // [rsp+54h] [rbp+Ch]
  float v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = *a2;
  if ( (**((_DWORD **)this + 28) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           59LL) )
    {
      Bounds = CFilterEffect::GetBounds((__int64)EffectInternal, a2, (__int64)a3);
      v3 = Bounds;
      if ( Bounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Bounds, 0x175Du, 0LL);
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 232LL))(this) )
  {
    CLayerVisual::GetAutomaticBoundsExpansion(this);
    if ( !CVisual::GetEffectiveSize(this, &v14, &v16) && !v11 )
      goto LABEL_18;
    v12 = *(__int64 (**)(void))(*(_QWORD *)this + 240LL);
    v15 = v16;
    v13 = *(_QWORD *)v12();
    if ( v13 )
      v3 = CEffectBrush::GetBounds(v13, a2, (__int64)&v14, a3);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v3, 0x1771u, 0LL);
    }
    else
    {
LABEL_18:
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a3) )
        *a3 = *a2;
    }
  }
  return (unsigned int)v3;
}
