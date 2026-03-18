/*
 * XREFs of ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18008A548
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18008A3E8 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x18001F0E8 (-Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimation.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x180089498 (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180089588 (-Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation.c)
 *     ?Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpolation@@@Z @ 0x180089840 (-Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpola.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x18008A320 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x18008A8D0 (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 *     ?Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInterpolation@@@Z @ 0x18008BA9C (-Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInte.c)
 *     ?Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x18008CE84 (-Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasing.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800C3C3C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7D50 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B2D08 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1802054F8 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 *     ?Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x180205A14 (-Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 *     ?Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180205AE8 (-Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180205BDC (-Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180205C78 (-Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasi.c)
 *     ?Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180205D54 (-Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 */

__int64 __fastcall CKeyframeAnimation::AddKeyframeData(
        __int64 a1,
        unsigned int a2,
        float a3,
        __int64 a4,
        unsigned int a5)
{
  __int128 v8; // xmm1
  int v9; // r8d
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // ecx
  __int64 v15; // rbx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v20; // r8d
  int v21; // r14d
  int v22; // esi
  int v23; // edi
  int v24; // ebx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  int v29; // r8d
  int v30; // r8d
  int v31; // r8d
  unsigned int v32; // ebx
  __int64 v33; // r8
  unsigned int v34; // ebx
  float v35; // xmm6_4
  int v36; // eax
  int v37; // r8d
  unsigned int v38; // edi
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  __int64 v41; // r8
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // edi
  unsigned int v45; // ebx
  int v46; // xmm1_4
  bool v47; // al
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned int v50; // [rsp+28h] [rbp-B1h]
  struct KeyframeValue *v51[4]; // [rsp+48h] [rbp-91h] BYREF
  _OWORD v52[4]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-31h] BYREF
  int v54; // [rsp+B0h] [rbp-29h]
  char v55; // [rsp+B4h] [rbp-25h]
  struct KeyframeInterpolation *v56; // [rsp+150h] [rbp+77h] BYREF

  g_dbgKeyFrameData = *(_OWORD *)a4;
  v51[0] = 0LL;
  v8 = *(_OWORD *)(a4 + 16);
  v56 = 0LL;
  xmmword_1803451E0 = v8;
  xmmword_1803451F0 = *(_OWORD *)(a4 + 32);
  v9 = *(_DWORD *)(a4 + 4);
  if ( v9 > 65539 )
  {
    v29 = v9 - 65540;
    if ( !v29 )
    {
      v44 = (int)*(float *)(a4 + 8);
      v45 = (int)*(float *)(a4 + 12);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
      v11 = XamlElasticInterpolation::Create(a5, v44, v45);
      v13 = v11;
      if ( v11 < 0 )
      {
        v50 = 1177;
        goto LABEL_42;
      }
      goto LABEL_6;
    }
    v30 = v29 - 1;
    if ( !v30 )
    {
      v34 = (int)*(float *)(a4 + 8);
      v35 = *(float *)(a4 + 12);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
      v11 = XamlExponentialInterpolation::Create(a5, v34, v35, (float **)&v56);
      v13 = v11;
      if ( v11 < 0 )
      {
        v50 = 1185;
        goto LABEL_42;
      }
      goto LABEL_6;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      v32 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
      v11 = XamlPowerInterpolation::Create(a5, v32, v33, &v56);
      v13 = v11;
      if ( v11 < 0 )
      {
        v50 = 1193;
        goto LABEL_42;
      }
      goto LABEL_6;
    }
    if ( v31 == 1 )
    {
      v43 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
      v11 = XamlSineInterpolation::Create(a5, v43, &v56);
      v13 = v11;
      if ( v11 < 0 )
      {
        v50 = 1200;
        goto LABEL_42;
      }
      goto LABEL_6;
    }
LABEL_51:
    v13 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003303421, 0x4B7u, 0LL);
    goto LABEL_15;
  }
  if ( v9 == 65539 )
  {
    v42 = (int)*(float *)(a4 + 8);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
    v11 = XamlCircleInterpolation::Create(a5, v42, &v56);
    v13 = v11;
    if ( v11 < 0 )
    {
      v50 = 1168;
      goto LABEL_42;
    }
    goto LABEL_6;
  }
  if ( !v9 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
    v11 = LinearInterpolation::Create(a5, &v56);
    v13 = v11;
    if ( v11 < 0 )
    {
      v50 = 1133;
      goto LABEL_42;
    }
    goto LABEL_6;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
    v11 = CubicBezierInterpolation::Create(a5);
    v13 = v11;
    if ( v11 >= 0 )
      goto LABEL_6;
    v50 = 1127;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v50, 0LL);
    goto LABEL_15;
  }
  v20 = v10 - 1;
  if ( v20 )
  {
    v37 = v20 - 0xFFFF;
    if ( !v37 )
    {
      v40 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
      v11 = XamlBackInterpolation::Create(a5, v40, v41, &v56);
      v13 = v11;
      if ( v11 < 0 )
      {
        v50 = 1152;
        goto LABEL_42;
      }
      goto LABEL_6;
    }
    if ( v37 == 1 )
    {
      v38 = (int)*(float *)(a4 + 8);
      v39 = (int)*(float *)(a4 + 12);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
      v11 = XamlBounceInterpolation::Create(a5, v38, v39);
      v13 = v11;
      if ( v11 < 0 )
      {
        v50 = 1161;
        goto LABEL_42;
      }
      goto LABEL_6;
    }
    goto LABEL_51;
  }
  v21 = (int)*(float *)(a4 + 8);
  v22 = (int)*(float *)(a4 + 12);
  v23 = (int)*(float *)(a4 + 16);
  v24 = (int)*(float *)(a4 + 20);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
  v11 = StepInterpolation::Create(a5, v21, v22, v23, v24 & 1, (v24 & 2) != 0, &v56);
  v13 = v11;
  if ( v11 < 0 )
  {
    v50 = 1144;
    goto LABEL_42;
  }
LABEL_6:
  if ( *(_DWORD *)(a4 + 24) != 1 )
  {
    if ( *(_DWORD *)(a4 + 24) == 2 )
    {
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v51);
      KeyframeValue::CreateExpressionKeyframeValue(*(unsigned int *)(a1 + 144), a1, *(unsigned int *)(a4 + 32), v51);
    }
    else
    {
      if ( *(_DWORD *)(a4 + 24) != 3 )
      {
        v13 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(
          (unsigned int)(*(_DWORD *)(a4 + 24) - 2),
          0LL,
          0,
          -2003303421,
          0x50Bu,
          0LL);
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v51);
      KeyframeValue::CreateStartingValueKeyframeValue(*(unsigned int *)(a1 + 144), a1, v51);
    }
    goto LABEL_14;
  }
  memset_0(v52, 0, sizeof(v52));
  v14 = *(_DWORD *)(a1 + 144);
  v15 = 0LL;
  v53 = 0LL;
  v54 = 18;
  v55 = 0;
  v16 = v14 - 11;
  if ( v16 )
  {
    v17 = v16 - 6;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v25 = v18 - 17;
        if ( v25 )
        {
          v26 = v25 - 17;
          if ( v26 )
          {
            v27 = v26 - 17;
            if ( v27 )
            {
              v28 = (unsigned int)(v27 - 1);
              if ( (_DWORD)v28 )
              {
                if ( (_DWORD)v28 != 1 )
                {
                  v13 = -2003303421;
                  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, -2003303421, 0x502u, 0LL);
                  goto LABEL_15;
                }
                D3DXQuaternionNormalize((struct D2DQuaternion *)&v51[1], (const struct D2DQuaternion *)(a4 + 32));
                v54 = 71;
                v52[0] = *(_OWORD *)&v51[1];
                goto LABEL_11;
              }
              v54 = 70;
            }
            else
            {
              v54 = 69;
            }
            v52[0] = *(_OWORD *)(a4 + 32);
          }
          else
          {
            v36 = *(_DWORD *)(a4 + 40);
            *(_QWORD *)&v52[0] = *(_QWORD *)(a4 + 32);
            v54 = 52;
            DWORD2(v52[0]) = v36;
          }
        }
        else
        {
          v46 = *(_DWORD *)(a4 + 36);
          LODWORD(v52[0]) = *(_DWORD *)(a4 + 32);
          DWORD1(v52[0]) = v46;
          v54 = 35;
        }
      }
      else
      {
        LODWORD(v52[0]) = *(_DWORD *)(a4 + 32);
      }
    }
    else
    {
      v47 = *(float *)(a4 + 32) != 0.0;
      v54 = 17;
      LOBYTE(v52[0]) = v47;
    }
LABEL_11:
    v55 = 1;
    goto LABEL_12;
  }
  v48 = *(unsigned int *)(a4 + 32);
  v49 = *(_QWORD *)(a1 + 424);
  v54 = 11;
  v55 = 1;
  Microsoft::WRL::ComPtr<CPathData>::operator=(&v53, *(_QWORD *)(v49 + 8 * v48));
  v15 = v53;
LABEL_12:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v51);
  KeyframeValue::CreateConstantKeyframeValue((const struct CExpressionValue *)v52, v51);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_14:
  KeyframeSequence::AddKeyframe(*(KeyframeSequence **)(a1 + 360), a2, a3, v51[0], v56);
  v13 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v56);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v51);
  return v13;
}
