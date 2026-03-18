/*
 * XREFs of ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18000E910
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18000E4E0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV-$TMil3DRect@M.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18000E880 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000EC78 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1801C3C60 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800A9A28 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::GetSourceInputBounds(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 (__fastcall ***v16)(_QWORD, __int64, __int64); // rcx
  int v17; // eax
  unsigned int v18; // ecx

  v4 = *(_DWORD *)(a1 + 136);
  v8 = DynArrayImpl<0>::Grow(a4, 16, v4, 1, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x342u, 0LL);
    return v10;
  }
  v11 = 0;
  *(_DWORD *)(a4 + 24) = v4;
  if ( v4 )
  {
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      v14 = *(_QWORD *)(v13 + *(_QWORD *)(a1 + 112));
      if ( v14 )
      {
        v16 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64))(v14 + 56 + *(int *)(*(_QWORD *)(v14 + 56) + 8LL));
        v17 = (**v16)(v16, a3, *(_QWORD *)a4 + 16LL * v11);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x349u, 0LL);
          return v10;
        }
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)a4 + v12) = *a2;
      }
      ++v11;
      v13 += 8LL;
      v12 += 16LL;
    }
    while ( v11 < v4 );
  }
  return v10;
}
