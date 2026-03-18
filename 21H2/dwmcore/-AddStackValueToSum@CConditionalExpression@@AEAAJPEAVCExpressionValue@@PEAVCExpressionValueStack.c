/*
 * XREFs of ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1802108EC
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180210CA0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18004F220 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x18026C9B0 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConditionalExpression::AddStackValueToSum(
        CConditionalExpression *this,
        struct CExpressionValue *a2,
        struct CExpressionValueStack *a3)
{
  unsigned __int8 IsEnabled; // al
  unsigned int v6; // edx
  CExpressionValue *v7; // rax
  int *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  _OWORD *v11; // rax
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm5_4
  unsigned int v18; // ebx
  unsigned int v19; // xmm0_4
  unsigned int v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  unsigned int v28; // [rsp+20h] [rbp-88h]
  __int128 v29; // [rsp+30h] [rbp-78h]
  _BYTE v30[80]; // [rsp+40h] [rbp-68h] BYREF

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v6 = *((_DWORD *)a3 + 4) - 1;
  if ( IsEnabled && v6 >= *((_DWORD *)a3 + 12) )
  {
    v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v30);
    v8 = (int *)&CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v30);
  }
  else
  {
    v8 = (int *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)a3 + 3, v6);
  }
  if ( !*((_BYTE *)a2 + 76) )
  {
    CExpressionValue::CopyFrom(a2, (const struct CExpressionValue *)v8);
LABEL_25:
    --*((_DWORD *)a3 + 4);
    return 0;
  }
  v10 = v8[18];
  switch ( v10 )
  {
    case 18:
      v26 = *(float *)v8 + *(float *)a2;
      *((_DWORD *)a2 + 18) = 18;
      *(float *)a2 = v26;
      goto LABEL_24;
    case 35:
      v24 = *(float *)a2 + *(float *)v8;
      v25 = *((float *)v8 + 1) + *((float *)a2 + 1);
      *((_DWORD *)a2 + 18) = 35;
      *(float *)a2 = v24;
      *((float *)a2 + 1) = v25;
      goto LABEL_24;
    case 52:
      v21 = *((float *)a2 + 1) + *((float *)v8 + 1);
      v22 = *((float *)a2 + 2) + *((float *)v8 + 2);
      v23 = *(float *)v8 + *(float *)a2;
      *((_DWORD *)a2 + 18) = 52;
      *(float *)a2 = v23;
      *((float *)a2 + 1) = v21;
      *((float *)a2 + 2) = v22;
      goto LABEL_24;
    case 69:
      *(float *)&v29 = *(float *)a2 + *(float *)v8;
      *(float *)&v19 = *((float *)a2 + 2) + *((float *)v8 + 2);
      *((float *)&v29 + 1) = *((float *)a2 + 1) + *((float *)v8 + 1);
      *(float *)&v20 = *((float *)a2 + 3) + *((float *)v8 + 3);
      *((_DWORD *)a2 + 18) = 69;
      *((_QWORD *)&v29 + 1) = __PAIR64__(v20, v19);
      *(_OWORD *)a2 = v29;
      goto LABEL_24;
  }
  if ( v10 <= 69 )
  {
LABEL_19:
    v28 = 442;
    goto LABEL_18;
  }
  if ( v10 > 71 )
  {
    if ( v10 == 104 )
    {
      v12 = *((float *)a2 + 1) + *((float *)v8 + 1);
      v13 = *((float *)a2 + 2) + *((float *)v8 + 2);
      v14 = *((float *)a2 + 3) + *((float *)v8 + 3);
      v15 = *((float *)a2 + 4) + *((float *)v8 + 4);
      v16 = *((float *)a2 + 5) + *((float *)v8 + 5);
      v17 = *(float *)v8 + *(float *)a2;
      *((_DWORD *)a2 + 18) = 104;
      *(float *)a2 = v17;
      *((float *)a2 + 1) = v12;
      *((float *)a2 + 2) = v13;
      *((float *)a2 + 3) = v14;
      *((float *)a2 + 4) = v15;
      *((float *)a2 + 5) = v16;
      goto LABEL_24;
    }
    if ( v10 == 265 )
    {
      v11 = (_OWORD *)D2DMatrix::operator+(a2, v30, v8);
      *((_DWORD *)a2 + 18) = 265;
      *(_OWORD *)a2 = *v11;
      *((_OWORD *)a2 + 1) = v11[1];
      *((_OWORD *)a2 + 2) = v11[2];
      *((_OWORD *)a2 + 3) = v11[3];
LABEL_24:
      *((_BYTE *)a2 + 76) = 1;
      goto LABEL_25;
    }
    goto LABEL_19;
  }
  v28 = 423;
LABEL_18:
  v18 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024809, v28);
  return v18;
}
