/*
 * XREFs of ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1801FF034
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z @ 0x18021D7B4 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18021D828 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z @ 0x18021D890 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(CExpressionValueStack *this, unsigned int a2)
{
  __int64 v3; // rcx
  unsigned int v5; // ebx
  CExpressionValue *v6; // rax
  char *v7; // rbx
  int v8; // xmm0_4
  __int64 v10; // xmm0_8
  unsigned int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rbx
  CExpressionValue *v18; // rax
  _DWORD *v19; // rsi
  CExpressionValue *v20; // rax
  unsigned int v21; // eax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  unsigned int v26; // eax
  __int64 v27; // xmm0_8
  int v28; // eax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  char v33; // al
  unsigned int v34; // edx
  __int64 v35; // rax
  int *v36; // rbx
  CExpressionValue *v37; // rax
  char *v38; // rsi
  __int64 v39; // rax
  CExpressionValue *v40; // rax
  int *v41; // r15
  CExpressionValue *v42; // rax
  int v43; // xmm0_4
  int v44; // xmm1_4
  int v45; // xmm2_4
  unsigned int v46; // edx
  __int64 v47; // rax
  _DWORD *v48; // rbx
  CExpressionValue *v49; // rax
  _DWORD *v50; // rsi
  __int64 v51; // rax
  CExpressionValue *v52; // rax
  _DWORD *v53; // r12
  __int64 v54; // rax
  CExpressionValue *v55; // rax
  _DWORD *v56; // r15
  CExpressionValue *v57; // rax
  __int64 v58; // xmm0_8
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  unsigned int v63; // [rsp+28h] [rbp-49h]
  __int64 v64; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v65; // [rsp+40h] [rbp-31h]
  __int64 v66; // [rsp+48h] [rbp-29h] BYREF
  int v67; // [rsp+50h] [rbp-21h]
  __int128 v68; // [rsp+58h] [rbp-19h] BYREF
  __int128 v69; // [rsp+68h] [rbp-9h]
  __int128 v70; // [rsp+78h] [rbp+7h]
  __int128 v71; // [rsp+88h] [rbp+17h]

  v3 = *((unsigned int *)this + 4);
  if ( (unsigned int)v3 >= a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v3 = (unsigned int)(v3 - 1);
        if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
        {
          v7 = (char *)(*((_QWORD *)this + 3) + 80 * v3);
        }
        else
        {
          v6 = CExpressionValue::CExpressionValue((CExpressionValue *)&v68);
          v7 = (char *)&CExpressionValueStack::s_emptyValue;
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v68);
        }
        if ( *((_DWORD *)v7 + 18) == 18 )
        {
          v8 = *(_DWORD *)v7;
          *((_DWORD *)v7 + 18) = 265;
          *(_QWORD *)(v7 + 4) = 0LL;
          *(_QWORD *)(v7 + 12) = 0LL;
          *((_DWORD *)v7 + 5) = v8;
          *((_QWORD *)v7 + 3) = 0LL;
          *((_QWORD *)v7 + 4) = 0LL;
          *((_DWORD *)v7 + 10) = v8;
          *(_QWORD *)(v7 + 44) = 0LL;
          *(_QWORD *)(v7 + 52) = 0LL;
          *((_DWORD *)v7 + 15) = 1065353216;
          v7[76] = 1;
          goto LABEL_10;
        }
        if ( *((_DWORD *)v7 + 18) == 52 )
        {
          v10 = *(_QWORD *)v7;
          v11 = *((_DWORD *)v7 + 2);
          *(_QWORD *)((char *)&v71 + 4) = 0LL;
          LODWORD(v71) = 0;
          *(_QWORD *)&v70 = 0LL;
          *((_QWORD *)&v69 + 1) = 0LL;
          LODWORD(v69) = 0;
          v64 = v10;
          v68 = (unsigned int)v10;
          DWORD1(v69) = HIDWORD(v10);
          HIDWORD(v71) = (_DWORD)FLOAT_1_0;
          v12 = (unsigned __int64)v69;
          v65 = v11;
          *((_QWORD *)&v70 + 1) = v11;
          *(_OWORD *)v7 = (unsigned int)v10;
          *((_DWORD *)v7 + 18) = 265;
          v13 = v70;
          *((_OWORD *)v7 + 1) = v12;
          v7[76] = 1;
          v14 = v71;
          *((_OWORD *)v7 + 2) = v13;
          *((_OWORD *)v7 + 3) = v14;
LABEL_27:
          v33 = 1;
          goto LABEL_62;
        }
        break;
      case 2u:
        v15 = *((unsigned int *)this + 12);
        v16 = (unsigned int)(v3 - 2);
        v17 = &CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v16 < (unsigned int)v15 )
        {
          v19 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v16);
        }
        else
        {
          v18 = CExpressionValue::CExpressionValue((CExpressionValue *)&v68);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v18);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v68);
          LODWORD(v3) = *((_DWORD *)this + 4);
          v19 = &CExpressionValueStack::s_emptyValue;
          v15 = *((unsigned int *)this + 12);
        }
        v3 = (unsigned int)(v3 - 1);
        if ( (unsigned int)v3 < (unsigned int)v15 )
        {
          v17 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v3);
        }
        else
        {
          v20 = CExpressionValue::CExpressionValue((CExpressionValue *)&v68);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v20);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v68);
        }
        if ( v19[18] == 18 && v17[18] == 52 )
        {
          v21 = v17[2];
          v64 = *(_QWORD *)v17;
          v65 = v21;
          D2DMatrixScaling(&v68, v15, &v64);
          v22 = v68;
          v23 = v69;
          v19[18] = 265;
          *(_OWORD *)v19 = v22;
          *((_BYTE *)v19 + 76) = 1;
          v24 = v70;
          *((_OWORD *)v19 + 1) = v23;
          v25 = v71;
          *((_OWORD *)v19 + 2) = v24;
          *((_OWORD *)v19 + 3) = v25;
          goto LABEL_10;
        }
        if ( v19[18] == 52 && v17[18] == 52 )
        {
          v26 = v17[2];
          v64 = *(_QWORD *)v17;
          v27 = *(_QWORD *)v19;
          v65 = v26;
          v28 = v19[2];
          v66 = v27;
          v67 = v28;
          D2DMatrixScaling(&v68, &v66, &v64);
          v29 = v68;
          v30 = v69;
          v19[18] = 265;
          *(_OWORD *)v19 = v29;
          *((_BYTE *)v19 + 76) = 1;
          v31 = v70;
          *((_OWORD *)v19 + 1) = v30;
          v32 = v71;
          *((_OWORD *)v19 + 2) = v31;
          *((_OWORD *)v19 + 3) = v32;
          goto LABEL_27;
        }
        break;
      case 3u:
        v34 = *((_DWORD *)this + 12);
        v35 = (unsigned int)(v3 - 3);
        v36 = (int *)&CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v35 < v34 )
        {
          v38 = (char *)(*((_QWORD *)this + 3) + 80 * v35);
        }
        else
        {
          v37 = CExpressionValue::CExpressionValue((CExpressionValue *)&v68);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v37);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v68);
          LODWORD(v3) = *((_DWORD *)this + 4);
          v38 = (char *)&CExpressionValueStack::s_emptyValue;
          v34 = *((_DWORD *)this + 12);
        }
        v39 = (unsigned int)(v3 - 2);
        if ( (unsigned int)v39 < v34 )
        {
          v41 = (int *)(*((_QWORD *)this + 3) + 80 * v39);
        }
        else
        {
          v40 = CExpressionValue::CExpressionValue((CExpressionValue *)&v68);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v40);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v68);
          LODWORD(v3) = *((_DWORD *)this + 4);
          v41 = (int *)&CExpressionValueStack::s_emptyValue;
          v34 = *((_DWORD *)this + 12);
        }
        v3 = (unsigned int)(v3 - 1);
        if ( (unsigned int)v3 < v34 )
        {
          v36 = (int *)(*((_QWORD *)this + 3) + 80 * v3);
        }
        else
        {
          v42 = CExpressionValue::CExpressionValue((CExpressionValue *)&v68);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v42);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v68);
        }
        if ( *((_DWORD *)v38 + 18) == 18 && v41[18] == 18 && v36[18] == 18 )
        {
          v43 = *(_DWORD *)v38;
          v33 = 1;
          v44 = *v41;
          v45 = *v36;
          *((_DWORD *)v38 + 18) = 265;
          *(_DWORD *)v38 = v43;
          *(_QWORD *)(v38 + 4) = 0LL;
          *(_QWORD *)(v38 + 12) = 0LL;
          *((_DWORD *)v38 + 5) = v44;
          *((_QWORD *)v38 + 3) = 0LL;
          *((_QWORD *)v38 + 4) = 0LL;
          *((_DWORD *)v38 + 10) = v45;
          *(_QWORD *)(v38 + 44) = 0LL;
          *(_QWORD *)(v38 + 52) = 0LL;
          *((_DWORD *)v38 + 15) = 1065353216;
          v38[76] = 1;
          goto LABEL_62;
        }
        break;
      case 4u:
        v46 = *((_DWORD *)this + 12);
        v47 = (unsigned int)(v3 - 4);
        v48 = &CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v47 < v46 )
        {
          v50 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v47);
        }
        else
        {
          v49 = CExpressionValue::CExpressionValue((CExpressionValue *)&v68);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v49);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v68);
          LODWORD(v3) = *((_DWORD *)this + 4);
          v50 = &CExpressionValueStack::s_emptyValue;
          v46 = *((_DWORD *)this + 12);
        }
        v51 = (unsigned int)(v3 - 3);
        if ( (unsigned int)v51 < v46 )
        {
          v53 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v51);
        }
        else
        {
          v52 = CExpressionValue::CExpressionValue((CExpressionValue *)&v68);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v52);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v68);
          LODWORD(v3) = *((_DWORD *)this + 4);
          v53 = &CExpressionValueStack::s_emptyValue;
          v46 = *((_DWORD *)this + 12);
        }
        v54 = (unsigned int)(v3 - 2);
        if ( (unsigned int)v54 < v46 )
        {
          v56 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v54);
        }
        else
        {
          v55 = CExpressionValue::CExpressionValue((CExpressionValue *)&v68);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v55);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v68);
          LODWORD(v3) = *((_DWORD *)this + 4);
          v56 = &CExpressionValueStack::s_emptyValue;
          v46 = *((_DWORD *)this + 12);
        }
        v3 = (unsigned int)(v3 - 1);
        if ( (unsigned int)v3 < v46 )
        {
          v48 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v3);
        }
        else
        {
          v57 = CExpressionValue::CExpressionValue((CExpressionValue *)&v68);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v57);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v68);
        }
        if ( v50[18] == 18 && v53[18] == 18 && v56[18] == 18 && v48[18] == 52 )
        {
          v58 = *(_QWORD *)v48;
          v67 = v48[2];
          v66 = v58;
          D2DMatrixScaling(&v68);
          v59 = v68;
          v33 = 1;
          v60 = v69;
          v50[18] = 265;
          *(_OWORD *)v50 = v59;
          *((_BYTE *)v50 + 76) = 1;
          v61 = v70;
          *((_OWORD *)v50 + 1) = v60;
          v62 = v71;
          *((_OWORD *)v50 + 2) = v61;
          *((_OWORD *)v50 + 3) = v62;
        }
        else
        {
          v33 = 0;
        }
LABEL_62:
        if ( !v33 )
        {
          v63 = 6324;
          goto LABEL_3;
        }
LABEL_10:
        v5 = 0;
        *((_DWORD *)this + 4) += 1 - a2;
        return v5;
    }
    v33 = 0;
    goto LABEL_62;
  }
  v63 = 6197;
LABEL_3:
  v5 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v3,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v63,
    0LL);
  return v5;
}
