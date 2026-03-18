/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x180072FBC
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

__int64 __fastcall CExpressionValueStack::Matrix3x2(CExpressionValueStack *this)
{
  int v2; // edi
  _QWORD *v3; // r14
  unsigned int v4; // esi
  char IsEnabled; // al
  __int64 v6; // rdx
  CExpressionValue *v7; // rax
  _DWORD *v8; // rax
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // xmm5_4
  int v12; // xmm4_4
  int v13; // xmm3_4
  int v14; // xmm2_4
  int v15; // xmm1_4
  int v16; // xmm0_4
  unsigned int v18; // [rsp+20h] [rbp-A8h]
  _BYTE v19[80]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v20[6]; // [rsp+80h] [rbp-48h] BYREF

  if ( *((_DWORD *)this + 4) >= 6u )
  {
    v2 = 0;
    v3 = v20;
    v4 = 0;
    while ( 1 )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v6 = (unsigned int)(v2 + *((_DWORD *)this + 4) - 6);
      if ( IsEnabled && (unsigned int)v6 >= *((_DWORD *)this + 12) )
      {
        v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v7);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
        v8 = &CExpressionValueStack::s_emptyValue;
      }
      else
      {
        v8 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v6);
      }
      v9 = v8[18] == 18;
      *v3 = v8;
      if ( !v9 )
        break;
      ++v2;
      ++v3;
      if ( v2 >= 6 )
      {
        v10 = v20[0];
        v11 = *(_DWORD *)v20[0];
        v12 = *(_DWORD *)v20[1];
        v13 = *(_DWORD *)v20[2];
        v14 = *(_DWORD *)v20[3];
        v15 = *(_DWORD *)v20[4];
        v16 = *(_DWORD *)v20[5];
        *(_DWORD *)(v20[0] + 72LL) = 104;
        *(_DWORD *)v10 = v11;
        *(_DWORD *)(v10 + 4) = v12;
        *(_DWORD *)(v10 + 8) = v13;
        *(_DWORD *)(v10 + 12) = v14;
        *(_DWORD *)(v10 + 16) = v15;
        *(_DWORD *)(v10 + 20) = v16;
        *(_BYTE *)(v10 + 76) = 1;
        *((_DWORD *)this + 4) -= 5;
        return v4;
      }
    }
    v18 = 5542;
  }
  else
  {
    v18 = 5528;
  }
  v4 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v18,
    0LL);
  return v4;
}
