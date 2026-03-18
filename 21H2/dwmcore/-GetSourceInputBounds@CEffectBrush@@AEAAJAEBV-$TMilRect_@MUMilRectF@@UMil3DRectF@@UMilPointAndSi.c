/*
 * XREFs of ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x180213630
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1802131C8 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV-$TMil3DRect@M.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18021351C (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18021374C (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800894E4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::GetSourceInputBounds(__int64 a1, _OWORD *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // edi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 (__fastcall ***v15)(_QWORD, __int64, __int64); // rcx
  int v16; // eax
  __int64 v17; // rcx

  v4 = *(_DWORD *)(a1 + 144);
  v8 = DynArrayImpl<0>::Grow(a4, 0x10u, v4, 1, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x346u);
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
      v14 = *(_QWORD *)(v13 + *(_QWORD *)(a1 + 120));
      if ( v14 )
      {
        v15 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64))(v14 + 64 + *(int *)(*(_QWORD *)(v14 + 64) + 8LL));
        v16 = (**v15)(v15, a3, *(_QWORD *)a4 + 16LL * v11);
        v10 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x34Du);
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
