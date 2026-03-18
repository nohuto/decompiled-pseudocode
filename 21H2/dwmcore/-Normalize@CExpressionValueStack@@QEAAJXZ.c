/*
 * XREFs of ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18024EC64
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800207F8 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18002089C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18026E3B0 (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x18026E938 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Normalize(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  const struct D2DVector2 *v6; // rbx
  int v7; // eax
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-78h]
  __int128 v11; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v12[88]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = *((_DWORD *)this + 4) - 1;
    if ( IsEnabled && v4 >= *((_DWORD *)this + 12) )
    {
      v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v12);
      v6 = (const struct D2DVector2 *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v12);
    }
    else
    {
      v6 = (const struct D2DVector2 *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v4);
    }
    v7 = *((_DWORD *)v6 + 18);
    if ( v7 == 35 )
    {
      D3DXVec2Normalize((struct D2DVector2 *)&v13, v6);
      *(_QWORD *)v6 = v13;
      *((_DWORD *)v6 + 18) = 35;
    }
    else if ( v7 == 52 )
    {
      D3DXVec3Normalize((struct D2DVector3 *)&v11, v6);
      v8 = DWORD2(v11);
      *(_QWORD *)v6 = v11;
      *((_DWORD *)v6 + 2) = v8;
      *((_DWORD *)v6 + 18) = 52;
    }
    else
    {
      if ( v7 == 69 )
      {
        D3DXVec4Normalize((struct D2DVector4 *)&v11, v6);
        *((_DWORD *)v6 + 18) = 69;
      }
      else
      {
        if ( v7 != 71 )
        {
          v10 = 3853;
          goto LABEL_3;
        }
        D3DXQuaternionNormalize((struct D2DQuaternion *)&v11, v6);
        *((_DWORD *)v6 + 18) = 71;
      }
      *(_OWORD *)v6 = v11;
    }
    *((_BYTE *)v6 + 76) = 1;
    return 0;
  }
  v10 = 3796;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v10);
  return v2;
}
