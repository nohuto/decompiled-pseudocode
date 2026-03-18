/*
 * XREFs of ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180067460
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066A10 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z @ 0x18008DDF4 (-SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18000EA84 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007D478 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180095A74 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A57F0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A8DF0 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800B6888 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CalculateRootBounds(CLayerVisual *this, __int64 a2)
{
  char v4; // si
  __int64 v5; // rax
  int v6; // xmm4_4
  int v7; // xmm5_4
  __int64 v8; // rcx
  int v10; // edx
  int BoundsSafe; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // xmm0_4
  CTransform3D *EffectInternal; // r14
  const struct CMILMatrix *Matrix; // rax
  int v17; // eax
  _OWORD v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v19; // [rsp+70h] [rbp-90h]
  _OWORD v20[4]; // [rsp+80h] [rbp-80h] BYREF
  int v21; // [rsp+C0h] [rbp-40h]
  __int128 v22; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v23; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v24; // [rsp+F0h] [rbp-10h] BYREF
  int v25; // [rsp+100h] [rbp+0h]
  int v26; // [rsp+104h] [rbp+4h]

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 91LL)
    && ((*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 224LL))(this) || *((_QWORD *)this + 77))
    && CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(this) )
  {
    v4 = 1;
  }
  v5 = *(_QWORD *)this;
  v22 = 0LL;
  (*(void (__fastcall **)(CLayerVisual *, char *, __int128 *))(v5 + 312))(this, (char *)this + 164, &v22);
  v6 = *((_DWORD *)this + 45);
  v7 = *((_DWORD *)this + 46);
  *(_OWORD *)a2 = v22;
  *(_DWORD *)(a2 + 16) = v6;
  *(_DWORD *)(a2 + 20) = v7;
  if ( (**((_DWORD **)this + 28) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
            EffectInternal,
            186LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
              EffectInternal,
              56LL) )
        goto LABEL_3;
      EffectInternal = (CTransform3D *)*((_QWORD *)EffectInternal + 10);
    }
    if ( EffectInternal )
    {
      Matrix = CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)((char *)this + 132));
      v20[0] = *(_OWORD *)Matrix;
      v20[1] = *((_OWORD *)Matrix + 1);
      v20[2] = *((_OWORD *)Matrix + 2);
      v20[3] = *((_OWORD *)Matrix + 3);
      v21 = *((_DWORD *)Matrix + 16);
      v17 = *((_DWORD *)this + 25);
      if ( !v17 || v17 == 3 || v4 )
      {
        v18[0] = _xmm;
        v18[1] = _xmm;
        v18[3] = _xmm;
        v18[2] = 0LL;
        v19 = 32095;
        CMILMatrix::Multiply((CMILMatrix *)v20, (const struct CMILMatrix *)v18);
      }
      CMILMatrix::Transform3DBoundsHelper<0>(v20, a2, a2);
    }
  }
LABEL_3:
  v8 = *((_QWORD *)this + 30);
  if ( !v8 )
    return 0LL;
  v10 = *((_DWORD *)this + 25);
  if ( v10 )
  {
    if ( v10 != 3 )
      return 0LL;
  }
  v23 = 0LL;
  BoundsSafe = CGeometry::GetBoundsSafe(v8, (char *)this + 132, &v23);
  v13 = BoundsSafe;
  if ( BoundsSafe < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, BoundsSafe, 0x6A7u, 0LL);
  }
  else
  {
    v14 = *(_DWORD *)(a2 + 16);
    v24 = v23;
    v26 = *(_DWORD *)(a2 + 20);
    v25 = v14;
    TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
      a2,
      &v24);
  }
  return v13;
}
