/*
 * XREFs of ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005FCDC
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1800312D4 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18005FC50 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801ABA60 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180032504 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005FEDC (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@AEAAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x18005FF48 (-FindExistingCachedTarget@CCachedVisualImage@@AEAAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x180060030 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180060120 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800605C0 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180060600 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800CCF58 (-CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800D4910 (--$_Emplace_reallocate@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCach.c)
 *     ??_GCCachedTarget@CCachedVisualImage@@QEAAPEAXI@Z @ 0x1800D7D70 (--_GCCachedTarget@CCachedVisualImage@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmap(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct IRenderTargetBitmap **a3)
{
  struct D2D_SIZE_U v6; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm0
  struct CCachedVisualImage::CCachedTarget **v9; // rcx
  struct CCachedVisualImage::CCachedTarget *v10; // rax
  struct CCachedVisualImage::CCachedTarget *v11; // rsi
  int CachedTarget; // eax
  unsigned int v13; // ebx
  struct CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  CCachedVisualImage::CCachedTarget *v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  CCachedVisualImage::CCachedTarget **v19; // rdx
  unsigned int v20; // edx
  int v21; // r9d
  unsigned int v22; // edx
  unsigned int v23; // [rsp+20h] [rbp-40h]
  struct D2D_SIZE_U v24; // [rsp+30h] [rbp-30h] BYREF
  struct IRenderTargetBitmap *v25; // [rsp+38h] [rbp-28h] BYREF
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF

  *a3 = 0LL;
  v25 = 0LL;
  if ( *((_DWORD *)this + 36) )
  {
    v13 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467263, 0x353u, 0LL);
    goto LABEL_15;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( *((_BYTE *)this + 1801) )
  {
    CCachedVisualImage::RemoveInvalidTargets(this, *(struct D2D_SIZE_U *)((char *)this + 1792));
    ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget(this, a2);
    if ( ExistingCachedTarget
      || (v9 = (struct CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 23),
          (__int64)(*((_QWORD *)this + 24) - (_QWORD)v9) >> 3)
      && (ExistingCachedTarget = *v9) != 0LL )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
        &v25,
        *((_QWORD *)ExistingCachedTarget + 1));
      v13 = 0;
      goto LABEL_14;
    }
    v23 = 875;
    goto LABEL_37;
  }
  CCachedVisualImage::GetSize((CCachedVisualImage *)((char *)this + 64));
  if ( !*((_QWORD *)this + 17) || (v6 = v24, !v24.width) || !v24.height )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((_QWORD *)this + 23);
    v23 = 888;
    goto LABEL_37;
  }
  if ( *((_BYTE *)this + 1802) )
  {
    *(_QWORD *)&v26 = 0LL;
    *((float *)&v26 + 3) = (float)(int)v24.height;
    *((float *)&v26 + 2) = (float)(int)v24.width;
  }
  else
  {
    v7 = *((_QWORD *)this + 13);
    if ( v7 )
      v8 = *(_OWORD *)(v7 + 56);
    else
      v8 = *(_OWORD *)((char *)this + 88);
    v26 = v8;
  }
  if ( (unsigned __int8)IsRectEmptyOrInvalid(&v26) )
  {
    v23 = 912;
LABEL_37:
    v21 = -2003304309;
    v13 = -2003304309;
    goto LABEL_38;
  }
  CCachedVisualImage::RemoveInvalidTargets(this, v24);
  v10 = CCachedVisualImage::FindExistingCachedTarget(this, a2);
  v24 = (struct D2D_SIZE_U)v10;
  v11 = v10;
  if ( v10 )
  {
    CachedTarget = CCachedVisualImage::CCachedTarget::Update(v10, &v26, *((unsigned int *)this + 42), a2);
    v13 = CachedTarget;
    if ( CachedTarget >= 0 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v25, *((_QWORD *)v11 + 1));
LABEL_14:
      *a3 = v25;
      v25 = 0LL;
      goto LABEL_15;
    }
    v23 = 922;
    goto LABEL_32;
  }
  CachedTarget = CCachedVisualImage::CreateCachedTarget(this, v6, a2, (struct CCachedVisualImage::CCachedTarget **)&v24);
  v13 = CachedTarget;
  if ( CachedTarget < 0 )
  {
    v23 = 932;
LABEL_32:
    v21 = CachedTarget;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, v21, v23, 0LL);
    goto LABEL_15;
  }
  v16 = (CCachedVisualImage::CCachedTarget *)v24;
  v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCachedVisualImage::CCachedTarget::Update)(
          v24,
          &v26,
          *((unsigned int *)this + 42),
          a2);
  v13 = v17;
  if ( v17 >= 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v25, *((_QWORD *)v16 + 1));
    v19 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
    if ( *((CCachedVisualImage::CCachedTarget ***)this + 25) == v19 )
    {
      std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::_Emplace_reallocate<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
        (char *)this + 184,
        v19,
        &v24);
      if ( v24 )
        CCachedVisualImage::CCachedTarget::`scalar deleting destructor'(
          *(CCachedVisualImage::CCachedTarget **)&v24,
          v20);
    }
    else
    {
      *v19 = v16;
      *((_QWORD *)this + 24) += 8LL;
    }
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x3AAu, 0LL);
  if ( v16 )
    CCachedVisualImage::CCachedTarget::`scalar deleting destructor'(v16, v22);
LABEL_15:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v25);
  return v13;
}
