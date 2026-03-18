/*
 * XREFs of ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800934F0
 * Callers:
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180004DB0 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x180092FA0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?Initialize@CSubVisualTree@@MEAAJXZ @ 0x1802465F0 (-Initialize@CSubVisualTree@@MEAAJXZ.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008ECB8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D1448 (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800F32A8 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CalcRootBounds(CLayerVisual *this, __int64 a2)
{
  unsigned int v4; // r14d
  bool IsAutomaticBoundsToLocalSpaceEnabled; // si
  __int64 v6; // rax
  __int128 v7; // xmm0
  unsigned __int64 v8; // xmm1_8
  _DWORD *v9; // rax
  CGeometry *v10; // rcx
  int BoundsSafe; // eax
  __int64 v13; // rcx
  CTransform3D *EffectInternal; // rdi
  const struct CMILMatrix *Matrix; // rax
  _OWORD v16[4]; // [rsp+30h] [rbp-99h] BYREF
  char v17; // [rsp+70h] [rbp-59h]
  char v18; // [rsp+71h] [rbp-58h]
  _OWORD v19[4]; // [rsp+80h] [rbp-49h] BYREF
  int v20; // [rsp+C0h] [rbp-9h]
  __int128 v21; // [rsp+D0h] [rbp+7h] BYREF
  __int128 v22; // [rsp+E0h] [rbp+17h] BYREF

  v4 = 0;
  IsAutomaticBoundsToLocalSpaceEnabled = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 91LL)
    && ((*(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 216LL))(this) || *((_QWORD *)this + 91)) )
  {
    IsAutomaticBoundsToLocalSpaceEnabled = CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(this);
  }
  v6 = *(_QWORD *)this;
  v21 = 0LL;
  (*(void (__fastcall **)(CLayerVisual *, char *, __int128 *))(v6 + 304))(this, (char *)this + 172, &v21);
  v7 = v21;
  v8 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 47), (__m128)*((unsigned int *)this + 48)).m128_u64[0];
  *(_OWORD *)a2 = v21;
  *(_QWORD *)(a2 + 16) = v8;
  v9 = (_DWORD *)*((_QWORD *)this + 29);
  v22 = v7;
  if ( (*v9 & 0x400000) != 0 )
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
      EffectInternal = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
    }
    if ( EffectInternal )
    {
      Matrix = CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)((char *)this + 140));
      v19[0] = *(_OWORD *)Matrix;
      v19[1] = *((_OWORD *)Matrix + 1);
      v19[2] = *((_OWORD *)Matrix + 2);
      v19[3] = *((_OWORD *)Matrix + 3);
      v20 = *((_DWORD *)Matrix + 16);
      if ( !*((_DWORD *)this + 27) || *((_DWORD *)this + 27) == 3 || IsAutomaticBoundsToLocalSpaceEnabled )
      {
        v16[0] = _xmm;
        v16[3] = _xmm;
        v16[2] = 0LL;
        v16[1] = _xmm;
        v18 = v18 & 0xC0 | 0x17;
        v17 = 83;
        CMILMatrix::Multiply((CMILMatrix *)v19, (const struct CMILMatrix *)v16);
      }
      CMILMatrix::Transform3DBoundsHelper<0>(v19, a2, a2);
    }
  }
LABEL_3:
  v10 = (CGeometry *)*((_QWORD *)this + 31);
  if ( v10 && (*((_BYTE *)this + 102) & 2) == 0 && (!*((_DWORD *)this + 27) || *((_DWORD *)this + 27) == 3) )
  {
    v22 = 0LL;
    BoundsSafe = CGeometry::GetBoundsSafe(v10, (const struct D2D_SIZE_F *)((char *)this + 140), &v22);
    v4 = BoundsSafe;
    if ( BoundsSafe < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, BoundsSafe, 0x5F9u);
    else
      TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
        a2,
        &v22);
  }
  return v4;
}
