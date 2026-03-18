/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008A438 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180098498 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x1801B3068 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?PushClipBounds@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800104B4 (-PushClipBounds@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_.c)
 *     ?PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800105E0 (-PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18006367C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800956F0 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180096690 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N@Z @ 0x180099090 (-PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatr.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18009AEB4 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800D5558 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x1800DF9B0 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x1801B78E0 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        CDrawingContext *this,
        __int128 *a2,
        __int64 a3,
        _BYTE *a4)
{
  unsigned int v4; // ebx
  __int128 *v6; // r13
  void *v8; // r12
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // r15d
  int v21; // eax
  int v22; // r12d
  char v23; // r15
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  int v27; // r14d
  int v28; // eax
  float v29; // xmm9_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm4_4
  int v33; // eax
  __int128 v34; // xmm3
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r8
  void (__fastcall ***v42)(_QWORD, void **); // rcx
  int v43; // r8d
  float v44; // xmm9_4
  float v45; // xmm8_4
  float v46; // xmm7_4
  float v47; // xmm6_4
  int v48; // eax
  __m128 v49; // xmm1
  float v50; // xmm5_4
  float v51; // xmm2_4
  float v52; // xmm3_4
  float v53; // xmm4_4
  int v54; // eax
  float v55; // xmm6_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  int v58; // eax
  float v59; // xmm2_4
  float v61; // xmm6_4
  bool v62; // zf
  const struct CVisual *v63; // rax
  unsigned int *v64; // r14
  __int64 v65; // rcx
  unsigned int v66; // eax
  unsigned int v67; // eax
  int v68; // eax
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rcx
  float v75; // xmm6_4
  int v76; // r15d
  __int64 v77; // rcx
  unsigned int v78; // eax
  unsigned int v79; // eax
  bool v80; // r15
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rcx
  __int128 *v84; // rax
  unsigned int v85; // xmm1_4
  int v86; // xmm0_4
  int v87; // xmm1_4
  int v88; // eax
  __int64 v89; // rcx
  void *v90; // rcx
  unsigned int v91; // r15d
  __int64 v92; // rcx
  int v93; // ebx
  unsigned __int64 v94; // rax
  void *v95; // rbx
  __int64 v96; // rcx
  unsigned int v97; // r12d
  int v98; // eax
  __int64 v99; // rcx
  int v100; // r14d
  unsigned __int64 v101; // rax
  void *v102; // rbx
  void *v103; // rbx
  HANDLE ProcessHeap; // rax
  unsigned int v105; // r14d
  int v106; // eax
  int v107; // ebx
  unsigned __int64 v108; // rax
  void *v109; // rbx
  __int64 v110; // rcx
  void *v111; // r14
  HANDLE v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rcx
  int v115; // eax
  __int64 v116; // rcx
  unsigned int v117; // r15d
  __int64 v118; // rcx
  int v119; // ebx
  unsigned __int64 v120; // rax
  void *v121; // rbx
  __int64 v122; // rcx
  void *v123; // r15
  HANDLE v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rcx
  void *v127; // r15
  HANDLE v128; // rax
  bool v129[8]; // [rsp+48h] [rbp-99h] BYREF
  void *v130; // [rsp+50h] [rbp-91h] BYREF
  _BYTE *lpMem; // [rsp+58h] [rbp-89h]
  void *lpMem_8[2]; // [rsp+60h] [rbp-81h] BYREF
  __m128 v133; // [rsp+70h] [rbp-71h] BYREF
  __m128 v134; // [rsp+80h] [rbp-61h]
  __int128 v135; // [rsp+90h] [rbp-51h] BYREF
  int v136; // [rsp+A0h] [rbp-41h]
  int v137; // [rsp+A4h] [rbp-3Dh]

  lpMem = a4;
  v4 = 0;
  v134.m128_u64[0] = (unsigned __int64)a2;
  v6 = a2;
  v8 = 0LL;
  v130 = 0LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
    {
      if ( CShapePtr::IsAxisAlignedRectangle((CShape **)(a3 + 8)) )
        *(_DWORD *)(a3 + 204) |= 1u;
      if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(a3 + 124)) )
        *(_DWORD *)(a3 + 204) |= 4u;
    }
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9
      && (*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 64LL))(v9, lpMem_8)
      && LODWORD(lpMem_8[0]) == 1 )
    {
      v10 = *(char *)(a3 + 188) >> 6;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
LABEL_8:
          if ( *(_BYTE *)(a3 + 208)
            && *(_BYTE *)(88LL * (unsigned int)(*((_DWORD *)this + 222) - 1) + *((_QWORD *)this + 108) + 84) )
          {
            v11 = *(_QWORD *)(a3 + 192);
            v133.m128_u64[1] = *(_QWORD *)a3;
            v133.m128_i32[0] = 2;
            v129[0] = 0;
            v12 = CScopedClipStack::PushCpuClipToScope((CDrawingContext *)((char *)this + 864), v11, (__int64)v129);
            v14 = v12;
            v4 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xC0Bu);
              goto LABEL_147;
            }
            v15 = *((unsigned int *)this + 85);
            v16 = *((_DWORD *)this + 84);
            lpMem_8[0] = 0LL;
            if ( v16 != (_DWORD)v15 )
              goto LABEL_12;
            v97 = 2 * v15;
            if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
            {
              v100 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, -2147024362, 0x64u);
              v4 = -2147024362;
            }
            else
            {
              if ( v97 <= 0x40 )
                v97 = 64;
              v98 = HrMalloc(0x10uLL, v97, lpMem_8);
              v100 = v98;
              if ( v98 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0LL, v98, 0x6Bu);
              }
              else
              {
                v101 = 16LL * *((unsigned int *)this + 84);
                if ( v101 <= 0xFFFFFFFF )
                {
                  v102 = lpMem_8[0];
                  memcpy_0(lpMem_8[0], *((const void **)this + 44), (unsigned int)v101);
                  DefaultHeap::Free(*((void **)this + 44));
                  v16 = *((_DWORD *)this + 84);
                  *((_DWORD *)this + 85) = v97;
                  *((_QWORD *)this + 44) = v102;
LABEL_12:
                  v4 = 0;
                  *(__m128 *)(*((_QWORD *)this + 44) + 16LL * v16) = v133;
                  v17 = *((_DWORD *)this + 90);
                  v18 = (unsigned int)++*((_DWORD *)this + 84);
                  if ( v17 <= (unsigned int)v18 )
                    v17 = *((_DWORD *)this + 84);
                  *((_DWORD *)this + 90) = v17;
                  goto LABEL_49;
                }
                v100 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0LL, -2147024362, 0x6Du);
              }
              v103 = lpMem_8[0];
              if ( lpMem_8[0] )
              {
                ProcessHeap = GetProcessHeap();
                HeapFree(ProcessHeap, 0, v103);
              }
              v4 = v100;
              if ( v100 >= 0 )
              {
LABEL_49:
                if ( v129[0] )
                  *((_BYTE *)this + 8042) = 1;
                v14 = v4;
                if ( (v4 & 0x80000000) == 0 )
                  goto LABEL_52;
LABEL_147:
                MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v14, 0x10B0u);
                return v4;
              }
            }
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v100, 0xC0Eu);
            CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 864), v129);
            v14 = v4;
            goto LABEL_147;
          }
          if ( v8 )
          {
            v72 = CDrawingContext::PushClipBounds(
                    this,
                    *(const struct CVisual **)a3,
                    *(const struct CShape **)(a3 + 8),
                    (const struct CMILMatrix *)(a3 + 124),
                    (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 76) != 0));
            v4 = v72;
            if ( v72 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0LL, v72, 0x10CBu);
              return v4;
            }
LABEL_53:
            v41 = *((_QWORD *)this + 4);
            v134 = 0LL;
            v42 = (void (__fastcall ***)(_QWORD, void **))(*(int *)(*(_QWORD *)(v41 + 8) + 16LL) + v41 + 8);
            (**v42)(v42, &v130);
            v43 = *((_DWORD *)this + 222);
            v44 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
            v45 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
            v46 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
            v47 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v133.m128_u64[0] = 0LL;
            v133.m128_f32[2] = (float)(int)v130;
            v133.m128_f32[3] = (float)SHIDWORD(v130);
            if ( v43 && *(_DWORD *)(88LL * (unsigned int)(v43 - 1) + *((_QWORD *)this + 108)) )
            {
              v48 = *((_DWORD *)this + 732);
              if ( !v48 )
              {
                v51 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                v52 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
                v53 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
                v50 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
                goto LABEL_58;
              }
              v49 = *(__m128 *)(*((_QWORD *)this + 368) + 16LL * (unsigned int)(v48 - 1));
              LODWORD(v50) = _mm_shuffle_ps(v49, v49, 255).m128_u32[0];
              v134 = v49;
            }
            else
            {
              v134 = v133;
              v50 = v133.m128_f32[3];
              if ( !v43 )
              {
                v53 = v134.m128_f32[2];
                v52 = v134.m128_f32[1];
                v51 = v134.m128_f32[0];
LABEL_71:
                if ( v53 > v51 && v50 > v52 )
                {
                  if ( v8 )
                    goto LABEL_78;
                  goto LABEL_74;
                }
LABEL_84:
                *lpMem = 1;
                return v4;
              }
            }
            v51 = v134.m128_f32[0];
            v52 = v134.m128_f32[1];
            v53 = v134.m128_f32[2];
LABEL_58:
            if ( *(_DWORD *)(88LL * (unsigned int)(v43 - 1) + *((_QWORD *)this + 108) + 8) )
            {
              v54 = *((_DWORD *)this + 740);
              v133 = 0LL;
              if ( v54 )
              {
                v133 = *(__m128 *)(*((_QWORD *)this + 372) + 16LL * (unsigned int)(v54 - 1));
                v47 = v133.m128_f32[0];
                v46 = v133.m128_f32[1];
                v45 = v133.m128_f32[2];
                LODWORD(v44) = _mm_shuffle_ps(v133, v133, 255).m128_u32[0];
              }
              if ( v47 > v51 )
                v51 = v47;
              v55 = v52;
              if ( v46 > v52 )
              {
                v52 = v46;
                v55 = v46;
              }
              v56 = v53;
              if ( v53 > v45 )
              {
                v53 = v45;
                v56 = v45;
              }
              v57 = v50;
              if ( v50 > v44 )
              {
                v50 = v44;
                v57 = v44;
              }
              if ( v56 <= v51 || v57 <= v55 )
                goto LABEL_84;
            }
            goto LABEL_71;
          }
          v19 = *(_QWORD *)(a3 + 8);
          v20 = -2003292412;
          v133 = 0LL;
          if ( v19
            && (v21 = (*(__int64 (__fastcall **)(__int64, __m128 *, __int64))(*(_QWORD *)v19 + 48LL))(
                        v19,
                        &v133,
                        a3 + 124),
                v20 = v21,
                v4 = v21,
                v21 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, v21, 0x140u);
          }
          else
          {
            v4 = v20;
            if ( v20 >= 0 )
            {
              v22 = *((_DWORD *)this + 76);
              v23 = 0;
              if ( !*(_QWORD *)a3 )
              {
LABEL_27:
                v28 = *((_DWORD *)this + 222);
                if ( v28 && *(_DWORD *)(88LL * (unsigned int)(v28 - 1) + *((_QWORD *)this + 108)) )
                {
                  if ( v22 )
                  {
                    v29 = (float)(int)CFloatFPU::CeilingSat(v133.m128_f32[0] - 0.5);
                    v30 = (float)(int)CFloatFPU::CeilingSat(v133.m128_f32[1] - 0.5);
                    v31 = (float)(int)CFloatFPU::CeilingSat(v133.m128_f32[2] - 0.5);
                    v32 = (float)(int)CFloatFPU::CeilingSat(v133.m128_f32[3] - 0.5);
                  }
                  else
                  {
                    v29 = v133.m128_f32[0];
                    v30 = v133.m128_f32[1];
                    v31 = v133.m128_f32[2];
                    v32 = v133.m128_f32[3];
                  }
                  v33 = *((_DWORD *)this + 732);
                  *(_OWORD *)lpMem_8 = 0LL;
                  if ( v33 )
                  {
                    v34 = *(_OWORD *)(*((_QWORD *)this + 368) + 16LL * (unsigned int)(v33 - 1));
                    *(_OWORD *)lpMem_8 = v34;
                  }
                  else
                  {
                    LODWORD(v34) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                    *(_OWORD *)lpMem_8 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                  }
                  if ( v29 > *(float *)&v34 )
                  {
                    *(float *)&v34 = v29;
                    *(float *)lpMem_8 = v29;
                  }
                  v35 = *((float *)lpMem_8 + 1);
                  if ( v30 > *((float *)lpMem_8 + 1) )
                  {
                    *((float *)lpMem_8 + 1) = v30;
                    v35 = v30;
                  }
                  v36 = *(float *)&lpMem_8[1];
                  if ( *(float *)&lpMem_8[1] > v31 )
                  {
                    *(float *)&lpMem_8[1] = v31;
                    v36 = v31;
                  }
                  v37 = *((float *)&lpMem_8[1] + 1);
                  if ( *((float *)&lpMem_8[1] + 1) > v32 )
                  {
                    *((float *)&lpMem_8[1] + 1) = v32;
                    v37 = v32;
                  }
                  if ( v36 <= *(float *)&v34 || v37 <= v35 )
                    *(_OWORD *)lpMem_8 = 0uLL;
                  v38 = CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
                          (unsigned int *)this + 732,
                          lpMem_8);
                  v4 = v38;
                  if ( v38 >= 0 )
                  {
                    v27 = v38;
LABEL_45:
                    v40 = 88LL * (unsigned int)(*((_DWORD *)this + 222) - 1);
                    ++*(_DWORD *)(v40 + *((_QWORD *)this + 108));
                    *((_BYTE *)this + 8041) = 1;
LABEL_46:
                    v4 = v27;
                    if ( v27 >= 0 )
                    {
                      v6 = (__int128 *)v134.m128_u64[0];
LABEL_52:
                      v8 = v130;
                      goto LABEL_53;
                    }
LABEL_168:
                    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0LL, v27, 0x10BDu);
                    return v4;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, v38, 0x31u);
                  v27 = v4;
                  MilInstrumentationCheckHR_MaybeFailFast(v113, 0LL, 0LL, v4, 0x109u);
                }
                else
                {
                  v115 = CD2DClipStack::PushExact(
                           (CDrawingContext *)((char *)this + 2928),
                           (const struct MilRectF *)&v133,
                           (enum D2D1_ANTIALIAS_MODE)(v22 != 0));
                  v27 = v115;
                  v4 = v115;
                  if ( v115 >= 0 )
                    goto LABEL_45;
                  MilInstrumentationCheckHR_MaybeFailFast(v116, 0LL, 0LL, v115, 0x105u);
                }
                MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0LL, v27, 0xB98u);
                v27 = v4;
                if ( v23 )
                {
                  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 336, 0LL);
                  goto LABEL_168;
                }
                goto LABEL_46;
              }
              *((_QWORD *)&v135 + 1) = *(_QWORD *)a3;
              v24 = *((_DWORD *)this + 84);
              LODWORD(v135) = 1;
              v25 = *((unsigned int *)this + 85);
              lpMem_8[0] = 0LL;
              if ( v24 != (_DWORD)v25 )
                goto LABEL_22;
              v105 = 2 * v25;
              if ( (unsigned __int64)(2 * v25) > 0xFFFFFFFF )
              {
                v107 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, -2147024362, 0x64u);
                v27 = -2147024362;
              }
              else
              {
                if ( v105 <= 0x40 )
                  v105 = 64;
                v106 = HrMalloc(0x10uLL, v105, lpMem_8);
                v107 = v106;
                if ( v106 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, v106, 0x6Bu);
                }
                else
                {
                  v108 = 16LL * *((unsigned int *)this + 84);
                  if ( v108 <= 0xFFFFFFFF )
                  {
                    v109 = lpMem_8[0];
                    memcpy_0(lpMem_8[0], *((const void **)this + 44), (unsigned int)v108);
                    DefaultHeap::Free(*((void **)this + 44));
                    v24 = *((_DWORD *)this + 84);
                    *((_QWORD *)this + 44) = v109;
                    *((_DWORD *)this + 85) = v105;
LABEL_22:
                    *(_OWORD *)(*((_QWORD *)this + 44) + 16LL * v24) = v135;
                    v26 = *((_DWORD *)this + 90);
                    if ( v26 <= ++*((_DWORD *)this + 84) )
                      v26 = *((_DWORD *)this + 84);
                    *((_DWORD *)this + 90) = v26;
LABEL_26:
                    v23 = 1;
                    goto LABEL_27;
                  }
                  v107 = -2147024362;
                  MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, -2147024362, 0x6Du);
                }
                v111 = lpMem_8[0];
                if ( lpMem_8[0] )
                {
                  v112 = GetProcessHeap();
                  HeapFree(v112, 0, v111);
                }
                v27 = v107;
                if ( v107 >= 0 )
                  goto LABEL_26;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v110, 0LL, 0LL, v107, 0xB93u);
              v4 = v27;
              goto LABEL_168;
            }
          }
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v20, 0x10B8u);
          return v4;
        }
      }
      else
      {
        if ( CMILMatrix::IsAffine<1>(a3 + 124, 1)
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 128) - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 140) - 0.0) & _xmm) < 0.000081380211 )
        {
          *(_BYTE *)(a3 + 188) &= 0x3Fu;
          *(_BYTE *)(a3 + 188) |= 0x40u;
          goto LABEL_8;
        }
        *(_BYTE *)(a3 + 188) |= 0xC0u;
      }
      if ( (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a3 + 124) )
        goto LABEL_8;
    }
    v8 = *(void **)(a3 + 8);
    v130 = v8;
    goto LABEL_8;
  }
LABEL_74:
  v58 = *(_DWORD *)(a3 + 44);
  if ( v58 != 2 )
  {
    v59 = *(float *)(a3 + 52);
    if ( v58 == 1 )
    {
      v68 = CDrawingContext::PushEffectiveAlphaForNode(this, *(const struct CVisual **)a3, v59 * *(float *)(a3 + 40), 1);
      v4 = v68;
      if ( v68 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0LL, v68, 0x1125u);
    }
    else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v59 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      v70 = CDrawingContext::PushEffectiveAlphaForNode(this, *(const struct CVisual **)a3, v59, 1);
      v4 = v70;
      if ( v70 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0LL, v70, 0x112Du);
    }
    return v4;
  }
LABEL_78:
  v61 = *(float *)(a3 + 52);
  v62 = *(_DWORD *)(a3 + 44) == 1;
  v63 = *(const struct CVisual **)a3;
  lpMem_8[0] = 0LL;
  if ( !v62 )
  {
    v64 = (unsigned int *)((char *)this + 336);
    *((_QWORD *)&v135 + 1) = v63;
    v65 = *((unsigned int *)this + 85);
    v66 = *((_DWORD *)this + 84);
    LODWORD(v135) = 8;
    v130 = 0LL;
    if ( v66 != (_DWORD)v65 )
    {
LABEL_80:
      *(_OWORD *)(*((_QWORD *)this + 44) + 16LL * v66) = v135;
      v67 = *((_DWORD *)this + 90);
      if ( v67 <= ++*v64 )
        v67 = *v64;
      *((_DWORD *)this + 90) = v67;
      v77 = *((unsigned int *)this + 777);
      v78 = *((_DWORD *)this + 776);
      v130 = 0LL;
      if ( v78 != (_DWORD)v77 )
        goto LABEL_96;
      v91 = 2 * v77;
      if ( (unsigned __int64)(2 * v77) > 0xFFFFFFFF )
      {
        v93 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0LL, -2147024362, 0x64u);
        v76 = -2147024362;
      }
      else
      {
        if ( v91 <= 0x40 )
          v91 = 64;
        v93 = HrMalloc(4uLL, v91, &v130);
        if ( v93 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0LL, v93, 0x6Bu);
        }
        else
        {
          v94 = 4LL * *((unsigned int *)this + 776);
          if ( v94 <= 0xFFFFFFFF )
          {
            v95 = v130;
            memcpy_0(v130, *((const void **)this + 390), (unsigned int)v94);
            DefaultHeap::Free(*((void **)this + 390));
            v78 = *((_DWORD *)this + 776);
            *((_QWORD *)this + 390) = v95;
            *((_DWORD *)this + 777) = v91;
LABEL_96:
            *(float *)(*((_QWORD *)this + 390) + 4LL * v78) = v61;
            v79 = *((_DWORD *)this + 782);
            if ( v79 <= ++*((_DWORD *)this + 776) )
              v79 = *((_DWORD *)this + 776);
            *((_DWORD *)this + 782) = v79;
            v75 = *(float *)(a3 + 40);
            goto LABEL_99;
          }
          v93 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x6Du);
        }
        v127 = v130;
        if ( v130 )
        {
          v128 = GetProcessHeap();
          HeapFree(v128, 0, v127);
        }
        v76 = v93;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v126, 0LL, 0LL, v93, 0x1145u);
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 336, 0LL);
      goto LABEL_189;
    }
    v117 = 2 * v65;
    if ( (unsigned __int64)(2 * v65) > 0xFFFFFFFF )
    {
      v119 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0LL, -2147024362, 0x64u);
      v76 = -2147024362;
    }
    else
    {
      if ( v117 <= 0x40 )
        v117 = 64;
      v119 = HrMalloc(0x10uLL, v117, &v130);
      if ( v119 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0LL, v119, 0x6Bu);
      }
      else
      {
        v120 = 16LL * *v64;
        if ( v120 <= 0xFFFFFFFF )
        {
          v121 = v130;
          memcpy_0(v130, *((const void **)this + 44), (unsigned int)v120);
          DefaultHeap::Free(*((void **)this + 44));
          v66 = *v64;
          *((_QWORD *)this + 44) = v121;
          *((_DWORD *)this + 85) = v117;
          goto LABEL_80;
        }
        v119 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x6Du);
      }
      v123 = v130;
      if ( v130 )
      {
        v124 = GetProcessHeap();
        HeapFree(v124, 0, v123);
      }
      v76 = v119;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v122, 0LL, 0LL, v119, 0x1141u);
LABEL_189:
    v4 = v76;
    MilInstrumentationCheckHR_MaybeFailFast(v125, 0LL, 0LL, v76, 0x10F1u);
    goto LABEL_122;
  }
  v4 = CDrawingContext::PushEffectiveAlphaForNode(this, v63, v61 * *(float *)(a3 + 40), 1);
  if ( (v4 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0LL, v4, 0x10E9u);
LABEL_122:
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(lpMem_8);
    return v4;
  }
  v75 = *(float *)&FLOAT_1_0;
LABEL_99:
  if ( !v8 )
    goto LABEL_110;
  if ( lpMem_8[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)lpMem_8[0] + 16LL))(lpMem_8[0]);
  v80 = !CMILMatrix::IsAffine<1>(a3 + 124, 1);
  v81 = a3 + 124;
  if ( !v80 )
    v81 = 0LL;
  v82 = (*(__int64 (__fastcall **)(void *, __int64, void **))(*(_QWORD *)v8 + 24LL))(v8, v81, lpMem_8);
  v4 = v82;
  if ( v82 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0LL, v82, 0x938u);
    if ( v4 == -2003238895 )
    {
      v4 = 0;
      *lpMem = 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v96, 0LL, 0LL, v4, 0x1106u);
    }
    goto LABEL_122;
  }
  if ( v80 )
  {
LABEL_110:
    v84 = 0LL;
  }
  else
  {
    v84 = &v135;
    v85 = *(_DWORD *)(a3 + 128);
    LODWORD(v135) = *(_DWORD *)(a3 + 124);
    *(_QWORD *)((char *)&v135 + 4) = __PAIR64__(*(_DWORD *)(a3 + 140), v85);
    v86 = *(_DWORD *)(a3 + 172);
    HIDWORD(v135) = *(_DWORD *)(a3 + 144);
    v87 = *(_DWORD *)(a3 + 176);
    v136 = v86;
    v137 = v87;
  }
  v88 = CDrawingContext::PushD2DLayer(
          this,
          *(char **)a3,
          v6,
          (__int64)lpMem_8[0],
          (__int64)v84,
          v75,
          *(_BYTE *)(a3 + 208),
          *(_DWORD *)(a3 + 204));
  v4 = v88;
  if ( v88 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0LL, v88, 0x1115u);
    goto LABEL_122;
  }
  v90 = lpMem_8[0];
  if ( lpMem_8[0] )
  {
    lpMem_8[0] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v90 + 16LL))(v90);
  }
  return v4;
}
