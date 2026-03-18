/*
 * XREFs of ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x18024DD64
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z @ 0x18026DBB0 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18026DC24 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z @ 0x18026DC8C (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(CExpressionValueStack *this, unsigned int a2)
{
  CExpressionValueStack *v2; // rsi
  unsigned __int8 IsEnabled; // al
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  char *v6; // rbx
  int v7; // xmm0_4
  __int64 v8; // xmm0_8
  char v9; // r9
  unsigned int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned __int8 v14; // al
  _DWORD *v15; // rbx
  unsigned int v16; // edx
  CExpressionValue *v17; // rax
  char *v18; // r14
  unsigned __int8 v19; // al
  unsigned int v20; // edx
  CExpressionValue *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  unsigned int v24; // eax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  unsigned int v29; // eax
  __int64 v30; // xmm0_8
  int v31; // eax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  unsigned __int8 v36; // al
  int *v37; // rbx
  unsigned int v38; // edx
  CExpressionValue *v39; // rax
  unsigned __int8 v40; // al
  unsigned int v41; // edx
  CExpressionValue *v42; // rax
  unsigned __int8 v43; // al
  unsigned int v44; // edx
  CExpressionValue *v45; // rax
  int v46; // xmm0_4
  int v47; // xmm1_4
  int v48; // xmm2_4
  unsigned int v49; // ebx
  unsigned __int8 v51; // al
  _DWORD *v52; // rbx
  unsigned int v53; // edx
  CExpressionValue *v54; // rax
  _DWORD *v55; // r13
  unsigned __int8 v56; // al
  unsigned int v57; // edx
  CExpressionValue *v58; // rax
  unsigned __int8 v59; // al
  unsigned int v60; // edx
  CExpressionValue *v61; // rax
  unsigned __int8 v62; // al
  unsigned int v63; // edx
  CExpressionValue *v64; // rax
  __int64 v65; // xmm0_8
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  unsigned int v70; // [rsp+20h] [rbp-59h]
  __int64 v71; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v72; // [rsp+38h] [rbp-41h]
  __int64 v73; // [rsp+40h] [rbp-39h] BYREF
  int v74; // [rsp+48h] [rbp-31h]
  __int128 v75; // [rsp+50h] [rbp-29h] BYREF
  __int128 v76; // [rsp+60h] [rbp-19h]
  __int128 v77; // [rsp+70h] [rbp-9h]
  __int128 v78; // [rsp+80h] [rbp+7h]
  int *v79; // [rsp+E0h] [rbp+67h]
  _DWORD *v80; // [rsp+E0h] [rbp+67h]
  CExpressionValueStack *v82; // [rsp+F0h] [rbp+77h]

  v2 = this;
  if ( *((_DWORD *)this + 4) >= a2 )
  {
    if ( a2 == 1 )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v4 = *((_DWORD *)v2 + 4) - 1;
      if ( IsEnabled && v4 >= *((_DWORD *)v2 + 12) )
      {
        v5 = CExpressionValue::CExpressionValue((CExpressionValue *)&v75);
        v6 = (char *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v75);
      }
      else
      {
        v6 = (char *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v2 + 3, v4);
      }
      if ( *((_DWORD *)v6 + 18) == 18 )
      {
        v7 = *(_DWORD *)v6;
        *((_DWORD *)v6 + 18) = 265;
        *(_QWORD *)(v6 + 4) = 0LL;
        *(_QWORD *)(v6 + 12) = 0LL;
        *((_DWORD *)v6 + 5) = v7;
        *((_QWORD *)v6 + 3) = 0LL;
        *((_QWORD *)v6 + 4) = 0LL;
        *((_DWORD *)v6 + 10) = v7;
        *(_QWORD *)(v6 + 44) = 0LL;
        *(_QWORD *)(v6 + 52) = 0LL;
        *((_DWORD *)v6 + 15) = 1065353216;
        v6[76] = 1;
LABEL_71:
        v49 = 0;
        *((_DWORD *)v2 + 4) += 1 - a2;
        return v49;
      }
      if ( *((_DWORD *)v6 + 18) == 52 )
      {
        v8 = *(_QWORD *)v6;
        v9 = 1;
        v10 = *((_DWORD *)v6 + 2);
        *(_QWORD *)((char *)&v78 + 4) = 0LL;
        LODWORD(v78) = 0;
        *(_QWORD *)&v77 = 0LL;
        *((_QWORD *)&v76 + 1) = 0LL;
        LODWORD(v76) = 0;
        v71 = v8;
        v75 = (unsigned int)v8;
        DWORD1(v76) = HIDWORD(v8);
        HIDWORD(v78) = (_DWORD)FLOAT_1_0;
        v11 = (unsigned __int64)v76;
        v72 = v10;
        *((_QWORD *)&v77 + 1) = v10;
        *(_OWORD *)v6 = (unsigned int)v8;
        *((_DWORD *)v6 + 18) = 265;
        v12 = v77;
        *((_OWORD *)v6 + 1) = v11;
        v6[76] = 1;
        v13 = v78;
        *((_OWORD *)v6 + 2) = v12;
        *((_OWORD *)v6 + 3) = v13;
        goto LABEL_45;
      }
LABEL_46:
      v70 = 6330;
      goto LABEL_47;
    }
    if ( a2 == 2 )
    {
      v14 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v15 = &CExpressionValueStack::s_emptyValue;
      v16 = *((_DWORD *)v2 + 4) - 2;
      if ( v14 && v16 >= *((_DWORD *)v2 + 12) )
      {
        v17 = CExpressionValue::CExpressionValue((CExpressionValue *)&v75);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v17);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v75);
        v18 = (char *)&CExpressionValueStack::s_emptyValue;
      }
      else
      {
        v18 = (char *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v2 + 3, v16);
      }
      v19 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v20 = *((_DWORD *)v2 + 4) - 1;
      if ( v19 && v20 >= *((_DWORD *)v2 + 12) )
      {
        v21 = CExpressionValue::CExpressionValue((CExpressionValue *)&v75);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v21);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v75);
      }
      else
      {
        v15 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v2 + 3, v20);
      }
      if ( *((_DWORD *)v18 + 18) == 18 )
      {
        if ( v15[18] == 52 )
        {
          v24 = v15[2];
          v71 = *(_QWORD *)v15;
          v72 = v24;
          D2DMatrixScaling(&v75, v22, &v71);
          v25 = v75;
          v26 = v76;
          *((_DWORD *)v18 + 18) = 265;
          *(_OWORD *)v18 = v25;
          v18[76] = 1;
          v27 = v77;
          *((_OWORD *)v18 + 1) = v26;
          v28 = v78;
          *((_OWORD *)v18 + 2) = v27;
          *((_OWORD *)v18 + 3) = v28;
          goto LABEL_71;
        }
        goto LABEL_46;
      }
      if ( *((_DWORD *)v18 + 18) != 52 || v15[18] != 52 )
        goto LABEL_46;
      v29 = v15[2];
      v71 = *(_QWORD *)v15;
      v30 = *(_QWORD *)v18;
      LOBYTE(v23) = 1;
      v72 = v29;
      v31 = *((_DWORD *)v18 + 2);
      v73 = v30;
      v74 = v31;
      D2DMatrixScaling(&v75, &v73, &v71, v23);
      v32 = v75;
      v33 = v76;
      *((_DWORD *)v18 + 18) = 265;
      *(_OWORD *)v18 = v32;
      v34 = v77;
      *((_OWORD *)v18 + 1) = v33;
      v35 = v78;
      *((_OWORD *)v18 + 2) = v34;
      *((_OWORD *)v18 + 3) = v35;
    }
    else
    {
      if ( a2 != 3 )
      {
        if ( a2 == 4 )
        {
          v51 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
          v52 = &CExpressionValueStack::s_emptyValue;
          v53 = *((_DWORD *)v2 + 4) - 4;
          if ( v51 && v53 >= *((_DWORD *)v2 + 12) )
          {
            v54 = CExpressionValue::CExpressionValue((CExpressionValue *)&v75);
            CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v54);
            CExpressionValue::~CExpressionValue((CExpressionValue *)&v75);
            v55 = &CExpressionValueStack::s_emptyValue;
          }
          else
          {
            v55 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v2 + 3, v53);
          }
          v56 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
          v57 = *((_DWORD *)v2 + 4) - 3;
          if ( v56 && v57 >= *((_DWORD *)v2 + 12) )
          {
            v58 = CExpressionValue::CExpressionValue((CExpressionValue *)&v75);
            CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v58);
            CExpressionValue::~CExpressionValue((CExpressionValue *)&v75);
            v80 = &CExpressionValueStack::s_emptyValue;
          }
          else
          {
            v80 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v2 + 3, v57);
          }
          v59 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
          v60 = *((_DWORD *)v2 + 4) - 2;
          if ( v59 && v60 >= *((_DWORD *)v2 + 12) )
          {
            v61 = CExpressionValue::CExpressionValue((CExpressionValue *)&v75);
            CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v61);
            CExpressionValue::~CExpressionValue((CExpressionValue *)&v75);
            v82 = (CExpressionValueStack *)&CExpressionValueStack::s_emptyValue;
          }
          else
          {
            v82 = (CExpressionValueStack *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v2 + 3, v60);
          }
          v62 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
          v63 = *((_DWORD *)v2 + 4) - 1;
          if ( v62 && v63 >= *((_DWORD *)v2 + 12) )
          {
            v64 = CExpressionValue::CExpressionValue((CExpressionValue *)&v75);
            CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v64);
            CExpressionValue::~CExpressionValue((CExpressionValue *)&v75);
          }
          else
          {
            v52 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v2 + 3, v63);
          }
          if ( v55[18] == 18 && v80[18] == 18 )
          {
            this = v82;
            if ( *((_DWORD *)v82 + 18) == 18 && v52[18] == 52 )
            {
              v65 = *(_QWORD *)v52;
              v74 = v52[2];
              v73 = v65;
              D2DMatrixScaling(&v75);
              v66 = v75;
              v67 = v76;
              v55[18] = 265;
              *(_OWORD *)v55 = v66;
              *((_BYTE *)v55 + 76) = 1;
              v68 = v77;
              *((_OWORD *)v55 + 1) = v67;
              v69 = v78;
              *((_OWORD *)v55 + 2) = v68;
              *((_OWORD *)v55 + 3) = v69;
              goto LABEL_71;
            }
          }
        }
        goto LABEL_46;
      }
      v36 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v37 = (int *)&CExpressionValueStack::s_emptyValue;
      v38 = *((_DWORD *)v2 + 4) - 3;
      if ( v36 && v38 >= *((_DWORD *)v2 + 12) )
      {
        v39 = CExpressionValue::CExpressionValue((CExpressionValue *)&v75);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v39);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v75);
        v18 = (char *)&CExpressionValueStack::s_emptyValue;
      }
      else
      {
        v18 = (char *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v2 + 3, v38);
      }
      v40 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v41 = *((_DWORD *)v2 + 4) - 2;
      if ( v40 && v41 >= *((_DWORD *)v2 + 12) )
      {
        v42 = CExpressionValue::CExpressionValue((CExpressionValue *)&v75);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v42);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v75);
        v79 = (int *)&CExpressionValueStack::s_emptyValue;
      }
      else
      {
        v79 = (int *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v2 + 3, v41);
      }
      v43 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v44 = *((_DWORD *)v2 + 4) - 1;
      if ( v43 && v44 >= *((_DWORD *)v2 + 12) )
      {
        v45 = CExpressionValue::CExpressionValue((CExpressionValue *)&v75);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v45);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v75);
      }
      else
      {
        v37 = (int *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v2 + 3, v44);
      }
      if ( *((_DWORD *)v18 + 18) != 18 || v79[18] != 18 || v37[18] != 18 )
        goto LABEL_46;
      v46 = *(_DWORD *)v18;
      v9 = 1;
      v47 = *v79;
      v48 = *v37;
      *((_DWORD *)v18 + 18) = 265;
      *(_DWORD *)v18 = v46;
      *(_QWORD *)(v18 + 4) = 0LL;
      *(_QWORD *)(v18 + 12) = 0LL;
      *((_DWORD *)v18 + 5) = v47;
      *((_QWORD *)v18 + 3) = 0LL;
      *((_QWORD *)v18 + 4) = 0LL;
      *((_DWORD *)v18 + 10) = v48;
      *(_QWORD *)(v18 + 44) = 0LL;
      *(_QWORD *)(v18 + 52) = 0LL;
      *((_DWORD *)v18 + 15) = 1065353216;
    }
    v18[76] = 1;
LABEL_45:
    if ( v9 )
      goto LABEL_71;
    goto LABEL_46;
  }
  v70 = 6203;
LABEL_47:
  v49 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v70);
  return v49;
}
