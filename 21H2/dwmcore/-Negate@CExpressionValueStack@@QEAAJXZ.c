/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x180072870
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
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x18026C808 (--GD2DMatrix@@QEBA-AU0@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  char IsEnabled; // al
  __int64 v4; // rdx
  CExpressionValue *v5; // rax
  __m128 *v6; // rbx
  __int32 v7; // eax
  __m128 *v8; // rax
  __m128 v9; // xmm0
  __int32 v10; // xmm1_4
  __m128 v11; // xmm0
  __int32 v12; // xmm1_4
  __int32 v13; // xmm0_4
  __int32 v14; // xmm1_4
  unsigned int v16; // [rsp+20h] [rbp-88h]
  _BYTE v17[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( IsEnabled && (unsigned int)v4 >= *((_DWORD *)this + 12) )
    {
      v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
      v6 = (__m128 *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v5);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
    }
    else
    {
      v6 = (__m128 *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v4);
    }
    v7 = v6[4].m128_i32[2];
    switch ( v7 )
    {
      case 18:
        v6->m128_i32[0] ^= _xmm;
        v6[4].m128_i32[2] = 18;
        break;
      case 35:
        v14 = v6->m128_i32[1] ^ _xmm;
        v6->m128_i32[0] ^= _xmm;
        v6->m128_i32[1] = v14;
        v6[4].m128_i32[2] = 35;
        break;
      case 52:
        v12 = v6->m128_i32[2];
        v6->m128_i32[0] ^= _xmm;
        v13 = v6->m128_i32[1] ^ _xmm;
        v6->m128_i32[2] = v12 ^ _xmm;
        v6->m128_i32[1] = v13;
        v6[4].m128_i32[2] = 52;
        break;
      case 69:
        v11 = *v6;
        v6[4].m128_i32[2] = 69;
        *v6 = _mm_xor_ps(v11, (__m128)_xmm);
        break;
      case 104:
        v9 = *v6;
        v6[4].m128_i32[2] = 104;
        v10 = v6[1].m128_i32[0] ^ _xmm;
        *v6 = _mm_xor_ps(v9, (__m128)_xmm);
        v9.m128_i32[0] = v6[1].m128_i32[1] ^ _xmm;
        v6[1].m128_i32[0] = v10;
        v6[1].m128_i32[1] = v9.m128_i32[0];
        break;
      case 265:
        v8 = (__m128 *)D2DMatrix::operator-(v6, v17);
        v6[4].m128_i32[2] = 265;
        *v6 = *v8;
        v6[1] = v8[1];
        v6[2] = v8[2];
        v6[3] = v8[3];
        break;
      default:
        v16 = 826;
        goto LABEL_3;
    }
    v6[4].m128_i8[12] = 1;
    return 0;
  }
  v16 = 764;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v16,
    0LL);
  return v2;
}
