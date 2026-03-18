/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180058320
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180057F10 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18017C0A8 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x18017C238 (-PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180005BBC (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180018500 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18002C9E8 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18002FAF8 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z @ 0x1800301E4 (-PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x180030338 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C758 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18004F0CC (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180059AF0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006F1A4 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180071964 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180095B04 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7A7C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BEBE0 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EBCE7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EBCFF (floorf_0.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180192BD4 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        CDrawingContext *this,
        CShapePtr *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  _BYTE *v6; // r12
  int v8; // ebx
  const struct CShape *v9; // rsi
  __int64 *v10; // rdi
  bool v11; // zf
  const struct CVisual *v12; // r13
  int v13; // eax
  __int64 v14; // rcx
  char v15; // r12
  unsigned int *v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // r13d
  __int64 v20; // rcx
  unsigned int v21; // eax
  bool v22; // r13
  __int64 v23; // rdx
  void (__fastcall ***v24)(_QWORD, __int64 *); // rcx
  int v25; // r8d
  float v26; // xmm13_4
  float v27; // xmm2_4
  float v28; // xmm5_4
  float v29; // xmm3_4
  float v30; // xmm6_4
  float v31; // xmm8_4
  int v32; // eax
  float v33; // xmm7_4
  float v34; // xmm9_4
  unsigned int v35; // r8d
  int v36; // eax
  float v37; // xmm2_4
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rcx
  float v42; // xmm4_4
  unsigned int v43; // r12d
  float v44; // xmm10_4
  float v45; // xmm11_4
  float v46; // xmm12_4
  __m128 *v47; // rsi
  float v48; // xmm0_4
  float v49; // xmm0_4
  float v50; // xmm3_4
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm0_4
  float v54; // xmm1_4
  __int64 v55; // rax
  __int64 v56; // rcx
  float v57; // xmm3_4
  float v58; // xmm2_4
  float v59; // xmm1_4
  int v60; // eax
  float v61; // xmm2_4
  const struct CVisual *v62; // rax
  int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  float v69; // xmm2_4
  const struct CVisual *v70; // rdx
  __int64 v71; // rcx
  float v72; // xmm6_4
  bool v73; // r8
  CDrawingContext *v74; // rcx
  int v75; // eax
  __int64 v76; // rcx
  unsigned int v77; // xmm1_4
  int v78; // xmm0_4
  int v79; // xmm1_4
  __int128 *p_X; // rcx
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rax
  int TightBounds; // eax
  int v86; // xmm0_4
  float v87; // xmm15_4
  float v88; // xmm13_4
  float v89; // xmm14_4
  float v90; // xmm1_4
  float v91; // xmm1_4
  float v92; // xmm3_4
  float v93; // xmm2_4
  float v94; // xmm0_4
  __int64 v95; // rax
  int v96; // eax
  __int64 v97; // rcx
  unsigned __int64 v98; // rax
  void *v99; // rbx
  void *v100; // rbx
  HANDLE ProcessHeap; // rax
  char v102; // al
  __int64 v103; // r8
  int v104; // eax
  __int64 v105; // rcx
  bool v106[8]; // [rsp+48h] [rbp-C0h] BYREF
  void *lpMem; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+58h] [rbp-B0h]
  _BYTE *v109; // [rsp+60h] [rbp-A8h]
  __int64 v110; // [rsp+68h] [rbp-A0h] BYREF
  const struct CShape *v111; // [rsp+70h] [rbp-98h]
  __int64 v112; // [rsp+78h] [rbp-90h]
  CShapePtr *v113; // [rsp+80h] [rbp-88h]
  _BYTE v114[64]; // [rsp+88h] [rbp-80h] BYREF
  int v115; // [rsp+C8h] [rbp-40h]
  __m128 v116; // [rsp+D8h] [rbp-30h]
  __int128 X; // [rsp+E8h] [rbp-20h] BYREF
  int v118; // [rsp+F8h] [rbp-10h]
  int v119; // [rsp+FCh] [rbp-Ch]
  void *retaddr; // [rsp+1F0h] [rbp+E8h]

  v6 = a6;
  v113 = a2;
  v112 = a4;
  v109 = a6;
  v8 = 0;
  v9 = 0LL;
  if ( !*(_BYTE *)(a5 + 164) )
    goto LABEL_24;
  v10 = (__int64 *)((char *)this + 936);
  v11 = *((_DWORD *)this + 69) == 0;
  v12 = *(const struct CVisual **)a5;
  v111 = *(const struct CShape **)a2;
  v106[1] = 0;
  v106[2] = 0;
  v13 = CScopedClipStack::PushCpuOrGpuClipToScope(
          (int)this + 936,
          (_DWORD)a2,
          !v11,
          a3,
          (__int64)v106,
          (__int64)&v106[1]);
  v15 = v106[1];
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xB7Du, 0LL);
    goto LABEL_123;
  }
  *((_QWORD *)&X + 1) = v12;
  v16 = (unsigned int *)((char *)this + 376);
  if ( v106[1] )
  {
    v17 = *((unsigned int *)this + 95);
    v18 = *v16;
    v106[2] = 1;
    LODWORD(X) = 3;
    lpMem = 0LL;
    if ( v18 != (_DWORD)v17 )
    {
LABEL_5:
      v19 = 0;
      v20 = 2LL * v18;
      *(_OWORD *)(*((_QWORD *)this + 49) + 16LL * v18) = X;
      v21 = *((_DWORD *)this + 100);
      if ( v21 <= ++*v16 )
        v21 = *v16;
      *((_DWORD *)this + 100) = v21;
      goto LABEL_8;
    }
    v95 = 2 * v17;
    if ( (unsigned __int64)(2 * v17) > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_120:
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xB86u, 0LL);
      LOBYTE(v9) = 0;
LABEL_123:
      v22 = v106[0];
      goto LABEL_10;
    }
    if ( (unsigned int)v95 <= 0x40 )
      v95 = 64LL;
    v110 = v95;
    v96 = HrMalloc(0x10uLL, (unsigned int)v95, &lpMem);
    v19 = v96;
    if ( v96 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v97, 0LL, 0, v96, 0x53u, 0LL);
    }
    else
    {
      v98 = 16LL * *v16;
      if ( v98 <= 0xFFFFFFFF )
      {
        v99 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 49), (unsigned int)v98);
        operator delete(*((void **)this + 49));
        *((_DWORD *)this + 95) = v110;
        v18 = *v16;
        *((_QWORD *)this + 49) = v99;
        goto LABEL_5;
      }
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v97, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v100 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v100);
    }
LABEL_8:
    v8 = v19;
    if ( v19 >= 0 )
    {
      v22 = v106[0];
      LOBYTE(v9) = 0;
      *((_BYTE *)this + 5954) = 1;
      goto LABEL_10;
    }
    goto LABEL_120;
  }
  v106[1] = 1;
  LODWORD(X) = 2;
  v60 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((unsigned int *)this + 94, &X);
  v8 = v60;
  if ( v60 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v60, 0xB90u, 0LL);
    LOBYTE(v9) = v106[1];
    goto LABEL_123;
  }
  v22 = v106[0];
  LOBYTE(v9) = v106[1];
  if ( v106[0] )
    *((_BYTE *)this + 5955) = 1;
LABEL_10:
  if ( v8 >= 0 )
  {
    v23 = *((_QWORD *)this + 4);
    v116 = 0LL;
    v24 = (void (__fastcall ***)(_QWORD, __int64 *))(v23 + 8 + *(int *)(*(_QWORD *)(v23 + 8) + 16LL));
    (**v24)(v24, &v110);
    v25 = *((_DWORD *)this + 240);
    v26 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v27 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v28 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v29 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v30 = (float)(int)v110;
    v31 = (float)SHIDWORD(v110);
    if ( v25 && *(_DWORD *)(84LL * (unsigned int)(v25 - 1) + *v10) )
    {
      v32 = *((_DWORD *)this + 800);
      if ( !v32 )
      {
        v33 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v34 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        v30 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v31 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
LABEL_16:
        if ( !v25 || (v35 = *(_DWORD *)(84LL * (unsigned int)(v25 - 1) + *v10 + 4)) == 0 )
        {
LABEL_18:
          if ( v30 > v33 && v31 > v34 )
          {
            if ( v22 )
              *(_BYTE *)(a5 + 164) = 0;
            if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
            {
              if ( CShapePtr::IsAxisAlignedRectangle((CShape **)v113) )
                *(_DWORD *)(a5 + 160) |= 1u;
              v102 = CMILMatrix::Is2DAxisAlignedPreserving<1>(a5 + 92);
              v9 = v111;
              v6 = v109;
              if ( v102 )
                *(_DWORD *)(a5 + 160) |= 4u;
            }
            else
            {
              v9 = v111;
              v6 = v109;
            }
LABEL_24:
            if ( !*(_BYTE *)(a5 + 164) )
            {
              v36 = *(_DWORD *)(a5 + 12);
              if ( v36 != 2 )
              {
                v37 = *(float *)(a5 + 20);
                if ( v36 == 1 )
                {
                  v61 = v37 * *(float *)(a5 + 8);
                  v62 = *(const struct CVisual **)a5;
                  LODWORD(X) = 8;
                  *((_QWORD *)&X + 1) = v62;
                  *(float *)&lpMem = v61;
                  v63 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                          (unsigned int *)this + 94,
                          &X);
                  v8 = v63;
                  if ( v63 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x10B0u, 0LL);
                  }
                  else
                  {
                    v65 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(
                            (unsigned int *)this + 808,
                            &lpMem);
                    v8 = v65;
                    if ( v65 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0x10B4u, 0LL);
                      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 376, 0LL, v103);
                    }
                  }
                  if ( v8 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v8, 0x1094u, 0LL);
                }
                else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v37 - 1.0) & _xmm) >= 0.0000011920929 )
                {
                  v67 = CDrawingContext::PushEffectiveAlphaForNode(this, *(const struct CVisual **)a5, v37, 1);
                  v8 = v67;
                  if ( v67 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x109Cu, 0LL);
                }
                return (unsigned int)v8;
              }
            }
            v11 = *(_DWORD *)(a5 + 12) == 1;
            v69 = *(float *)(a5 + 20);
            lpMem = 0LL;
            v70 = *(const struct CVisual **)a5;
            if ( v11 )
            {
              v104 = CDrawingContext::PushEffectiveAlphaForNode(this, v70, v69 * *(float *)(a5 + 8), 1);
              v8 = v104;
              if ( v104 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v105, 0LL, 0, v104, 0x1058u, 0LL);
                goto LABEL_85;
              }
              v72 = *(float *)&FLOAT_1_0;
            }
            else
            {
              v8 = CDrawingContext::PushEffectiveAlphaForNode(this, v70, v69, 1);
              if ( v8 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v8, 0x1060u, 0LL);
                goto LABEL_85;
              }
              v72 = *(float *)(a5 + 8);
            }
            v11 = *(_BYTE *)(a5 + 164) == 0;
            v73 = 1;
            v106[2] = 1;
            if ( v11 )
            {
LABEL_81:
              p_X = &X;
              if ( v73 )
                p_X = 0LL;
              v81 = CDrawingContext::PushD2DLayer(this, (__int64)p_X, v72, 1, *(_DWORD *)(a5 + 160));
              v8 = v81;
              if ( v81 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v81, 0x1084u, 0LL);
              goto LABEL_85;
            }
            Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&lpMem);
            v75 = CDrawingContext::D2DGeometryFromShape(
                    v74,
                    v9,
                    (const struct CMILMatrix *)(a5 + 92),
                    (struct ID2D1Geometry **)&lpMem,
                    &v106[2]);
            v8 = v75;
            if ( v75 == -2003238895 )
            {
              *v6 = 1;
              v8 = 0;
            }
            else
            {
              if ( v75 >= 0 )
              {
                v73 = v106[2];
                if ( !v106[2] )
                {
                  v77 = *(_DWORD *)(a5 + 96);
                  LODWORD(X) = *(_DWORD *)(a5 + 92);
                  *(_QWORD *)((char *)&X + 4) = __PAIR64__(*(_DWORD *)(a5 + 108), v77);
                  v78 = *(_DWORD *)(a5 + 140);
                  HIDWORD(X) = *(_DWORD *)(a5 + 112);
                  v79 = *(_DWORD *)(a5 + 144);
                  v118 = v78;
                  v119 = v79;
                }
                goto LABEL_81;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v75, 0x1075u, 0LL);
            }
LABEL_85:
            Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&lpMem);
            return (unsigned int)v8;
          }
LABEL_29:
          *v109 = 1;
          return (unsigned int)v8;
        }
        v39 = *((_DWORD *)this + 458);
        v40 = 136LL * (v39 - 1);
        v41 = *((_QWORD *)this + 226);
        if ( (TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)(v40 + v41 + 112)
           || *(float *)(v40 + v41 + 120) < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                            + 2))
          && (*(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *(float *)(v40 + v41 + 116)
           || *(float *)(v40 + v41 + 124) < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                            + 3))
          || (v42 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3),
              v116 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
              v43 = v39 - v35,
              LODWORD(v108) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3),
              v44 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
              v45 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1),
              v46 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2),
              v39 < v35) )
        {
LABEL_49:
          v55 = 136LL * (v39 - 1);
          v56 = *((_QWORD *)this + 226);
          if ( *(float *)(v55 + v56 + 112) > v33 )
            v33 = *(float *)(v55 + v56 + 112);
          v57 = v34;
          if ( *(float *)(v55 + v56 + 116) > v34 )
          {
            v34 = *(float *)(v55 + v56 + 116);
            v57 = v34;
          }
          v58 = v30;
          if ( v30 > *(float *)(v55 + v56 + 120) )
          {
            v30 = *(float *)(v55 + v56 + 120);
            v58 = v30;
          }
          v59 = v31;
          if ( v31 > *(float *)(v55 + v56 + 124) )
          {
            v31 = *(float *)(v55 + v56 + 124);
            v59 = v31;
          }
          if ( v58 <= v33 || v59 <= v57 )
            goto LABEL_29;
          goto LABEL_18;
        }
        while ( 1 )
        {
          v47 = (__m128 *)(*((_QWORD *)this + 226) + 136LL * v43);
          if ( (v29 < v47[7].m128_f32[0] || v47[7].m128_f32[2] < v27)
            && (v28 < v47[7].m128_f32[1] || v47[7].m128_f32[3] < v26) )
          {
            v116 = v47[7];
            v46 = v116.m128_f32[2];
            v45 = v116.m128_f32[1];
            v44 = v116.m128_f32[0];
            LODWORD(v108) = _mm_shuffle_ps(v116, v116, 255).m128_u32[0];
            v42 = *(float *)&v108;
            goto LABEL_47;
          }
          if ( v47[8].m128_i8[0] )
          {
            v48 = v47[6].m128_f32[0];
            if ( v48 > v44 )
            {
              v116.m128_i32[0] = v47[6].m128_i32[0];
              v44 = v48;
            }
            v49 = v47[6].m128_f32[1];
            v50 = v45;
            if ( v49 > v45 )
            {
              v116.m128_i32[1] = v47[6].m128_i32[1];
              v45 = v49;
              v50 = v49;
            }
            v51 = v47[6].m128_f32[2];
            v52 = v46;
            if ( v46 > v51 )
            {
              v116.m128_i32[2] = v47[6].m128_i32[2];
              v46 = v51;
              v52 = v51;
            }
            v53 = v47[6].m128_f32[3];
            v54 = v42;
            if ( v42 > v53 )
            {
              LODWORD(v108) = v47[6].m128_i32[3];
              v42 = v53;
              v116.m128_f32[3] = v53;
              v54 = v53;
            }
            if ( v52 > v44 && v54 > v50 )
              goto LABEL_46;
          }
          else
          {
            v83 = *v10;
            v84 = (unsigned int)(*((_DWORD *)this + 240) - 1);
            X = 0LL;
            v115 = 0;
            CMILMatrix::Multiply(
              (const struct CMILMatrix *)&v47[1],
              (const struct CMILMatrix *)(84 * v84 + v83 + 12),
              (struct CMILMatrix *)v114);
            TightBounds = CShapePtr::GetTightBounds(v47, &X, v114);
            if ( TightBounds < 0 )
            {
              if ( TightBounds != -2003304438 )
                ModuleFailFastForHRESULT((unsigned int)TightBounds, retaddr);
              v86 = 0;
              v87 = 0.0;
              v88 = 0.0;
              v89 = 0.0;
            }
            else
            {
              v86 = HIDWORD(X);
              v87 = *((float *)&X + 2);
              v88 = *((float *)&X + 1);
              v89 = *(float *)&X;
            }
            v90 = FLOAT_8388608_0;
            LODWORD(lpMem) = v86;
            if ( COERCE_FLOAT(LODWORD(v89) & _xmm) < 8388608.0 )
            {
              v90 = FLOAT_8388608_0;
              v89 = (float)(int)floorf_0(v89);
            }
            *(float *)&X = v89;
            if ( v90 > COERCE_FLOAT(LODWORD(v88) & _xmm) )
            {
              v90 = FLOAT_8388608_0;
              v88 = (float)(int)floorf_0(v88);
            }
            *((float *)&X + 1) = v88;
            if ( v90 > COERCE_FLOAT(LODWORD(v87) & _xmm) )
              v87 = (float)(int)ceilf_0(v87);
            v91 = *(float *)&lpMem;
            *((float *)&X + 2) = v87;
            if ( COERCE_FLOAT((unsigned int)lpMem & _xmm) < 8388608.0 )
              v91 = (float)(int)ceilf_0(*(float *)&lpMem);
            *((float *)&X + 3) = v91;
            if ( v89 > v44 )
            {
              v116.m128_f32[0] = v89;
              v44 = v89;
            }
            v92 = v45;
            if ( v88 > v45 )
            {
              v116.m128_f32[1] = v88;
              v45 = v88;
              v92 = v88;
            }
            v93 = v46;
            if ( v46 > v87 )
            {
              v116.m128_f32[2] = v87;
              v46 = v87;
              v93 = v87;
            }
            v42 = *(float *)&v108;
            v94 = *(float *)&v108;
            if ( *(float *)&v108 > v91 )
            {
              *(float *)&v108 = v91;
              v42 = v91;
              v116.m128_f32[3] = v91;
              v94 = v91;
            }
            if ( v93 > v44 && v94 > v92 )
              goto LABEL_46;
          }
          v42 = 0.0;
          v44 = 0.0;
          v45 = 0.0;
          v116 = 0uLL;
          v46 = 0.0;
          LODWORD(v108) = 0;
LABEL_46:
          v47[7] = v116;
          v26 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
          v27 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
          v28 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
          v29 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
LABEL_47:
          if ( ++v43 >= *((_DWORD *)this + 458) )
          {
            v39 = *((_DWORD *)this + 458);
            goto LABEL_49;
          }
        }
      }
      v116 = *(__m128 *)(*((_QWORD *)this + 402) + 16LL * (unsigned int)(v32 - 1));
      v30 = v116.m128_f32[2];
      LODWORD(v31) = _mm_shuffle_ps(v116, v116, 255).m128_u32[0];
    }
    v33 = v116.m128_f32[0];
    v34 = v116.m128_f32[1];
    goto LABEL_16;
  }
  if ( (_BYTE)v9 )
    CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 936), v106);
  if ( v106[2] )
    CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)this + 936), v15);
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v8, 0x1023u, 0LL);
  return (unsigned int)v8;
}
