/*
 * XREFs of ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18009A920
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180097770 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180194320 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007FC60 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180080698 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008A238 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?HasClipBoundsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008A298 (-HasClipBoundsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x180097784 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1801018BC (_o_ceilf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ApplyRenderStateInternal(CDrawingContext *this, char a2)
{
  char v2; // di
  char *v3; // r14
  unsigned int v4; // r15d
  __int64 result; // rax
  int v7; // eax
  int v8; // eax
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  unsigned int v17; // r12d
  __int64 v18; // rbx
  __int64 v19; // r13
  int v20; // eax
  int v21; // ebx
  float v22; // xmm7_4
  int v23; // eax
  float v24; // xmm8_4
  int v25; // eax
  float v26; // xmm9_4
  int v27; // eax
  float v28; // xmm6_4
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rbx
  CMILRefCountImpl *v35; // rbx
  bool v36; // zf
  __int128 v37; // xmm0
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int128 v40; // xmm0
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  __int64 v44; // [rsp+30h] [rbp-99h]
  __int64 v45; // [rsp+30h] [rbp-99h]
  __m128 v46; // [rsp+40h] [rbp-89h]
  __int128 v47; // [rsp+50h] [rbp-79h] BYREF
  float v48; // [rsp+60h] [rbp-69h]
  __int128 v49; // [rsp+68h] [rbp-61h] BYREF
  __int64 v50; // [rsp+78h] [rbp-51h]

  v2 = 0;
  v3 = (char *)this + 864;
  v4 = 0;
  if ( *(_BYTE *)(88LL * (unsigned int)(*((_DWORD *)this + 222) - 1) + *((_QWORD *)this + 108) + 84) )
    v2 = a2;
  if ( !v2 )
  {
    v30 = CDrawingContext::FlushAllDeferredClipping(this);
    v4 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, v30, 0x1A2u);
      return v4;
    }
  }
  if ( !*((_BYTE *)this + 8041) )
    return v4;
  v7 = *((_DWORD *)v3 + 6);
  v49 = 0LL;
  if ( v7 && *(_DWORD *)(88LL * (unsigned int)(v7 - 1) + *(_QWORD *)v3) && (v8 = *((_DWORD *)v3 + 516)) != 0 )
  {
    v46 = *(__m128 *)(*((_QWORD *)v3 + 260) + 16LL * (unsigned int)(v8 - 1));
    LODWORD(v9) = *(_QWORD *)(*((_QWORD *)v3 + 260) + 16LL * (unsigned int)(v8 - 1) + 8);
    LODWORD(v10) = HIDWORD(*(_QWORD *)(*((_QWORD *)v3 + 260) + 16LL * (unsigned int)(v8 - 1)));
    v11 = v46.m128_f32[0];
    LODWORD(v12) = _mm_shuffle_ps(v46, v46, 255).m128_u32[0];
  }
  else
  {
    v12 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v9 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v10 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    LODWORD(v11) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v46 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v2 || !CScopedClipStack::HasClipBoundsInScope((CScopedClipStack *)v3) )
    goto LABEL_13;
  v47 = 0LL;
  CBaseClipStack::Top((unsigned int *)v3 + 524, &v47);
  if ( *(float *)&v47 > v11 )
  {
    v46.m128_i32[0] = v47;
    LODWORD(v11) = v47;
  }
  v41 = v10;
  if ( *((float *)&v47 + 1) > v10 )
  {
    v46.m128_i32[1] = DWORD1(v47);
    v10 = *((float *)&v47 + 1);
    v41 = *((float *)&v47 + 1);
  }
  v42 = v9;
  if ( v9 > *((float *)&v47 + 2) )
  {
    v46.m128_i32[2] = DWORD2(v47);
    v9 = *((float *)&v47 + 2);
    v42 = *((float *)&v47 + 2);
  }
  v43 = v12;
  if ( v12 > *((float *)&v47 + 3) )
  {
    v46.m128_i32[3] = HIDWORD(v47);
    v12 = *((float *)&v47 + 3);
    v43 = *((float *)&v47 + 3);
  }
  if ( v42 > v11 && v43 > v41 )
  {
LABEL_13:
    if ( v9 > v11 && v12 > v10 )
    {
      v13 = v10;
      *(_QWORD *)&v49 = __PAIR64__(LODWORD(v10), LODWORD(v11));
      v14 = v9;
      *((_QWORD *)&v49 + 1) = __PAIR64__(LODWORD(v12), LODWORD(v9));
      v15 = v11;
      v16 = v12;
      v17 = 0;
      goto LABEL_15;
    }
  }
  else
  {
    v12 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
    v46 = 0uLL;
  }
  v16 = *((float *)&v49 + 3);
  v17 = 1;
  v14 = *((float *)&v49 + 2);
  v13 = *((float *)&v49 + 1);
  v15 = *(float *)&v49;
LABEL_15:
  v18 = *((_QWORD *)this + 5);
  v19 = 0LL;
  v20 = *(_DWORD *)(v18 + 368);
  if ( v20 )
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 344) + 8LL * (unsigned int)(v20 - 1));
  if ( !*(_BYTE *)(v18 + 453)
    || *(_BYTE *)(v18 + 455)
    || v17 != *(_DWORD *)(v18 + 432)
    || v15 != *(float *)(v18 + 416)
    || v13 != *(float *)(v18 + 420)
    || v14 != *(float *)(v18 + 424)
    || v16 != *(float *)(v18 + 428) )
  {
    v32 = *(_QWORD *)(v18 + 152);
    if ( v32 )
    {
      if ( *(_QWORD *)(v18 + 160) )
      {
        CBatchOptimizer::Flush(*(CBatchOptimizer **)(v18 + 160));
        v32 = *(_QWORD *)(v18 + 152);
      }
      *(_DWORD *)(v32 + 52) = *(_DWORD *)(v18 + 48);
      *(_QWORD *)(v32 + 40) = 0LL;
      v44 = *(_QWORD *)(v18 + 152);
      *(_QWORD *)(v18 + 152) = 0LL;
      if ( v44 )
      {
        CD2DContext::EnsureBeginDraw((CD2DContext *)(v18 + 16));
        v33 = *(_QWORD *)(v18 + 224);
        v34 = v44;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 120LL))(v33, v44);
        v45 = v44 + 8;
        v35 = (CMILRefCountImpl *)(v34 + 16);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v35, 0xFFFFFFFF) == 1 )
        {
          CMILRefCountImpl::AddReference(v35);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 24LL))(v45);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v35, 0xFFFFFFFF) == 1 )
          {
            --*(_DWORD *)v35;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 16LL))(v45, 1LL);
          }
        }
        v11 = v46.m128_f32[0];
        v10 = v46.m128_f32[1];
        v9 = v46.m128_f32[2];
        v12 = v46.m128_f32[3];
      }
    }
    v36 = *(_BYTE *)(v19 + 73) == 0;
    v37 = v49;
    *(_DWORD *)(v19 + 68) = v17;
    *(_OWORD *)(v19 + 52) = v37;
    if ( !v36 )
    {
      v38 = *(_QWORD *)(v19 + 16);
      v49 = *(_OWORD *)&_xmm;
      v50 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v38 + 200) + 240LL))(*(_QWORD *)(v38 + 200), &v49);
      v39 = *(_QWORD *)(v38 + 208);
      *(_BYTE *)(v38 + 439) = 0;
      v40 = *(_OWORD *)(v19 + 52);
      *(_DWORD *)(v38 + 416) = v17;
      *(_OWORD *)(v38 + 400) = v40;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v39 + 80LL))(v39, v19 + 52, v17);
    }
    *(_BYTE *)(v19 + 72) = 1;
  }
  v21 = 0x7FFFFFFF;
  v22 = v11 - 0.5;
  LODWORD(v47) = 0;
  if ( v22 < -2147483600.0 )
  {
    v23 = 0x80000000;
  }
  else if ( v22 >= 2147483600.0 )
  {
    v23 = 0x7FFFFFFF;
  }
  else
  {
    v23 = (int)o_ceilf_0(v22);
  }
  v24 = v10 - 0.5;
  *((float *)&v47 + 1) = (float)v23;
  if ( v24 < -2147483600.0 )
  {
    v25 = 0x80000000;
  }
  else if ( v24 >= 2147483600.0 )
  {
    v25 = 0x7FFFFFFF;
  }
  else
  {
    v25 = (int)o_ceilf_0(v24);
  }
  v26 = v9 - 0.5;
  *((float *)&v47 + 2) = (float)v25;
  if ( v26 < -2147483600.0 )
  {
    v27 = 0x80000000;
  }
  else if ( v26 >= 2147483600.0 )
  {
    v27 = 0x7FFFFFFF;
  }
  else
  {
    v27 = (int)o_ceilf_0(v26);
  }
  v28 = v12 - 0.5;
  *((float *)&v47 + 3) = (float)v27;
  if ( v28 < -2147483600.0 )
  {
    v21 = 0x80000000;
  }
  else if ( v28 < 2147483600.0 )
  {
    v21 = (int)o_ceilf_0(v28);
  }
  *((_BYTE *)this + 8041) = 0;
  *((_OWORD *)this + 12) = v47;
  v48 = (float)v21;
  *((float *)this + 52) = (float)v21;
  if ( !v2 )
    return v4;
  v29 = *((_DWORD *)v3 + 6);
  if ( !v29 || !*(_DWORD *)(88LL * (unsigned int)(v29 - 1) + *(_QWORD *)v3 + 4) )
    return v4;
  result = v4;
  if ( *(_DWORD *)(112LL * (unsigned int)(*((_DWORD *)v3 + 234) - 1) + *((_QWORD *)v3 + 114) + 104) )
    *((_BYTE *)this + 8042) = 1;
  return result;
}
