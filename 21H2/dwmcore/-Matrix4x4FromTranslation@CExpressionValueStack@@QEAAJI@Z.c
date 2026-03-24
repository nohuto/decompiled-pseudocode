/*
 * XREFs of ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1800CB74C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  __int64 v3; // rcx
  char v5; // r13
  unsigned int v6; // ebx
  CExpressionValue *v7; // rax
  _DWORD *v8; // rbx
  __int64 v9; // xmm0_8
  int v10; // eax
  __int128 v11; // xmm1
  unsigned int v12; // edx
  __int64 v13; // rax
  int *v14; // rbx
  CExpressionValue *v15; // rax
  char *v16; // rdi
  __int64 v17; // rax
  CExpressionValue *v18; // rax
  int *v19; // r15
  CExpressionValue *v20; // rax
  int v21; // xmm1_4
  int v22; // xmm0_4
  int v23; // xmm2_4
  unsigned int v25; // [rsp+28h] [rbp-39h]
  __int128 v26; // [rsp+48h] [rbp-19h] BYREF
  __int128 v27; // [rsp+58h] [rbp-9h]
  __int128 v28; // [rsp+68h] [rbp+7h]
  __int128 v29; // [rsp+78h] [rbp+17h]

  v3 = *((unsigned int *)this + 4);
  v5 = 0;
  if ( (unsigned int)v3 >= a2 )
  {
    if ( a2 == 1 )
    {
      v3 = (unsigned int)(v3 - 1);
      if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
      {
        v8 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v3);
      }
      else
      {
        v7 = CExpressionValue::CExpressionValue((CExpressionValue *)&v26);
        v8 = &CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v7);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v26);
      }
      if ( v8[18] == 52 )
      {
        v9 = *(_QWORD *)v8;
        v5 = 1;
        v10 = v8[2];
        HIDWORD(v28) = 0;
        *(_QWORD *)&v28 = 0LL;
        *((_QWORD *)&v27 + 1) = 0LL;
        LODWORD(v27) = 0;
        *(_QWORD *)&v29 = v9;
        DWORD2(v29) = v10;
        v26 = 0x3F800000uLL;
        *(_OWORD *)v8 = 0x3F800000uLL;
        DWORD1(v27) = 1065353216;
        *((_OWORD *)v8 + 1) = v27;
        DWORD2(v28) = 1065353216;
        HIDWORD(v29) = 1065353216;
        v11 = v29;
        *((_OWORD *)v8 + 2) = v28;
        v8[18] = 265;
        *((_OWORD *)v8 + 3) = v11;
        *((_BYTE *)v8 + 76) = 1;
      }
    }
    else if ( a2 == 3 )
    {
      v12 = *((_DWORD *)this + 12);
      v13 = (unsigned int)(v3 - 3);
      v14 = (int *)&CExpressionValueStack::s_emptyValue;
      if ( (unsigned int)v13 < v12 )
      {
        v16 = (char *)(*((_QWORD *)this + 3) + 80 * v13);
      }
      else
      {
        v15 = CExpressionValue::CExpressionValue((CExpressionValue *)&v26);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v15);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v26);
        LODWORD(v3) = *((_DWORD *)this + 4);
        v16 = (char *)&CExpressionValueStack::s_emptyValue;
        v12 = *((_DWORD *)this + 12);
      }
      v17 = (unsigned int)(v3 - 2);
      if ( (unsigned int)v17 < v12 )
      {
        v19 = (int *)(*((_QWORD *)this + 3) + 80 * v17);
      }
      else
      {
        v18 = CExpressionValue::CExpressionValue((CExpressionValue *)&v26);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v18);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v26);
        LODWORD(v3) = *((_DWORD *)this + 4);
        v19 = (int *)&CExpressionValueStack::s_emptyValue;
        v12 = *((_DWORD *)this + 12);
      }
      v3 = (unsigned int)(v3 - 1);
      if ( (unsigned int)v3 < v12 )
      {
        v14 = (int *)(*((_QWORD *)this + 3) + 80 * v3);
      }
      else
      {
        v20 = CExpressionValue::CExpressionValue((CExpressionValue *)&v26);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v20);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v26);
      }
      if ( *((_DWORD *)v16 + 18) == 18 && v19[18] == 18 && v14[18] == 18 )
      {
        v21 = *v19;
        v22 = *(_DWORD *)v16;
        v23 = *v14;
        v5 = 1;
        *((_DWORD *)v16 + 18) = 265;
        *(_QWORD *)v16 = 1065353216LL;
        *((_QWORD *)v16 + 1) = 0LL;
        *((_DWORD *)v16 + 4) = 0;
        *(_QWORD *)(v16 + 20) = 1065353216LL;
        *(_QWORD *)(v16 + 28) = 0LL;
        *((_DWORD *)v16 + 9) = 0;
        *((_QWORD *)v16 + 5) = 1065353216LL;
        *((_DWORD *)v16 + 12) = v22;
        *((_DWORD *)v16 + 13) = v21;
        *((_DWORD *)v16 + 14) = v23;
        *((_DWORD *)v16 + 15) = 1065353216;
        v16[76] = 1;
      }
    }
    v6 = 0;
    if ( v5 )
    {
      *((_DWORD *)this + 4) += 1 - a2;
      return v6;
    }
    v25 = 5795;
  }
  else
  {
    v25 = 5745;
  }
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v3,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v25,
    0LL);
  return v6;
}
