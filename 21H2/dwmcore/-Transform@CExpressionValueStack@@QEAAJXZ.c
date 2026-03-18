/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x180250ABC
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
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x18026F0D4 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Transform(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  float *v4; // rbx
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  float *v7; // rdi
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // r9d
  __int128 v13; // xmm0
  float v14; // xmm2_4
  float v15; // xmm3_4
  unsigned int v17; // [rsp+20h] [rbp-98h]
  unsigned int v18; // [rsp+28h] [rbp-90h]
  _BYTE v19[80]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v20; // [rsp+80h] [rbp-38h] BYREF
  __int128 v21; // [rsp+90h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (float *)&CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 2;
    if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *((_DWORD *)this + 4) - 1;
    if ( v8 && v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    }
    else
    {
      v4 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    if ( *((_DWORD *)v7 + 18) == 35 )
    {
      if ( *((_DWORD *)v4 + 18) != 104 )
      {
        v17 = 2847;
        goto LABEL_3;
      }
      v14 = (float)((float)(v7[1] * v4[2]) + (float)(*v7 * *v4)) + v4[4];
      v15 = (float)((float)(*v7 * v4[1]) + (float)(v7[1] * v4[3])) + v4[5];
      *((_DWORD *)v7 + 18) = 35;
      *v7 = v14;
      v7[1] = v15;
    }
    else
    {
      if ( *((_DWORD *)v7 + 18) != 69 )
      {
LABEL_21:
        --*((_DWORD *)this + 4);
        return 0;
      }
      if ( *((_DWORD *)v4 + 18) != 265 )
      {
        v17 = 2816;
        goto LABEL_3;
      }
      v20 = *(_OWORD *)v7;
      D3DXVec4TransformArray(
        (struct D2DVector4 *)&v21,
        v11,
        (const struct D2DVector4 *)&v20,
        v12,
        (const struct D2DMatrix *)v4,
        v18);
      v13 = v21;
      *((_DWORD *)v7 + 18) = 69;
      *(_OWORD *)v7 = v13;
    }
    *((_BYTE *)v7 + 76) = 1;
    goto LABEL_21;
  }
  v17 = 2790;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v17);
  return v2;
}
