/*
 * XREFs of ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18018F980
 * Callers:
 *     ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18018FDB0 (-RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000EB50 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18000EC50 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039EB0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18004BB94 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18004BD60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorTransformLayer::RenderLayer(CColorTransformLayer *this, struct CDrawingContext *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rax
  __int64 (__fastcall *v6)(__int64 *, __int64 *, _QWORD); // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int CachedEffectNoRef; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm7
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __m128 v19; // xmm6
  __int64 (__fastcall ***v20)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *); // rcx
  struct ID2D1Effect *v21; // rdi
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v35; // [rsp+20h] [rbp-E0h]
  struct ID2D1Effect *v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+44h] [rbp-BCh]
  __int128 v40; // [rsp+54h] [rbp-ACh]
  int v41; // [rsp+64h] [rbp-9Ch]
  _DWORD v42[15]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int32 v43; // [rsp+11Ch] [rbp+1Ch]
  __int32 v44; // [rsp+120h] [rbp+20h]
  unsigned __int32 v45; // [rsp+124h] [rbp+24h]
  unsigned __int32 v46; // [rsp+128h] [rbp+28h]
  unsigned __int32 v47; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+130h] [rbp+30h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 1);
  v37 = 0LL;
  v36 = 0LL;
  v41 = 0;
  v4 = *v2;
  v39 = 0LL;
  v40 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v4 + 72);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v37);
  v7 = v6(v2, &v37, 0LL);
  v9 = v7;
  if ( v7 < 0 )
  {
    v35 = 65;
    goto LABEL_21;
  }
  CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*((_QWORD *)a2 + 5) + 16LL, 0, &v36);
  v9 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, CachedEffectNoRef, 0x44u, 0LL);
    goto LABEL_22;
  }
  v38 = 10;
  *(_QWORD *)&v39 = 0x1FF000000LL;
  v7 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v38, 1);
  v9 = v7;
  if ( v7 < 0 )
  {
    v35 = 83;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v35, 0LL);
    goto LABEL_22;
  }
  v12 = *((_QWORD *)this + 15);
  v13 = *((_QWORD *)this + 1);
  v14 = *(__m128 *)(v12 + 56);
  v15 = *(__m128 *)(v12 + 72);
  v16 = *(__m128 *)(v12 + 136);
  v17 = *(__m128 *)(v12 + 88);
  v18 = *(__m128 *)(v12 + 104);
  v19 = *(__m128 *)(v12 + 120);
  v42[0] = v14.m128_i32[0];
  v42[1] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
  v42[4] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
  v42[8] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
  v42[11] = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
  v42[2] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
  v42[14] = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
  v42[5] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
  v42[7] = v17.m128_i32[0];
  v42[10] = v18.m128_i32[0];
  v42[13] = v19.m128_i32[0];
  v44 = v16.m128_i32[0];
  v45 = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
  v46 = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
  v42[3] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
  v42[6] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  v42[9] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  v42[12] = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
  v47 = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
  v43 = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  v20 = (__int64 (__fastcall ***)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(v13
                                                                          + 8
                                                                          + *(int *)(*(_QWORD *)(v13 + 8) + 12LL));
  if ( *(_DWORD *)((**v20)(v20, &v48) + 4) == 3 )
  {
    v43 = 0;
    v47 = (unsigned int)FLOAT_1_0;
  }
  v21 = v36;
  v22 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _DWORD *, int))(*(_QWORD *)v36 + 72LL))(
          v36,
          0LL,
          0LL,
          v42,
          80);
  v9 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x7Cu, 0LL);
  }
  else
  {
    LODWORD(v36) = 2;
    v24 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v21 + 72LL))(
            v21,
            1LL,
            0LL,
            &v36,
            4);
    v9 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x7Fu, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v21 + 112LL))(
        v21,
        0LL,
        v37,
        1LL);
      if ( g_LockAndReadLayer )
      {
        v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
        v27 = *(int *)(*(_QWORD *)(v26 + 8) + 16LL) + v26 + 8;
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v27 + 24LL))(
          v27,
          -(__int64)(a2 != 0LL) & ((unsigned __int64)a2 + 24));
      }
      v28 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
      v29 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
      v48.Ptr = 0LL;
      v48.Size = _mm_cvtepi32_ps(v28).m128_u32[0];
      v30 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
      v48.Reserved = _mm_cvtepi32_ps(v29).m128_u32[0];
      *(float *)v29.m128i_i32 = (float)*((int *)this + 5);
      LODWORD(v36) = _mm_cvtepi32_ps(v30).m128_u32[0];
      HIDWORD(v36) = v29.m128i_i32[0];
      v31 = CDrawingContext::FillEffect(a2, v21, (const struct D2D_RECT_F *)&v48, (const struct D2D_POINT_2F *)&v36, 1);
      v9 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x99u, 0LL);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McGenEventWrite_EventWriteTransfer(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop,
          v33,
          1u,
          &v48);
      }
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v21 + 112LL))(
        v21,
        0LL,
        0LL,
        1LL);
    }
  }
  CDrawingContext::PopRenderOptionsInternal(a2, 1);
LABEL_22:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v37);
  return v9;
}
