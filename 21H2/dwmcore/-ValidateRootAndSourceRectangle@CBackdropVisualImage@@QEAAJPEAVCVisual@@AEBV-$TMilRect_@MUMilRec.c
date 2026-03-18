/*
 * XREFs of ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18008685C
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180086704 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001A384 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180057E64 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18005C3D4 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x18005CFF4 (-MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x180086C90 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x180086D94 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?GetMinSupportedMax2DTextureSize@CComposition@@QEBA?BIXZ @ 0x180086DD4 (-GetMinSupportedMax2DTextureSize@CComposition@@QEBA-BIXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AD06C (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F2610 (-SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CBackdropVisualImage::ValidateRootAndSourceRectangle(
        CCachedVisualImage *this,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        char *a5)
{
  bool v5; // zf
  char *v7; // r13
  __int64 v9; // rax
  unsigned int MinSupportedMax2DTextureSize; // eax
  __int64 v11; // r11
  char v12; // r15
  char v13; // r8
  char v14; // r12
  float v15; // xmm5_4
  float v16; // xmm7_4
  float v17; // xmm9_4
  float v18; // xmm5_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  struct D2D_RECT_F *v21; // r9
  __int64 v22; // r10
  unsigned int v23; // xmm5_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  CCachedVisualImage::CCachedTarget **v27; // rbx
  __int64 v28; // r15
  unsigned __int64 v29; // r14
  CCachedVisualImage::CCachedTarget *v30; // rsi
  void **v31; // rbx
  const char *v32; // rdx
  void **v33; // rax
  int v34; // eax
  unsigned int v35; // ebx
  float v36; // xmm2_4
  float v37; // xmm1_4
  char v38; // [rsp+28h] [rbp-61h]
  struct D2D_MATRIX_3X2_F v39; // [rsp+30h] [rbp-59h] BYREF
  __int128 v40; // [rsp+48h] [rbp-41h] BYREF
  struct D2D_RECT_F v41; // [rsp+58h] [rbp-31h] BYREF
  float v42; // [rsp+68h] [rbp-21h]
  float v43; // [rsp+6Ch] [rbp-1Dh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  v5 = *((_BYTE *)this + 1912) == 0;
  v7 = a5;
  *(_QWORD *)&v39.m[2][0] = a5;
  v9 = *((_QWORD *)g_pComposition + 27);
  if ( v5 )
  {
    v36 = *(float *)(v9 + 556);
    v37 = *(float *)(v9 + 560);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v36 - *((float *)this + 466)) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v37 - *((float *)this + 467)) & _xmm) > 0.0000011920929 )
    {
      *((float *)this + 466) = v36;
      *((float *)this + 467) = v37;
      *((float *)this + 469) = v36;
      *((float *)this + 470) = v37;
    }
  }
  MinSupportedMax2DTextureSize = CComposition::GetMinSupportedMax2DTextureSize(this);
  if ( *((_DWORD *)this + 468) != MinSupportedMax2DTextureSize )
    *((_DWORD *)this + 468) = MinSupportedMax2DTextureSize;
  v12 = 0;
  v38 = 0;
  if ( *((_QWORD *)this + 18) != v11
    || !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain((char *)this + 96)
    || v13 )
  {
    v34 = CBackdropVisualImage::SetRootAndSourceRectangle(this, v11, a3);
    v35 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\backdropvisualimage.cpp",
        (const char *)(unsigned int)v34);
      return v35;
    }
    v12 = 1;
    v38 = 1;
  }
  v14 = v12;
  *(_OWORD *)((char *)this + 1848) = *a3;
  LODWORD(v15) = *((_DWORD *)this + 25) ^ _xmm;
  LODWORD(v16) = *((_DWORD *)this + 24) ^ _xmm;
  v17 = v15 + *((float *)this + 463);
  v18 = v15 + *((float *)this + 465);
  v19 = v16 + *((float *)this + 462);
  v20 = v16 + *((float *)this + 464);
  *((float *)this + 463) = v17;
  *((float *)this + 465) = v18;
  *((float *)this + 462) = v19;
  *((float *)this + 464) = v20;
  if ( CBackdropVisualImage::IsValid(this) )
  {
    v24 = *((float *)this + 469);
    v25 = *((float *)this + 470);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v25 - 1.0) & _xmm) >= 0.000081380211 )
    {
      v41.top = 0.0;
      v41.right = 0.0;
      *(_QWORD *)&v39.m11 = __PAIR64__(LODWORD(v17), LODWORD(v19));
      *(_QWORD *)&v39.m[1][0] = __PAIR64__(v23, LODWORD(v20));
      v41.left = v24;
      v40 = *(_OWORD *)&v39.m11;
      v41.bottom = v25;
      v42 = 0.0 - (float)(v24 * 0.0);
      v43 = 0.0 - (float)(v25 * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)&v40, &v41, &v39, v21);
      v40 = *(_OWORD *)&v39.m11;
      *(_OWORD *)((char *)this + 1848) = *(_OWORD *)&v39.m11;
    }
    if ( v12 )
    {
      CCachedVisualImage::MarkAllTargetsDirty(this);
      *((_BYTE *)this + 1952) = 0;
    }
    else if ( (_BYTE)v21 )
    {
      v27 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
      v28 = *(_QWORD *)(v22 + 608);
      v29 = CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta & -(__int64)(*((_BYTE *)this + 1912) != 0);
      while ( v27 != *((CCachedVisualImage::CCachedTarget ***)this + 25) )
      {
        v30 = *v27;
        if ( CCachedVisualImage::CCachedTarget::IsValid(*v27) )
        {
          if ( v28 - *((_QWORD *)v30 + 5) > v29 )
          {
            CCachedVisualImage::CCachedTarget::MarkDirty(v30);
            v14 = 1;
          }
          ++v27;
        }
        else
        {
          v27 = *std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
                   (__int64)this + 192,
                   (CCachedVisualImage::CCachedTarget ***)&v39,
                   v27);
        }
      }
      v12 = v38;
      v7 = *(char **)&v39.m[2][0];
    }
  }
  if ( v7 )
    *v7 = v14;
  if ( v14 )
  {
    v31 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v39.m[2], &byte_18032C47F);
    v32 = "BVI-RealizationIsDirty-Updated";
    if ( !v12 )
      v32 = "BVI-RealizationIsDirty-NotUpdated";
    v33 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v39, v32);
    CBackdropVisualImage::LogEtwEvent((__int64)this, v33, v31);
  }
  return 0LL;
}
