/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x180072C2C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
{
  char IsEnabled; // al
  __int64 v3; // rdx
  CExpressionValue *v4; // rax
  _DWORD *v5; // rax
  bool v6; // zf
  int v7; // xmm2_4
  int v8; // xmm0_4
  int v9; // xmm3_4
  int v10; // xmm1_4
  int v11; // xmm5_4
  int v12; // xmm4_4
  int v13; // esi
  _QWORD *i; // r14
  char v15; // al
  __int64 v16; // rdx
  CExpressionValue *v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rcx
  int v20; // xmm14_4
  int v21; // xmm15_4
  int v22; // xmm13_4
  int v23; // xmm12_4
  int v24; // xmm11_4
  int v25; // xmm10_4
  int v26; // xmm9_4
  int v27; // xmm8_4
  int v28; // xmm7_4
  int v29; // xmm6_4
  int v30; // xmm5_4
  int v31; // xmm4_4
  int v32; // xmm3_4
  int v33; // xmm2_4
  int v34; // xmm1_4
  int v35; // xmm0_4
  unsigned int v36; // edi
  unsigned int v38; // [rsp+28h] [rbp-E0h]
  _BYTE v39[80]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v40[16]; // [rsp+88h] [rbp-80h] BYREF

  if ( !*((_DWORD *)this + 4) )
  {
    v38 = 5583;
LABEL_23:
    v36 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v38,
      0LL);
    return v36;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( IsEnabled && (unsigned int)v3 >= *((_DWORD *)this + 12) )
  {
    v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v39);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v4);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v39);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v5 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v3);
  }
  v6 = v5[18] == 18;
  v40[0] = v5;
  if ( v6 )
  {
    if ( *((_DWORD *)this + 4) >= 0x10u )
    {
      v13 = -15;
      for ( i = v40; ; ++i )
      {
        v15 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
        v16 = (unsigned int)(v13 + *((_DWORD *)this + 4) - 1);
        if ( v15 && (unsigned int)v16 >= *((_DWORD *)this + 12) )
        {
          v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v39);
          CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v17);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v39);
          v18 = &CExpressionValueStack::s_emptyValue;
        }
        else
        {
          v18 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v16);
        }
        v6 = v18[18] == 18;
        *i = v18;
        if ( !v6 )
          break;
        if ( ++v13 + 15 >= 16 )
        {
          v19 = v40[0];
          v20 = *(_DWORD *)v40[1];
          v21 = *(_DWORD *)v40[0];
          v22 = *(_DWORD *)v40[2];
          v23 = *(_DWORD *)v40[3];
          v24 = *(_DWORD *)v40[4];
          v25 = *(_DWORD *)v40[5];
          v26 = *(_DWORD *)v40[6];
          v27 = *(_DWORD *)v40[7];
          v28 = *(_DWORD *)v40[8];
          v29 = *(_DWORD *)v40[9];
          v30 = *(_DWORD *)v40[10];
          v31 = *(_DWORD *)v40[11];
          v32 = *(_DWORD *)v40[12];
          v33 = *(_DWORD *)v40[13];
          v34 = *(_DWORD *)v40[14];
          v35 = *(_DWORD *)v40[15];
          *(_DWORD *)(v40[0] + 72LL) = 265;
          *(_DWORD *)v19 = v21;
          *(_DWORD *)(v19 + 4) = v20;
          *(_DWORD *)(v19 + 8) = v22;
          *(_DWORD *)(v19 + 12) = v23;
          *(_DWORD *)(v19 + 16) = v24;
          *(_DWORD *)(v19 + 20) = v25;
          *(_DWORD *)(v19 + 24) = v26;
          *(_DWORD *)(v19 + 28) = v27;
          *(_DWORD *)(v19 + 32) = v28;
          *(_DWORD *)(v19 + 36) = v29;
          *(_DWORD *)(v19 + 40) = v30;
          *(_DWORD *)(v19 + 44) = v31;
          *(_DWORD *)(v19 + 48) = v32;
          *(_DWORD *)(v19 + 52) = v33;
          *(_DWORD *)(v19 + 56) = v34;
          *(_DWORD *)(v19 + 60) = v35;
          *(_BYTE *)(v19 + 76) = 1;
          *((_DWORD *)this + 4) -= 15;
          return 0;
        }
      }
      v38 = 5611;
    }
    else
    {
      v38 = 5597;
    }
    goto LABEL_23;
  }
  if ( v5[18] != 104 )
  {
    v38 = 5649;
    goto LABEL_23;
  }
  v7 = *v5;
  v8 = v5[1];
  v9 = v5[2];
  v10 = v5[3];
  v11 = v5[4];
  v12 = v5[5];
  v5[18] = 265;
  *v5 = v7;
  v5[1] = v8;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = v9;
  v5[5] = v10;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  *((_QWORD *)v5 + 5) = 1065353216LL;
  v5[12] = v11;
  v5[13] = v12;
  v5[14] = 0;
  v5[15] = 1065353216;
  *((_BYTE *)v5 + 76) = 1;
  return 0;
}
