/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18008B8F4
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18008B768 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180011C78 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C8EC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18002F524 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18004D8A0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18004EDE4 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CleanTree@CDesktopTree@@UEAAJXZ @ 0x18006A480 (-CleanTree@CDesktopTree@@UEAAJXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006A6C4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18008BBEC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18008F790 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAPEAV1@@Z @ 0x180090C04 (-Create@CDrawingContext@@SAJPEAPEAV1@@Z.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D2B04 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD3F0 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  CDrawingContext *v1; // rbx
  COcclusionContext *v3; // r12
  CDesktopTree *v4; // r14
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 v7; // rcx
  unsigned __int8 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, __int128 *, char *); // rbx
  struct IDeviceTarget *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  CRenderTargetBitmap *v34; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v35[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v36; // [rsp+88h] [rbp-80h]
  _BYTE v37[64]; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+D8h] [rbp-30h]
  __int128 v39; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-10h] BYREF
  __int128 *v41; // [rsp+100h] [rbp-8h]
  __int128 v42; // [rsp+108h] [rbp+0h] BYREF
  int v43; // [rsp+118h] [rbp+10h]
  int v44; // [rsp+11Ch] [rbp+14h]

  v1 = 0LL;
  v40 = 0LL;
  v3 = 0LL;
  v35[0] = _xmm;
  v4 = 0LL;
  v35[2] = _xmm;
  v35[1] = _xmm;
  v39 = 0LL;
  v36 = 32085;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 417));
  v35[3] = _xmm;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 418));
  v7 = *((_QWORD *)this + 6);
  v34 = 0LL;
  v38 = 0;
  v8 = *(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 200LL);
  LODWORD(v41) = _mm_cvtepi32_ps(v5).m128_u32[0];
  HIDWORD(v41) = _mm_cvtepi32_ps(v6).m128_u32[0];
  if ( v8(v7) )
    v4 = (CDesktopTree *)*((_QWORD *)this + 6);
  CComposition::ShowHideCursors(g_pComposition, 0);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 414) - 1.0) & _xmm) >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)v35, *((float *)this + 414), *((float *)this + 414), 1.0);
  CMILMatrix::Translate(
    (CMILMatrix *)v35,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 415)) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 416)) ^ _xmm));
  v9 = (_QWORD *)*((_QWORD *)this + 6);
  if ( *(_BYTE *)(v9[7] + 88LL) )
  {
    if ( v4 )
    {
      v25 = *((_QWORD *)v4 + 2) + 520LL;
      AcquireSRWLockExclusive((PSRWLOCK)v25);
      *(_DWORD *)(v25 + 8) = GetCurrentThreadId();
      v12 = CDesktopTree::CleanTree(v4);
      v26 = *((_QWORD *)v4 + 2) + 520LL;
      *(_DWORD *)(v26 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v26);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v12, 0x184u, 0LL);
        goto LABEL_18;
      }
    }
    else
    {
      v28 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 208LL))(v9);
      v12 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x188u, 0LL);
        goto LABEL_18;
      }
    }
  }
  v10 = CDrawingContext::Create(&v34);
  v12 = v10;
  if ( v10 >= 0 )
  {
    *((_BYTE *)g_pComposition + 1129) = 1;
    if ( CMILMatrix::SetToInverse((CMILMatrix *)v37, (const struct CMILMatrix *)v35) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v37, (__int64)&v40, (float *)&v39);
      v13 = *((_QWORD *)this + 6);
      v40 = 1LL;
      v14 = *(int (__fastcall **)(__int64, __int128 *, char *))(*(_QWORD *)v13 + 216LL);
      v41 = &v39;
      gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>((__int64 *)&v42, &v40);
      if ( v14(v13, &v42, (char *)this + 72) >= 0 )
        v3 = (CaptureBitsResponse *)((char *)this + 72);
    }
    else
    {
      v39 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v15 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
    v1 = v34;
    v16 = CDrawingContext::BeginFrame(v34, v15, (const struct CMILMatrix *)v35, &stru_1802ADAD8, 0LL);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1A5u, 0LL);
    }
    else
    {
      ++dword_180349278;
      v18 = *((_QWORD *)this + 6);
      v43 = 0;
      v44 = 0;
      v42 = v39;
      v19 = CDrawingContext::DrawVisualTree(v1, v18, (__int64)&v42, v3, 2, 0);
      v12 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1AEu, 0LL);
      }
      else
      {
        if ( !v4
          || (v21 = *((_QWORD *)v4 + 739)) == 0
          || (v30 = CComposeTop::FullRender(v21, v1, v35, &v39), v12 = v30, v30 >= 0) )
        {
          v22 = CDrawingContext::EndFrame((CD3DDevice **)v1);
          v12 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1C1u, 0LL);
          }
          else if ( g_LockAndReadOffscreenTarget )
          {
            v32 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
            v33 = *(int *)(*(_QWORD *)(v32 + 8) + 16LL) + v32 + 8;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 24LL))(
              v33,
              ((unsigned __int64)v1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64));
          }
          goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1BCu, 0LL);
      }
      CDrawingContext::EndFrame((CD3DDevice **)v1);
    }
LABEL_17:
    *((_BYTE *)g_pComposition + 1129) = 0;
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x18Cu, 0LL);
  v1 = v34;
LABEL_18:
  CComposition::RestoreCursors(g_pComposition);
  if ( v1 )
    CRenderTargetBitmap::Release(v1);
  return (unsigned int)v12;
}
