/*
 * XREFs of ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800D0360
 * Callers:
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800D0250 (-GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5DF4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800E8734 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800F3278 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180204820 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18021351C (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNe.c)
 */

__int64 __fastcall CVisual::GetBoundsWithEffects(CLayerVisual *this, _OWORD *a2, float *a3)
{
  int v4; // ebx
  _DWORD *v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  unsigned int v13; // eax
  __int64 *v14; // rdi
  int Bounds; // eax
  __int64 v16; // rcx
  char v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  float v20; // [rsp+50h] [rbp+8h] BYREF
  float v21; // [rsp+54h] [rbp+Ch]
  float v22; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  *(_OWORD *)a3 = *a2;
  v7 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v7 & 0x400000) == 0 )
  {
    v8 = 0LL;
    goto LABEL_3;
  }
  v11 = (unsigned int)v7[1];
  v12 = v7 + 2;
  v13 = 0;
  if ( (_DWORD)v11 )
  {
    while ( *v12 != 10 )
    {
      ++v13;
      ++v12;
      if ( v13 >= (unsigned int)v11 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    if ( v13 >= (unsigned int)v11 )
    {
      v14 = 0LL;
      goto LABEL_9;
    }
  }
  v14 = (__int64 *)((char *)v7 + 8LL * v13 - (((_BYTE)v11 + 15) & 7) + v11 + 15);
LABEL_9:
  v8 = *v14;
LABEL_3:
  v9 = (*(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 216LL))(this);
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL))(v8, 59LL) )
    {
      Bounds = CFilterEffect::GetBounds(v8, a2, a3);
      v4 = Bounds;
      if ( Bounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, Bounds, 0x184Cu);
    }
  }
  else if ( v9 )
  {
    CLayerVisual::GetAutomaticBoundsExpansion(this);
    if ( !CVisual::GetEffectiveSize(this, &v20, &v22) && !v17 )
      goto LABEL_28;
    v18 = *(_QWORD *)this;
    v21 = v22;
    v19 = *(_QWORD *)(*(__int64 (**)(void))(v18 + 216))();
    if ( v19 )
      v4 = CEffectBrush::GetBounds(v19, a2, &v20, a3);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v4, 0x1860u);
    }
    else
    {
LABEL_28:
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a3) )
        *(_OWORD *)a3 = *a2;
    }
  }
  return (unsigned int)v4;
}
