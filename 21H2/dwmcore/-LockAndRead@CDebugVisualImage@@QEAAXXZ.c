/*
 * XREFs of ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x1801FF930
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003D588 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180088480 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x18008C200 (--0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5DF4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801FE998 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x1802622DC (-Print@DwmDbg@@YAXQEBDZZ.c)
 */

void __fastcall CDebugVisualImage::LockAndRead(__m128i *this)
{
  __m128i v2; // xmm6
  bool IsInfinite; // al
  CDisplayManager *v4; // rcx
  float v5; // xmm0_4
  int v6; // edx
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm7_4
  float v13; // xmm1_4
  float v14; // xmm4_4
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r8
  char *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v22; // rbx
  struct IRenderTargetBitmap *v23; // [rsp+28h] [rbp-19h] BYREF
  __int128 v24; // [rsp+30h] [rbp-11h] BYREF
  __int64 v25; // [rsp+40h] [rbp-1h]
  char *v26; // [rsp+48h] [rbp+7h] BYREF
  char *v27[2]; // [rsp+50h] [rbp+Fh] BYREF

  v2 = _mm_loadu_si128((const __m128i *)CVisual::GetBounds(this[9].m128i_i64[0], this[11].m128i_i64[1]));
  *(__m128i *)v27 = v2;
  IsInfinite = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)v27);
  v4 = CDebugVisualImage::s_renderTargetSize;
  v5 = 0.0;
  v6 = HIDWORD(CDebugVisualImage::s_renderTargetSize);
  if ( IsInfinite )
  {
    v27[0] = 0LL;
    v7 = (float)SHIDWORD(CDebugVisualImage::s_renderTargetSize);
    v8 = (float)(int)CDebugVisualImage::s_renderTargetSize;
    v9 = 0.0;
    *((float *)&v27[1] + 1) = (float)SHIDWORD(CDebugVisualImage::s_renderTargetSize);
    *(float *)&v27[1] = (float)(int)CDebugVisualImage::s_renderTargetSize;
    v2 = *(__m128i *)v27;
  }
  else
  {
    v7 = *((float *)&v27[1] + 1);
    v8 = *(float *)&v27[1];
    v9 = *((float *)v27 + 1);
    v5 = *(float *)v27;
  }
  v10 = *(float *)&FLOAT_1_0;
  v11 = v8 - v5;
  this[6] = v2;
  v12 = (float)(int)v4;
  if ( v11 > (float)(int)v4 || (v13 = v7 - v9, (float)(v7 - v9) > (float)v6) )
  {
    v13 = v7 - v9;
    v14 = (float)(v7 - v9) / (float)v6;
    if ( (float)(v11 / v12) <= v14 )
      v10 = 1.0 / v14;
    else
      v10 = 1.0 / (float)(v11 / v12);
  }
  *(double *)&this[7].m128i_i64[1] = (float)(v11 * v10);
  *(double *)this[8].m128i_i64 = (float)(v13 * v10);
  CDisplayManager::GetPrimaryAdapterLuid(v4, (struct _LUID *)&v24);
  LODWORD(v25) = 0;
  *((_QWORD *)&v24 + 1) = DisplayId::None;
  BYTE4(v25) = 0;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 27));
  if ( PrimaryMonitorTarget )
  {
    v16 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, char **))(*(_QWORD *)PrimaryMonitorTarget + 96LL))(
            PrimaryMonitorTarget,
            v27);
    v24 = *(_OWORD *)v16;
    v25 = *(_QWORD *)(v16 + 16);
  }
  v23 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v23);
  if ( (int)CCachedVisualImage::GetRenderTargetBitmap(
              (struct D2D_SIZE_U *)this,
              (const struct RenderTargetInfo *)&v24,
              &v23) < 0 )
  {
    DwmDbg::DbgString::DbgString(v27, "0x%p", (const void *)this[9].m128i_i64[0]);
    v22 = v27[0];
    DwmDbg::Print((DwmDbg *)"Unable to render DebugCVI with root visual %s!\n", v27[0]);
    if ( v22 )
      DefaultHeap::Free(v22);
  }
  else
  {
    v17 = *(_QWORD *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v27, (const struct MilRectF *)&this[6]);
    DwmDbg::DbgString::DbgString(&v26, "0x%p", (const void *)this[9].m128i_i64[0]);
    v18 = v17;
    v19 = v26;
    DwmDbg::Print((DwmDbg *)"Successfully rendered DebugCVI with root visual %s and bounds [%s]!\n", v26, v18);
    if ( v19 )
      DefaultHeap::Free(v19);
    if ( v27[0] )
      DefaultHeap::Free(v27[0]);
    v20 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v23 + 64LL))(v23);
    v21 = *(int *)(*(_QWORD *)(v20 + 8) + 16LL) + v20 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 24LL))(v21, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
}
