/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1800D84DC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x18021C5B4 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebp
  unsigned int v4; // edx
  __int64 v5; // rax
  float *v6; // rdi
  CExpressionValue *v7; // rax
  float *v8; // rbx
  CExpressionValue *v9; // rax
  int v10; // eax
  _OWORD *v11; // rax
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  unsigned int v18; // xmm0_4
  unsigned int v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  unsigned int v27; // [rsp+20h] [rbp-98h]
  __int128 v28; // [rsp+30h] [rbp-88h]
  _BYTE v29[80]; // [rsp+40h] [rbp-78h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 2);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v29);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v29);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v29);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v29);
    }
    v10 = *((_DWORD *)v8 + 18);
    v3 = 0;
    if ( v10 == *((_DWORD *)v6 + 18) )
    {
      switch ( v10 )
      {
        case 18:
          v25 = *v6 + *v8;
          *((_DWORD *)v8 + 18) = 18;
          *v8 = v25;
          break;
        case 35:
          v23 = *v6 + *v8;
          v24 = v6[1] + v8[1];
          *((_DWORD *)v8 + 18) = 35;
          *v8 = v23;
          v8[1] = v24;
          break;
        case 52:
          v20 = *v6;
          v21 = v6[1] + v8[1];
          v22 = v6[2] + v8[2];
          *((_DWORD *)v8 + 18) = 52;
          *v8 = v20 + *v8;
          v8[1] = v21;
          v8[2] = v22;
          break;
        case 69:
          *(float *)&v28 = *v6 + *v8;
          *(float *)&v18 = v6[2] + v8[2];
          *((float *)&v28 + 1) = v6[1] + v8[1];
          *(float *)&v19 = v6[3] + v8[3];
          *((_DWORD *)v8 + 18) = 69;
          *((_QWORD *)&v28 + 1) = __PAIR64__(v19, v18);
          *(_OWORD *)v8 = v28;
          break;
        case 104:
          v12 = *v8 + *v6;
          v13 = v6[1] + v8[1];
          v14 = v6[2] + v8[2];
          v15 = v6[3] + v8[3];
          v16 = v6[4] + v8[4];
          v17 = v6[5] + v8[5];
          *((_DWORD *)v8 + 18) = 104;
          *v8 = v12;
          v8[1] = v13;
          v8[2] = v14;
          v8[3] = v15;
          v8[4] = v16;
          v8[5] = v17;
          break;
        case 265:
          v11 = (_OWORD *)D2DMatrix::operator+(v8, v29, v6);
          *((_DWORD *)v8 + 18) = 265;
          *(_OWORD *)v8 = *v11;
          *((_OWORD *)v8 + 1) = v11[1];
          *((_OWORD *)v8 + 2) = v11[2];
          *((_OWORD *)v8 + 3) = v11[3];
          break;
        default:
          v27 = 933;
          goto LABEL_3;
      }
      *((_BYTE *)v8 + 76) = 1;
      --*((_DWORD *)this + 4);
      return v3;
    }
    v27 = 878;
  }
  else
  {
    v27 = 850;
  }
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v27,
    0LL);
  return v3;
}
