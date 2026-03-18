/*
 * XREFs of ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18004D958
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18004D7F8 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18002089C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpolation@@@Z @ 0x18004D494 (-Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpola.c)
 *     ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z @ 0x18004D5E8 (-Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation.c)
 *     ?Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInterpolation@@@Z @ 0x18004D660 (-Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInte.c)
 *     ??4?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z @ 0x18004E060 (--4-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z.c)
 *     ??4?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z @ 0x18004E0C0 (--4-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x18004E120 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800CE7E8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D75D0 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800E1F9C (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1800E68A8 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 *     ?Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1800F0BFC (-Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasing.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x180256DD4 (-Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 *     ?Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180256EAC (-Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180256FA4 (-Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180257044 (-Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasi.c)
 *     ?Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x180257120 (-Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimation.c)
 *     ?Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1802571F4 (-Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 */

__int64 __fastcall CKeyframeAnimation::AddKeyframeData(
        __int64 a1,
        unsigned int a2,
        float a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v7; // r12
  __int128 v8; // xmm1
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  unsigned int v13; // edi
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // r14d
  int v23; // esi
  int v24; // edi
  int v25; // ebx
  int v26; // eax
  unsigned int v27; // ecx
  float v28; // xmm9_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // ebx
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // r8d
  int v40; // r8d
  int v41; // r8d
  unsigned int v42; // ebx
  int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // ebx
  __int64 v46; // r8
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // ebx
  __int64 v50; // r8
  int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // edi
  unsigned int v54; // ebx
  int v55; // eax
  unsigned int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  unsigned __int64 v64; // rcx
  int v65; // eax
  int v66; // xmm1_4
  bool v67; // al
  __int64 v68; // rdx
  __int64 v69; // rdx
  float v70; // xmm10_4
  __int64 v71; // rdi
  int v72; // ecx
  __m128 v73; // xmm2
  __m128 v74; // rt1
  struct KeyframeValue *v75; // rdx
  unsigned int v77; // [rsp+28h] [rbp-B1h]
  float *v78; // [rsp+48h] [rbp-91h] BYREF
  struct KeyframeValue *v79[3]; // [rsp+50h] [rbp-89h] BYREF
  _OWORD v80[4]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-31h] BYREF
  int v82; // [rsp+B0h] [rbp-29h]
  char v83; // [rsp+B4h] [rbp-25h]
  float v84; // [rsp+150h] [rbp+77h]

  g_dbgKeyFrameData = *(_OWORD *)a4;
  v7 = a2;
  v8 = *(_OWORD *)(a4 + 16);
  v79[0] = 0LL;
  xmmword_1803D30A8 = v8;
  v78 = 0LL;
  xmmword_1803D30B8 = *(_OWORD *)(a4 + 32);
  v9 = *(_DWORD *)(a4 + 4);
  if ( v9 > 65539 )
  {
    v39 = v9 - 65540;
    if ( !v39 )
    {
      v53 = (int)*(float *)(a4 + 8);
      v54 = (int)*(float *)(a4 + 12);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
      v55 = XamlElasticInterpolation::Create(a5, v53, v54);
      v17 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x4A8u, 0LL);
        goto LABEL_66;
      }
      goto LABEL_32;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      v49 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
      v51 = XamlExponentialInterpolation::Create(a5, v49, v50, &v78);
      v17 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x4B0u, 0LL);
        goto LABEL_66;
      }
      goto LABEL_32;
    }
    v41 = v40 - 1;
    if ( !v41 )
    {
      v45 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
      v47 = XamlPowerInterpolation::Create(a5, v45, v46, &v78);
      v17 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x4B8u, 0LL);
        goto LABEL_66;
      }
      goto LABEL_32;
    }
    if ( v41 == 1 )
    {
      v42 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
      v43 = XamlSineInterpolation::Create(a5, v42, &v78);
      v17 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x4BFu, 0LL);
        goto LABEL_66;
      }
      goto LABEL_32;
    }
    goto LABEL_24;
  }
  if ( v9 == 65539 )
  {
    v36 = (int)*(float *)(a4 + 8);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
    v37 = XamlCircleInterpolation::Create(a5, v36, &v78);
    v17 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x49Fu, 0LL);
      goto LABEL_66;
    }
    goto LABEL_32;
  }
  if ( !v9 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
    v34 = LinearInterpolation::Create(a5, &v78);
    v17 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x47Cu, 0LL);
      goto LABEL_66;
    }
    goto LABEL_32;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v28 = *(float *)(a4 + 8);
    v29 = *(float *)(a4 + 12);
    v30 = *(float *)(a4 + 16);
    v31 = *(float *)(a4 + 20);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
    v32 = CubicBezierInterpolation::Create(a5, v28, v29, v30, v31, &v78);
    v17 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x476u, 0LL);
      goto LABEL_66;
    }
    goto LABEL_32;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v22 = (int)*(float *)(a4 + 8);
    v23 = (int)*(float *)(a4 + 12);
    v24 = (int)*(float *)(a4 + 16);
    v25 = (int)*(float *)(a4 + 20);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
    v26 = StepInterpolation::Create(a5, v22, v23, v24, v25 & 1, (v25 & 2) != 0, &v78);
    v17 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x487u, 0LL);
      goto LABEL_66;
    }
    goto LABEL_32;
  }
  v12 = v11 - 0xFFFF;
  if ( !v12 )
  {
    v18 = (int)*(float *)(a4 + 8);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
    v20 = XamlBackInterpolation::Create(a5, v18, v19, &v78);
    v17 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x48Fu, 0LL);
      goto LABEL_66;
    }
    goto LABEL_32;
  }
  if ( v12 != 1 )
  {
LABEL_24:
    v17 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003303421, 0x4C6u, 0LL);
    goto LABEL_66;
  }
  v13 = (int)*(float *)(a4 + 8);
  v14 = (int)*(float *)(a4 + 12);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
  v15 = XamlBounceInterpolation::Create(a5, v13, v14);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x498u, 0LL);
    goto LABEL_66;
  }
LABEL_32:
  if ( *(_DWORD *)(a4 + 24) != 1 )
  {
    if ( *(_DWORD *)(a4 + 24) == 2 )
    {
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(v79);
      KeyframeValue::CreateExpressionKeyframeValue(*(unsigned int *)(a1 + 152), a1, *(unsigned int *)(a4 + 32), v79);
    }
    else
    {
      if ( *(_DWORD *)(a4 + 24) != 3 )
      {
        v17 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(*(_DWORD *)(a4 + 24) - 2, 0LL, 0, -2003303421, 0x51Fu, 0LL);
        goto LABEL_66;
      }
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(v79);
      KeyframeValue::CreateStartingValueKeyframeValue(*(unsigned int *)(a1 + 152), a1, v79);
    }
    goto LABEL_61;
  }
  memset_0(v80, 0, sizeof(v80));
  v57 = *(_DWORD *)(a1 + 152);
  v81 = 0LL;
  v82 = 18;
  v83 = 0;
  v58 = v57 - 11;
  if ( v58 )
  {
    v59 = v58 - 6;
    if ( v59 )
    {
      v60 = v59 - 1;
      if ( v60 )
      {
        v61 = v60 - 17;
        if ( v61 )
        {
          v62 = v61 - 17;
          if ( v62 )
          {
            v63 = v62 - 17;
            if ( v63 )
            {
              LODWORD(v64) = v63 - 1;
              if ( (_DWORD)v64 )
              {
                if ( (_DWORD)v64 != 1 )
                {
                  v77 = 1302;
LABEL_58:
                  v17 = -2003303421;
                  MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, -2003303421, v77, 0LL);
                  CExpressionValue::~CExpressionValue((CExpressionValue *)v80);
                  goto LABEL_66;
                }
                D3DXQuaternionNormalize((struct D2DQuaternion *)&v79[1], (const struct D2DQuaternion *)(a4 + 32));
                v82 = 71;
                v80[0] = *(_OWORD *)&v79[1];
                goto LABEL_55;
              }
              v82 = 70;
            }
            else
            {
              v82 = 69;
            }
            v80[0] = *(_OWORD *)(a4 + 32);
          }
          else
          {
            v65 = *(_DWORD *)(a4 + 40);
            *(_QWORD *)&v80[0] = *(_QWORD *)(a4 + 32);
            v82 = 52;
            DWORD2(v80[0]) = v65;
          }
        }
        else
        {
          v66 = *(_DWORD *)(a4 + 36);
          LODWORD(v80[0]) = *(_DWORD *)(a4 + 32);
          DWORD1(v80[0]) = v66;
          v82 = 35;
        }
      }
      else
      {
        LODWORD(v80[0]) = *(_DWORD *)(a4 + 32);
      }
    }
    else
    {
      v67 = *(float *)(a4 + 32) != 0.0;
      v82 = 17;
      LOBYTE(v80[0]) = v67;
    }
LABEL_55:
    v83 = 1;
    goto LABEL_60;
  }
  v68 = *(_QWORD *)(a1 + 456);
  v64 = *(unsigned int *)(a4 + 32);
  if ( v64 >= (*(_QWORD *)(a1 + 464) - v68) >> 3 )
  {
    v77 = 1295;
    goto LABEL_58;
  }
  v69 = *(_QWORD *)(v68 + 8 * v64);
  v82 = 11;
  v83 = 1;
  Microsoft::WRL::ComPtr<CPathData>::operator=(&v81, v69);
LABEL_60:
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(v79);
  KeyframeValue::CreateConstantKeyframeValue((const struct CExpressionValue *)v80, v79);
  CExpressionValue::~CExpressionValue((CExpressionValue *)v80);
LABEL_61:
  v70 = a3 * 1000.0;
  v71 = *(_QWORD *)(a1 + 384);
  if ( COERCE_UNSIGNED_INT(fabs(a3 * 1000.0)) > 0x497FFFF0 )
  {
    v73 = 0LL;
    v73.m128_f32[0] = (float)(int)v70 - v70;
    v74.m128_f32[0] = FLOAT_N0_5;
    v72 = (int)v70 - _mm_cmple_ss(v73, v74).m128_u32[0];
  }
  else
  {
    v84 = v70 + 6291456.25;
    v72 = (int)(LODWORD(v84) << 10) >> 11;
  }
  v75 = v79[0];
  *(_DWORD *)(*(_QWORD *)(v71 + 104) + 24 * v7) = v72;
  Microsoft::WRL::ComPtr<KeyframeValue>::operator=(*(_QWORD *)(v71 + 104) + 8LL + 24 * v7, v75);
  Microsoft::WRL::ComPtr<KeyframeInterpolation>::operator=(*(_QWORD *)(v71 + 104) + 16LL + 24 * v7, v78);
  *(_BYTE *)(v71 + 140) |= 4u;
  v17 = 0;
LABEL_66:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v78);
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(v79);
  return v17;
}
