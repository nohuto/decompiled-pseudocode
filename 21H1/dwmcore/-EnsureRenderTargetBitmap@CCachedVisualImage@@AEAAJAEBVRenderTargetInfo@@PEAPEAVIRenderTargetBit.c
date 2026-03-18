/*
 * XREFs of ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800341CC
 * Callers:
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180034140 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x18008D33C (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801AF8F0 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180033B30 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033C58 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180033C94 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x1800343CC (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@AEAAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180034438 (-FindExistingCachedTarget@CCachedVisualImage@@AEAAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x180034520 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18008E7E4 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800C2318 (-CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800C94D4 (--$_Emplace_reallocate@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCach.c)
 *     ??_GCCachedTarget@CCachedVisualImage@@QEAAPEAXI@Z @ 0x1800CB9D0 (--_GCCachedTarget@CCachedVisualImage@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmap(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct IRenderTargetBitmap **a3)
{
  __int64 v6; // rdx
  struct D2D_SIZE_U v7; // rbx
  __int64 v8; // rax
  __int128 v9; // xmm0
  struct CCachedVisualImage::CCachedTarget **v10; // rcx
  struct CCachedVisualImage::CCachedTarget *v11; // rax
  struct CCachedVisualImage::CCachedTarget *v12; // rsi
  int CachedTarget; // eax
  unsigned int v14; // ebx
  struct CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  CCachedVisualImage::CCachedTarget *v17; // rsi
  int v18; // eax
  __int64 v19; // rcx
  CCachedVisualImage::CCachedTarget **v20; // rdx
  unsigned int v21; // edx
  int v22; // r9d
  unsigned int v23; // edx
  unsigned int v24; // [rsp+20h] [rbp-40h]
  struct D2D_SIZE_U v25; // [rsp+30h] [rbp-30h] BYREF
  struct IRenderTargetBitmap *v26; // [rsp+38h] [rbp-28h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF

  *a3 = 0LL;
  v26 = 0LL;
  if ( *((_DWORD *)this + 36) )
  {
    v14 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467263, 0x353u, 0LL);
    goto LABEL_15;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( *((_BYTE *)this + 1801) )
  {
    CCachedVisualImage::RemoveInvalidTargets(this, *(struct D2D_SIZE_U *)((char *)this + 1792));
    ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget(this, a2);
    if ( ExistingCachedTarget
      || (v10 = (struct CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 23),
          (__int64)(*((_QWORD *)this + 24) - (_QWORD)v10) >> 3)
      && (ExistingCachedTarget = *v10) != 0LL )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
        &v26,
        *((_QWORD *)ExistingCachedTarget + 1));
      v14 = 0;
      goto LABEL_14;
    }
    v24 = 875;
    goto LABEL_37;
  }
  CCachedVisualImage::GetSize((CCachedVisualImage *)((char *)this + 64), (__int64)&v25);
  if ( !*((_QWORD *)this + 17) || (v7 = v25, !v25.width) || !v25.height )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((char *)this + 184, v6);
    v24 = 888;
    goto LABEL_37;
  }
  if ( *((_BYTE *)this + 1802) )
  {
    *(_QWORD *)&v27 = 0LL;
    *((float *)&v27 + 3) = (float)(int)v25.height;
    *((float *)&v27 + 2) = (float)(int)v25.width;
  }
  else
  {
    v8 = *((_QWORD *)this + 13);
    if ( v8 )
      v9 = *(_OWORD *)(v8 + 56);
    else
      v9 = *(_OWORD *)((char *)this + 88);
    v27 = v9;
  }
  if ( IsRectEmptyOrInvalid((float *)&v27) )
  {
    v24 = 912;
LABEL_37:
    v22 = -2003304309;
    v14 = -2003304309;
    goto LABEL_38;
  }
  CCachedVisualImage::RemoveInvalidTargets(this, v7);
  v11 = CCachedVisualImage::FindExistingCachedTarget(this, a2);
  v25 = (struct D2D_SIZE_U)v11;
  v12 = v11;
  if ( v11 )
  {
    CachedTarget = CCachedVisualImage::CCachedTarget::Update((__int64)v11, &v27, *((_DWORD *)this + 42), (__int64)a2);
    v14 = CachedTarget;
    if ( CachedTarget >= 0 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v26, *((_QWORD *)v12 + 1));
LABEL_14:
      *a3 = v26;
      v26 = 0LL;
      goto LABEL_15;
    }
    v24 = 922;
    goto LABEL_32;
  }
  CachedTarget = CCachedVisualImage::CreateCachedTarget(this, v7, a2, (struct CCachedVisualImage::CCachedTarget **)&v25);
  v14 = CachedTarget;
  if ( CachedTarget < 0 )
  {
    v24 = 932;
LABEL_32:
    v22 = CachedTarget;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, v22, v24, 0LL);
    goto LABEL_15;
  }
  v17 = (CCachedVisualImage::CCachedTarget *)v25;
  v18 = CCachedVisualImage::CCachedTarget::Update(*(_QWORD *)&v25, &v27, *((_DWORD *)this + 42), (__int64)a2);
  v14 = v18;
  if ( v18 >= 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v26, *((_QWORD *)v17 + 1));
    v20 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
    if ( *((CCachedVisualImage::CCachedTarget ***)this + 25) == v20 )
    {
      std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::_Emplace_reallocate<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
        (char *)this + 184,
        v20,
        &v25);
      if ( v25 )
        CCachedVisualImage::CCachedTarget::`scalar deleting destructor'(
          *(CCachedVisualImage::CCachedTarget **)&v25,
          v21);
    }
    else
    {
      *v20 = v17;
      *((_QWORD *)this + 24) += 8LL;
    }
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3AAu, 0LL);
  if ( v17 )
    CCachedVisualImage::CCachedTarget::`scalar deleting destructor'(v17, v23);
LABEL_15:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
  return v14;
}
