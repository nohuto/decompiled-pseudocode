/*
 * XREFs of ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x180251D1C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18026EA38 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x18026EB38 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z @ 0x18026ECB8 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z @ 0x18026ED48 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z @ 0x18026EE78 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z @ 0x18026EF50 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4Transform(__int64 this)
{
  __int64 v1; // rsi
  unsigned __int8 IsEnabled; // al
  unsigned int *v3; // rbx
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rdi
  unsigned __int8 v7; // al
  unsigned int v8; // edx
  CExpressionValue *v9; // rax
  int v10; // edx
  unsigned __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  unsigned int v23; // ebx
  unsigned int v25; // [rsp+20h] [rbp-49h]
  __int128 v26; // [rsp+30h] [rbp-39h] BYREF
  __int128 v27; // [rsp+40h] [rbp-29h] BYREF
  __int128 v28; // [rsp+50h] [rbp-19h] BYREF
  __int128 v29; // [rsp+60h] [rbp-9h] BYREF
  __int128 v30; // [rsp+70h] [rbp+7h]
  __int128 v31; // [rsp+80h] [rbp+17h]
  __int128 v32; // [rsp+90h] [rbp+27h]
  __int64 v33; // [rsp+D0h] [rbp+67h] BYREF

  v1 = this;
  if ( *(_DWORD *)(this + 16) < 2u )
  {
    v25 = 7714;
LABEL_30:
    v23 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v25);
    return v23;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
  v4 = *(_DWORD *)(v1 + 16) - 2;
  if ( IsEnabled && v4 >= *(_DWORD *)(v1 + 48) )
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)&v29);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v29);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v4);
  }
  v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v8 = *(_DWORD *)(v1 + 16) - 1;
  if ( v7 && v8 >= *(_DWORD *)(v1 + 48) )
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)&v29);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v29);
  }
  else
  {
    v3 = (unsigned int *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v8);
  }
  v10 = v6[18];
  v11 = (unsigned int)(v10 - 35);
  if ( (unsigned int)v11 > 0x22 || (this = 0x400020001LL, !_bittest64(&this, v11)) )
  {
    v25 = 7728;
    goto LABEL_30;
  }
  this = v3[18];
  if ( (_DWORD)this != 71 && (_DWORD)this != 265 )
  {
    v25 = 7737;
    goto LABEL_30;
  }
  switch ( v10 )
  {
    case '#':
      v33 = *(_QWORD *)v6;
      if ( (_DWORD)this == 265 )
      {
        v12 = *((_OWORD *)v3 + 1);
        v29 = *(_OWORD *)v3;
        v13 = *((_OWORD *)v3 + 2);
        v30 = v12;
        v14 = *((_OWORD *)v3 + 3);
        v31 = v13;
        v32 = v14;
        D3DXVec4Transform((struct D2DVector4 *)&v27, (const struct D2DVector2 *)&v33, (const struct D2DMatrix *)&v29);
      }
      else
      {
        v26 = *(_OWORD *)v3;
        D3DXVec4Transform(
          (struct D2DVector4 *)&v27,
          (const struct D2DVector2 *)&v33,
          (const struct D2DQuaternion *)&v26);
      }
      break;
    case '4':
      v15 = v6[2];
      *(_QWORD *)&v26 = *(_QWORD *)v6;
      DWORD2(v26) = v15;
      if ( (_DWORD)this == 265 )
      {
        v16 = *((_OWORD *)v3 + 1);
        v29 = *(_OWORD *)v3;
        v17 = *((_OWORD *)v3 + 2);
        v30 = v16;
        v18 = *((_OWORD *)v3 + 3);
        v31 = v17;
        v32 = v18;
        D3DXVec4Transform((struct D2DVector4 *)&v27, (const struct D2DVector3 *)&v26, (const struct D2DMatrix *)&v29);
      }
      else
      {
        v28 = *(_OWORD *)v3;
        D3DXVec4Transform(
          (struct D2DVector4 *)&v27,
          (const struct D2DVector3 *)&v26,
          (const struct D2DQuaternion *)&v28);
      }
      break;
    case 'E':
      v26 = *(_OWORD *)v6;
      if ( (_DWORD)this == 265 )
      {
        v19 = *((_OWORD *)v3 + 1);
        v29 = *(_OWORD *)v3;
        v20 = *((_OWORD *)v3 + 2);
        v30 = v19;
        v21 = *((_OWORD *)v3 + 3);
        v31 = v20;
        v32 = v21;
        D3DXVec4Transform((struct D2DVector4 *)&v27, (const struct D2DVector4 *)&v26, (const struct D2DMatrix *)&v29);
      }
      else
      {
        v28 = *(_OWORD *)v3;
        D3DXVec4Transform(
          (struct D2DVector4 *)&v27,
          (const struct D2DVector4 *)&v26,
          (const struct D2DQuaternion *)&v28);
      }
      break;
  }
  v22 = v27;
  v6[18] = 69;
  *((_BYTE *)v6 + 76) = 1;
  *(_OWORD *)v6 = v22;
  --*(_DWORD *)(v1 + 16);
  return 0;
}
