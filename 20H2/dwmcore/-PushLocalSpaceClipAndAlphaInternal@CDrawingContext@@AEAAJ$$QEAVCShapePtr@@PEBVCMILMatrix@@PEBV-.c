/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18008A2F0
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180089CA0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180177848 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x1801779D8 (-PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180013208 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180017B18 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18004D678 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z @ 0x18004E0F4 (-PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18004E248 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18004E618 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004EEC0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006D4F4 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180072C94 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x180085380 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x1800925F0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18009F3D4 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BDEAC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C502C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EE947 (ceilf_0.c)
 *     floorf_0 @ 0x1800EE95F (floorf_0.c)
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x18018E384 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        CDrawingContext *this,
        CShapePtr *a2,
        int a3,
        struct D2D_RECT_F *a4,
        __int64 a5,
        _BYTE *a6)
{
  _BYTE *v6; // r12
  struct D2D_RECT_F *v7; // r13
  int v9; // ebx
  const struct CShape *v10; // rsi
  __int64 *v11; // rdi
  bool v12; // zf
  const struct CVisual *v13; // r13
  int v14; // eax
  __int64 v15; // rcx
  char v16; // r12
  unsigned int *v17; // rsi
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // r13d
  __int64 v21; // rcx
  unsigned int v22; // eax
  bool v23; // r13
  __int64 v24; // rdx
  void (__fastcall ***v25)(_QWORD, __int64 *); // rcx
  int v26; // r8d
  float v27; // xmm13_4
  float v28; // xmm2_4
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm6_4
  float v32; // xmm8_4
  int v33; // eax
  float v34; // xmm7_4
  float v35; // xmm9_4
  unsigned int v36; // r8d
  int v37; // eax
  float v38; // xmm2_4
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rcx
  float v43; // xmm4_4
  unsigned int v44; // r12d
  float v45; // xmm10_4
  float v46; // xmm11_4
  float v47; // xmm12_4
  __m128 *v48; // rsi
  float v49; // xmm0_4
  float v50; // xmm0_4
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  __int64 v56; // rax
  __int64 v57; // rcx
  float v58; // xmm3_4
  float v59; // xmm2_4
  float v60; // xmm1_4
  int v61; // eax
  float v62; // xmm2_4
  const struct CVisual *v63; // rax
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  float v70; // xmm2_4
  const struct CVisual *v71; // rdx
  __int64 v72; // rcx
  float v73; // xmm6_4
  bool v74; // r8
  CDrawingContext *v75; // rcx
  int v76; // eax
  __int64 v77; // rcx
  unsigned int v78; // xmm1_4
  int v79; // xmm0_4
  int v80; // xmm1_4
  struct D2D_MATRIX_3X2_F *p_X; // rcx
  int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rax
  int TightBounds; // eax
  int v87; // xmm0_4
  float v88; // xmm15_4
  float v89; // xmm13_4
  float v90; // xmm14_4
  float v91; // xmm1_4
  float v92; // xmm1_4
  float v93; // xmm3_4
  float v94; // xmm2_4
  float v95; // xmm0_4
  __int64 v96; // rax
  int v97; // eax
  __int64 v98; // rcx
  unsigned __int64 v99; // rax
  void *v100; // rbx
  void *v101; // rbx
  HANDLE ProcessHeap; // rax
  char v103; // al
  int v104; // eax
  __int64 v105; // rcx
  bool v106[8]; // [rsp+48h] [rbp-C0h] BYREF
  void *lpMem; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+58h] [rbp-B0h]
  _BYTE *v109; // [rsp+60h] [rbp-A8h]
  __int64 v110; // [rsp+68h] [rbp-A0h] BYREF
  const struct CShape *v111; // [rsp+70h] [rbp-98h]
  struct D2D_RECT_F *v112; // [rsp+78h] [rbp-90h]
  CShapePtr *v113; // [rsp+80h] [rbp-88h]
  char v114[64]; // [rsp+88h] [rbp-80h] BYREF
  int v115; // [rsp+C8h] [rbp-40h]
  __m128 v116; // [rsp+D8h] [rbp-30h]
  __int128 X; // [rsp+E8h] [rbp-20h] BYREF
  int v118; // [rsp+F8h] [rbp-10h]
  int v119; // [rsp+FCh] [rbp-Ch]
  void *retaddr; // [rsp+1F0h] [rbp+E8h]

  v6 = a6;
  v7 = a4;
  v113 = a2;
  v112 = a4;
  v109 = a6;
  v9 = 0;
  v10 = 0LL;
  if ( !*(_BYTE *)(a5 + 164) )
    goto LABEL_24;
  v11 = (__int64 *)((char *)this + 936);
  v12 = *((_DWORD *)this + 69) == 0;
  v13 = *(const struct CVisual **)a5;
  v111 = *(const struct CShape **)a2;
  v106[1] = 0;
  v106[2] = 0;
  v14 = CScopedClipStack::PushCpuOrGpuClipToScope(
          (int)this + 936,
          (_DWORD)a2,
          !v12,
          a3,
          (__int64)v106,
          (__int64)&v106[1]);
  v16 = v106[1];
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB91u, 0LL);
    goto LABEL_123;
  }
  *((_QWORD *)&X + 1) = v13;
  v17 = (unsigned int *)((char *)this + 376);
  if ( v106[1] )
  {
    v18 = *((unsigned int *)this + 95);
    v19 = *v17;
    v106[2] = 1;
    LODWORD(X) = 3;
    lpMem = 0LL;
    if ( v19 != (_DWORD)v18 )
    {
LABEL_5:
      v20 = 0;
      v21 = 2LL * v19;
      *(_OWORD *)(*((_QWORD *)this + 49) + 16LL * v19) = X;
      v22 = *((_DWORD *)this + 100);
      if ( v22 <= ++*v17 )
        v22 = *v17;
      *((_DWORD *)this + 100) = v22;
      goto LABEL_8;
    }
    v96 = 2 * v18;
    if ( (unsigned __int64)(2 * v18) > 0xFFFFFFFF )
    {
      v9 = -2147024362;
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_120:
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xB9Au, 0LL);
      LOBYTE(v10) = 0;
LABEL_123:
      v23 = v106[0];
      goto LABEL_10;
    }
    if ( (unsigned int)v96 <= 0x40 )
      v96 = 64LL;
    v110 = v96;
    v97 = HrMalloc(0x10uLL, (unsigned int)v96, &lpMem);
    v20 = v97;
    if ( v97 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v98, 0LL, 0, v97, 0x53u, 0LL);
    }
    else
    {
      v99 = 16LL * *v17;
      if ( v99 <= 0xFFFFFFFF )
      {
        v100 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 49), (unsigned int)v99);
        operator delete(*((void **)this + 49));
        *((_DWORD *)this + 95) = v110;
        v19 = *v17;
        *((_QWORD *)this + 49) = v100;
        goto LABEL_5;
      }
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v98, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v101 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v101);
    }
LABEL_8:
    v9 = v20;
    if ( v20 >= 0 )
    {
      v23 = v106[0];
      LOBYTE(v10) = 0;
      *((_BYTE *)this + 5954) = 1;
      goto LABEL_10;
    }
    goto LABEL_120;
  }
  v106[1] = 1;
  LODWORD(X) = 2;
  v61 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((unsigned int *)this + 94, &X);
  v9 = v61;
  if ( v61 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v61, 0xBA4u, 0LL);
    LOBYTE(v10) = v106[1];
    goto LABEL_123;
  }
  v23 = v106[0];
  LOBYTE(v10) = v106[1];
  if ( v106[0] )
    *((_BYTE *)this + 5955) = 1;
LABEL_10:
  if ( v9 >= 0 )
  {
    v24 = *((_QWORD *)this + 4);
    v116 = 0LL;
    v25 = (void (__fastcall ***)(_QWORD, __int64 *))(v24 + 8 + *(int *)(*(_QWORD *)(v24 + 8) + 16LL));
    (**v25)(v25, &v110);
    v26 = *((_DWORD *)this + 240);
    v27 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v28 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v29 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v30 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v31 = (float)(int)v110;
    v32 = (float)SHIDWORD(v110);
    if ( v26 && *(_DWORD *)(84LL * (unsigned int)(v26 - 1) + *v11) )
    {
      v33 = *((_DWORD *)this + 800);
      if ( !v33 )
      {
        v34 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v35 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        v31 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v32 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
LABEL_16:
        if ( !v26 || (v36 = *(_DWORD *)(84LL * (unsigned int)(v26 - 1) + *v11 + 4)) == 0 )
        {
LABEL_18:
          if ( v31 > v34 && v32 > v35 )
          {
            if ( v23 )
              *(_BYTE *)(a5 + 164) = 0;
            if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
            {
              if ( CShapePtr::IsAxisAlignedRectangle((CShape **)v113) )
                *(_DWORD *)(a5 + 160) |= 1u;
              v103 = CMILMatrix::Is2DAxisAlignedPreserving<1>(a5 + 92);
              v10 = v111;
              v6 = v109;
              v7 = v112;
              if ( v103 )
                *(_DWORD *)(a5 + 160) |= 4u;
            }
            else
            {
              v10 = v111;
              v6 = v109;
              v7 = v112;
            }
LABEL_24:
            if ( !*(_BYTE *)(a5 + 164) )
            {
              v37 = *(_DWORD *)(a5 + 12);
              if ( v37 != 2 )
              {
                v38 = *(float *)(a5 + 20);
                if ( v37 == 1 )
                {
                  v62 = v38 * *(float *)(a5 + 8);
                  v63 = *(const struct CVisual **)a5;
                  LODWORD(X) = 8;
                  *((_QWORD *)&X + 1) = v63;
                  *(float *)&lpMem = v62;
                  v64 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                          (unsigned int *)this + 94,
                          &X);
                  v9 = v64;
                  if ( v64 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x10C4u, 0LL);
                  }
                  else
                  {
                    v66 = CWatermarkStack<float,64,2,10>::Push((char *)this + 3232, &lpMem);
                    v9 = v66;
                    if ( v66 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x10C8u, 0LL);
                      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 94, 0LL);
                    }
                  }
                  if ( v9 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v9, 0x10A8u, 0LL);
                }
                else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 - 1.0) & _xmm) >= 0.0000011920929 )
                {
                  v68 = CDrawingContext::PushEffectiveAlphaForNode(this, *(const struct CVisual **)a5, v38, 1);
                  v9 = v68;
                  if ( v68 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x10B0u, 0LL);
                }
                return (unsigned int)v9;
              }
            }
            v12 = *(_DWORD *)(a5 + 12) == 1;
            v70 = *(float *)(a5 + 20);
            lpMem = 0LL;
            v71 = *(const struct CVisual **)a5;
            if ( v12 )
            {
              v104 = CDrawingContext::PushEffectiveAlphaForNode(this, v71, v70 * *(float *)(a5 + 8), 1);
              v9 = v104;
              if ( v104 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v105, 0LL, 0, v104, 0x106Cu, 0LL);
                goto LABEL_85;
              }
              v73 = *(float *)&FLOAT_1_0;
            }
            else
            {
              v9 = CDrawingContext::PushEffectiveAlphaForNode(this, v71, v70, 1);
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v9, 0x1074u, 0LL);
                goto LABEL_85;
              }
              v73 = *(float *)(a5 + 8);
            }
            v12 = *(_BYTE *)(a5 + 164) == 0;
            v74 = 1;
            v106[2] = 1;
            if ( v12 )
            {
LABEL_81:
              p_X = (struct D2D_MATRIX_3X2_F *)&X;
              if ( v74 )
                p_X = 0LL;
              v82 = CDrawingContext::PushD2DLayer(
                      this,
                      *(struct CVisual **)a5,
                      v7,
                      (struct ID2D1Geometry *)lpMem,
                      p_X,
                      v73,
                      1,
                      *(_DWORD *)(a5 + 160));
              v9 = v82;
              if ( v82 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0x1098u, 0LL);
              goto LABEL_85;
            }
            Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&lpMem);
            v76 = CDrawingContext::D2DGeometryFromShape(
                    v75,
                    v10,
                    (const struct CMILMatrix *)(a5 + 92),
                    (struct ID2D1Geometry **)&lpMem,
                    &v106[2]);
            v9 = v76;
            if ( v76 == -2003238895 )
            {
              *v6 = 1;
              v9 = 0;
            }
            else
            {
              if ( v76 >= 0 )
              {
                v74 = v106[2];
                if ( !v106[2] )
                {
                  v78 = *(_DWORD *)(a5 + 96);
                  LODWORD(X) = *(_DWORD *)(a5 + 92);
                  *(_QWORD *)((char *)&X + 4) = __PAIR64__(*(_DWORD *)(a5 + 108), v78);
                  v79 = *(_DWORD *)(a5 + 140);
                  HIDWORD(X) = *(_DWORD *)(a5 + 112);
                  v80 = *(_DWORD *)(a5 + 144);
                  v118 = v79;
                  v119 = v80;
                }
                goto LABEL_81;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x1089u, 0LL);
            }
LABEL_85:
            Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&lpMem);
            return (unsigned int)v9;
          }
LABEL_29:
          *v109 = 1;
          return (unsigned int)v9;
        }
        v40 = *((_DWORD *)this + 458);
        v41 = 136LL * (v40 - 1);
        v42 = *((_QWORD *)this + 226);
        if ( (TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)(v41 + v42 + 112)
           || *(float *)(v41 + v42 + 120) < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                            + 2))
          && (*(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *(float *)(v41 + v42 + 116)
           || *(float *)(v41 + v42 + 124) < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                            + 3))
          || (v43 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3),
              v116 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
              v44 = v40 - v36,
              LODWORD(v108) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3),
              v45 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
              v46 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1),
              v47 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2),
              v40 < v36) )
        {
LABEL_49:
          v56 = 136LL * (v40 - 1);
          v57 = *((_QWORD *)this + 226);
          if ( *(float *)(v56 + v57 + 112) > v34 )
            v34 = *(float *)(v56 + v57 + 112);
          v58 = v35;
          if ( *(float *)(v56 + v57 + 116) > v35 )
          {
            v35 = *(float *)(v56 + v57 + 116);
            v58 = v35;
          }
          v59 = v31;
          if ( v31 > *(float *)(v56 + v57 + 120) )
          {
            v31 = *(float *)(v56 + v57 + 120);
            v59 = v31;
          }
          v60 = v32;
          if ( v32 > *(float *)(v56 + v57 + 124) )
          {
            v32 = *(float *)(v56 + v57 + 124);
            v60 = v32;
          }
          if ( v59 <= v34 || v60 <= v58 )
            goto LABEL_29;
          goto LABEL_18;
        }
        while ( 1 )
        {
          v48 = (__m128 *)(*((_QWORD *)this + 226) + 136LL * v44);
          if ( (v30 < v48[7].m128_f32[0] || v48[7].m128_f32[2] < v28)
            && (v29 < v48[7].m128_f32[1] || v48[7].m128_f32[3] < v27) )
          {
            v116 = v48[7];
            v47 = v116.m128_f32[2];
            v46 = v116.m128_f32[1];
            v45 = v116.m128_f32[0];
            LODWORD(v108) = _mm_shuffle_ps(v116, v116, 255).m128_u32[0];
            v43 = *(float *)&v108;
            goto LABEL_47;
          }
          if ( v48[8].m128_i8[0] )
          {
            v49 = v48[6].m128_f32[0];
            if ( v49 > v45 )
            {
              v116.m128_i32[0] = v48[6].m128_i32[0];
              v45 = v49;
            }
            v50 = v48[6].m128_f32[1];
            v51 = v46;
            if ( v50 > v46 )
            {
              v116.m128_i32[1] = v48[6].m128_i32[1];
              v46 = v50;
              v51 = v50;
            }
            v52 = v48[6].m128_f32[2];
            v53 = v47;
            if ( v47 > v52 )
            {
              v116.m128_i32[2] = v48[6].m128_i32[2];
              v47 = v52;
              v53 = v52;
            }
            v54 = v48[6].m128_f32[3];
            v55 = v43;
            if ( v43 > v54 )
            {
              LODWORD(v108) = v48[6].m128_i32[3];
              v43 = v54;
              v116.m128_f32[3] = v54;
              v55 = v54;
            }
            if ( v53 > v45 && v55 > v51 )
              goto LABEL_46;
          }
          else
          {
            v84 = *v11;
            v85 = (unsigned int)(*((_DWORD *)this + 240) - 1);
            X = 0LL;
            v115 = 0;
            CMILMatrix::Multiply(
              (const struct CMILMatrix *)&v48[1],
              (const struct CMILMatrix *)(84 * v85 + v84 + 12),
              (struct CMILMatrix *)v114);
            TightBounds = CShapePtr::GetTightBounds((__int64 *)v48);
            if ( TightBounds < 0 )
            {
              if ( TightBounds != -2003304438 )
                ModuleFailFastForHRESULT((unsigned int)TightBounds, retaddr);
              v87 = 0;
              v88 = 0.0;
              v89 = 0.0;
              v90 = 0.0;
            }
            else
            {
              v87 = HIDWORD(X);
              v88 = *((float *)&X + 2);
              v89 = *((float *)&X + 1);
              v90 = *(float *)&X;
            }
            v91 = FLOAT_8388608_0;
            LODWORD(lpMem) = v87;
            if ( COERCE_FLOAT(LODWORD(v90) & _xmm) < 8388608.0 )
            {
              v91 = FLOAT_8388608_0;
              v90 = (float)(int)floorf_0(v90);
            }
            *(float *)&X = v90;
            if ( v91 > COERCE_FLOAT(LODWORD(v89) & _xmm) )
            {
              v91 = FLOAT_8388608_0;
              v89 = (float)(int)floorf_0(v89);
            }
            *((float *)&X + 1) = v89;
            if ( v91 > COERCE_FLOAT(LODWORD(v88) & _xmm) )
              v88 = (float)(int)ceilf_0(v88);
            v92 = *(float *)&lpMem;
            *((float *)&X + 2) = v88;
            if ( COERCE_FLOAT((unsigned int)lpMem & _xmm) < 8388608.0 )
              v92 = (float)(int)ceilf_0(*(float *)&lpMem);
            *((float *)&X + 3) = v92;
            if ( v90 > v45 )
            {
              v116.m128_f32[0] = v90;
              v45 = v90;
            }
            v93 = v46;
            if ( v89 > v46 )
            {
              v116.m128_f32[1] = v89;
              v46 = v89;
              v93 = v89;
            }
            v94 = v47;
            if ( v47 > v88 )
            {
              v116.m128_f32[2] = v88;
              v47 = v88;
              v94 = v88;
            }
            v43 = *(float *)&v108;
            v95 = *(float *)&v108;
            if ( *(float *)&v108 > v92 )
            {
              *(float *)&v108 = v92;
              v43 = v92;
              v116.m128_f32[3] = v92;
              v95 = v92;
            }
            if ( v94 > v45 && v95 > v93 )
              goto LABEL_46;
          }
          v43 = 0.0;
          v45 = 0.0;
          v46 = 0.0;
          v116 = 0uLL;
          v47 = 0.0;
          LODWORD(v108) = 0;
LABEL_46:
          v48[7] = v116;
          v27 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
          v28 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
          v29 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
          v30 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
LABEL_47:
          if ( ++v44 >= *((_DWORD *)this + 458) )
          {
            v40 = *((_DWORD *)this + 458);
            goto LABEL_49;
          }
        }
      }
      v116 = *(__m128 *)(*((_QWORD *)this + 402) + 16LL * (unsigned int)(v33 - 1));
      v31 = v116.m128_f32[2];
      LODWORD(v32) = _mm_shuffle_ps(v116, v116, 255).m128_u32[0];
    }
    v34 = v116.m128_f32[0];
    v35 = v116.m128_f32[1];
    goto LABEL_16;
  }
  if ( (_BYTE)v10 )
    CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 936), v106);
  if ( v106[2] )
    CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)this + 936), v16);
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v9, 0x1037u, 0LL);
  return (unsigned int)v9;
}
