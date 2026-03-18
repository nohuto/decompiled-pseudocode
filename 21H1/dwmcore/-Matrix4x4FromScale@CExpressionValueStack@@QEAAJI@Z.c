/*
 * XREFs of ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x180201B68
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z @ 0x18021F334 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18021F3A8 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z @ 0x18021F410 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(CExpressionValueStack *this, __int64 a2)
{
  unsigned int v2; // edi
  int v3; // ebx
  CExpressionValueStack *v4; // rsi
  char v5; // r14
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // xmm0_4
  int v12; // r10d
  __int64 v14; // xmm0_8
  unsigned int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // r9
  unsigned int v20; // eax
  __int128 v21; // xmm1
  __int64 v22; // r9
  __int64 v23; // r11
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  unsigned int v26; // eax
  __int64 v27; // xmm0_8
  int v28; // eax
  __int128 v29; // xmm1
  __int64 v30; // r9
  __int64 v31; // r11
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rdx
  int v35; // xmm0_4
  int v36; // xmm1_4
  int v37; // xmm2_4
  __int64 v38; // rdx
  __int64 v39; // xmm0_8
  __int128 v40; // xmm1
  __int64 v41; // r8
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  unsigned int v44; // [rsp+28h] [rbp-29h]
  __int64 v45; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v46; // [rsp+40h] [rbp-11h]
  __int64 v47; // [rsp+48h] [rbp-9h] BYREF
  int v48; // [rsp+50h] [rbp-1h]
  __int128 v49; // [rsp+58h] [rbp+7h] BYREF
  __int128 v50; // [rsp+68h] [rbp+17h]
  __int128 v51; // [rsp+78h] [rbp+27h]
  __int128 v52; // [rsp+88h] [rbp+37h]

  v2 = *((_DWORD *)this + 4);
  v3 = a2;
  v4 = this;
  v5 = 0;
  if ( v2 >= (unsigned int)a2 )
  {
    v8 = 1;
    switch ( (_DWORD)a2 )
    {
      case 1:
        this = (CExpressionValueStack *)*((_QWORD *)this + 3);
        v9 = v2 - 1;
        v10 = 10 * v9;
        if ( *((_DWORD *)this + 20 * v9 + 18) == 18 )
        {
          v11 = *((_DWORD *)this + 20 * v9);
          *((_DWORD *)this + 20 * v9 + 18) = 265;
          *((_DWORD *)this + 20 * v9) = v11;
          *(_QWORD *)((char *)this + 80 * v9 + 4) = 0LL;
          *(_QWORD *)((char *)this + 80 * v9 + 12) = 0LL;
          *((_DWORD *)this + 20 * v9 + 5) = v11;
          *((_QWORD *)this + 10 * v9 + 3) = 0LL;
          *((_QWORD *)this + 10 * v9 + 4) = 0LL;
          *((_DWORD *)this + 20 * v9 + 10) = v11;
          *(_QWORD *)((char *)this + 80 * v9 + 44) = 0LL;
          *(_QWORD *)((char *)this + 80 * v9 + 52) = 0LL;
          *((_DWORD *)this + 20 * v9 + 15) = 1065353216;
          *((_BYTE *)this + 80 * v9 + 76) = 1;
          goto LABEL_7;
        }
        if ( *((_DWORD *)this + 20 * v9 + 18) == 52 )
        {
          v14 = *((_QWORD *)this + 10 * v9);
          v5 = 1;
          v15 = *((_DWORD *)this + 20 * v9 + 2);
          *(_QWORD *)((char *)&v52 + 4) = 0LL;
          LODWORD(v52) = 0;
          *(_QWORD *)&v51 = 0LL;
          *((_QWORD *)&v50 + 1) = 0LL;
          LODWORD(v50) = 0;
          v45 = v14;
          v49 = (unsigned int)v14;
          DWORD1(v50) = HIDWORD(v14);
          HIDWORD(v52) = (_DWORD)FLOAT_1_0;
          v16 = (unsigned __int64)v50;
          v46 = v15;
          *((_QWORD *)&v51 + 1) = v15;
          *(_OWORD *)((char *)this + 8 * v10) = (unsigned int)v14;
          *((_DWORD *)this + 2 * v10 + 18) = 265;
          v17 = v51;
          *(_OWORD *)((char *)this + 8 * v10 + 16) = v16;
          *((_BYTE *)this + 8 * v10 + 76) = 1;
          v18 = v52;
          *(_OWORD *)((char *)this + 8 * v10 + 32) = v17;
          *(_OWORD *)((char *)this + 8 * v10 + 48) = v18;
        }
        break;
      case 2:
        v19 = *((_QWORD *)this + 3);
        if ( *(_DWORD *)(v19 + 80LL * (v2 - 2) + 72) == 18 )
        {
          if ( *(_DWORD *)(v19 + 80LL * (v2 - 1) + 72) == 52 )
          {
            v20 = *(_DWORD *)(v19 + 80LL * (v2 - 1) + 8);
            v45 = *(_QWORD *)(v19 + 80LL * (v2 - 1));
            v46 = v20;
            D2DMatrixScaling(&v49, a2, &v45);
            v21 = v50;
            *(_OWORD *)(v22 + 8 * v23) = v49;
            *(_DWORD *)(v22 + 8 * v23 + 72) = 265;
            v24 = v51;
            *(_OWORD *)(v22 + 8 * v23 + 16) = v21;
            *(_BYTE *)(v22 + 8 * v23 + 76) = v8;
            v25 = v52;
            *(_OWORD *)(v22 + 8 * v23 + 32) = v24;
            *(_OWORD *)(v22 + 8 * v23 + 48) = v25;
            goto LABEL_7;
          }
        }
        else if ( *(_DWORD *)(v19 + 80LL * (v2 - 2) + 72) == 52 && *(_DWORD *)(v19 + 80LL * (v2 - 1) + 72) == 52 )
        {
          v26 = *(_DWORD *)(v19 + 80LL * (v2 - 1) + 8);
          v45 = *(_QWORD *)(v19 + 80LL * (v2 - 1));
          v27 = *(_QWORD *)(v19 + 80LL * (v2 - 2));
          v5 = 1;
          v46 = v26;
          v28 = *(_DWORD *)(v19 + 80LL * (v2 - 2) + 8);
          v47 = v27;
          v48 = v28;
          D2DMatrixScaling(&v49, &v47, &v45);
          v29 = v50;
          *(_OWORD *)(v30 + 8 * v31) = v49;
          *(_DWORD *)(v30 + 8 * v31 + 72) = 265;
          v32 = v51;
          *(_OWORD *)(v30 + 8 * v31 + 16) = v29;
          *(_BYTE *)(v30 + 8 * v31 + 76) = v8;
          v33 = v52;
          *(_OWORD *)(v30 + 8 * v31 + 32) = v32;
          *(_OWORD *)(v30 + 8 * v31 + 48) = v33;
        }
        break;
      case 3:
        v34 = *((_QWORD *)this + 3);
        if ( *(_DWORD *)(v34 + 80LL * (v2 - 3) + 72) == 18
          && *(_DWORD *)(v34 + 80LL * (v2 - 2) + 72) == 18
          && *(_DWORD *)(v34 + 80LL * (v2 - 1) + 72) == 18 )
        {
          v35 = *(_DWORD *)(v34 + 80LL * (v2 - 3));
          v5 = 1;
          v36 = *(_DWORD *)(v34 + 80LL * (v2 - 2));
          v37 = *(_DWORD *)(v34 + 80LL * (v2 - 1));
          *(_DWORD *)(v34 + 80LL * (v2 - 3) + 72) = 265;
          *(_DWORD *)(v34 + 80LL * (v2 - 3)) = v35;
          *(_QWORD *)(v34 + 80LL * (v2 - 3) + 4) = 0LL;
          *(_QWORD *)(v34 + 80LL * (v2 - 3) + 12) = 0LL;
          *(_DWORD *)(v34 + 80LL * (v2 - 3) + 20) = v36;
          *(_QWORD *)(v34 + 80LL * (v2 - 3) + 24) = 0LL;
          *(_QWORD *)(v34 + 80LL * (v2 - 3) + 32) = 0LL;
          *(_DWORD *)(v34 + 80LL * (v2 - 3) + 40) = v37;
          *(_QWORD *)(v34 + 80LL * (v2 - 3) + 44) = 0LL;
          *(_QWORD *)(v34 + 80LL * (v2 - 3) + 52) = 0LL;
          *(_DWORD *)(v34 + 80LL * (v2 - 3) + 60) = 1065353216;
          *(_BYTE *)(v34 + 80LL * (v2 - 3) + 76) = 1;
        }
        break;
      case 4:
        v38 = *((_QWORD *)this + 3);
        if ( *(_DWORD *)(v38 + 80LL * (v2 - 4) + 72) == 18
          && *(_DWORD *)(v38 + 80LL * (v2 - 3) + 72) == 18
          && *(_DWORD *)(v38 + 80LL * (v2 - 2) + 72) == 18
          && *(_DWORD *)(v38 + 80LL * (v2 - 1) + 72) == 52 )
        {
          v39 = *(_QWORD *)(v38 + 80LL * (v2 - 1));
          v5 = 1;
          v48 = *(_DWORD *)(v38 + 80LL * (v2 - 1) + 8);
          v47 = v39;
          D2DMatrixScaling(&v49);
          v40 = v50;
          *(_OWORD *)v41 = v49;
          *(_DWORD *)(v41 + 72) = 265;
          v42 = v51;
          *(_OWORD *)(v41 + 16) = v40;
          *(_BYTE *)(v41 + 76) = v8;
          v43 = v52;
          *(_OWORD *)(v41 + 32) = v42;
          *(_OWORD *)(v41 + 48) = v43;
        }
        break;
    }
    if ( !v5 )
    {
      v6 = v8;
      v44 = 6314;
      goto LABEL_3;
    }
LABEL_7:
    v12 = v8 - v3;
    v7 = 0;
    *((_DWORD *)v4 + 4) += v12;
    return v7;
  }
  v6 = 1;
  v44 = 6187;
LABEL_3:
  v7 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    v6,
    -2147467259,
    v44,
    0LL);
  return v7;
}
