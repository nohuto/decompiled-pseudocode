/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x18003661C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x18021B764 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  CExpressionValueStack *v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rax
  float v6; // xmm0_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  _OWORD *v11; // rax
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  unsigned int v18; // xmm0_4
  unsigned int v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  unsigned int v22; // [rsp+20h] [rbp-88h]
  __int128 v23; // [rsp+30h] [rbp-78h]
  _BYTE v24[64]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v22 = 840;
    goto LABEL_11;
  }
  v3 = 0;
  v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
  LODWORD(this) = *(_DWORD *)(v4 + 72);
  if ( (_DWORD)this != *(_DWORD *)(v5 + 72) )
  {
    v22 = 868;
    goto LABEL_11;
  }
  if ( (_DWORD)this != 18 )
  {
    switch ( (_DWORD)this )
    {
      case 0x34:
        v8 = *(float *)v5;
        v9 = *(float *)(v5 + 4) + *(float *)(v4 + 4);
        v10 = *(float *)(v5 + 8) + *(float *)(v4 + 8);
        *(_DWORD *)(v4 + 72) = 52;
        *(float *)v4 = v8 + *(float *)v4;
        *(float *)(v4 + 4) = v9;
        *(float *)(v4 + 8) = v10;
        goto LABEL_5;
      case 0x23:
        v20 = *(float *)v5 + *(float *)v4;
        v21 = *(float *)(v5 + 4) + *(float *)(v4 + 4);
        *(_DWORD *)(v4 + 72) = 35;
        *(float *)v4 = v20;
        *(float *)(v4 + 4) = v21;
        goto LABEL_5;
      case 0x45:
        *(float *)&v23 = *(float *)v5 + *(float *)v4;
        *(float *)&v18 = *(float *)(v5 + 8) + *(float *)(v4 + 8);
        *((float *)&v23 + 1) = *(float *)(v5 + 4) + *(float *)(v4 + 4);
        *(float *)&v19 = *(float *)(v5 + 12) + *(float *)(v4 + 12);
        *(_DWORD *)(v4 + 72) = 69;
        *((_QWORD *)&v23 + 1) = __PAIR64__(v19, v18);
        *(_OWORD *)v4 = v23;
        goto LABEL_5;
      case 0x68:
        v12 = *(float *)v5;
        v13 = *(float *)(v5 + 4) + *(float *)(v4 + 4);
        v14 = *(float *)(v5 + 8) + *(float *)(v4 + 8);
        v15 = *(float *)(v5 + 12) + *(float *)(v4 + 12);
        v16 = *(float *)(v5 + 16) + *(float *)(v4 + 16);
        v17 = *(float *)(v5 + 20) + *(float *)(v4 + 20);
        *(_DWORD *)(v4 + 72) = 104;
        *(float *)v4 = v12 + *(float *)v4;
        *(float *)(v4 + 4) = v13;
        *(float *)(v4 + 8) = v14;
        *(float *)(v4 + 12) = v15;
        *(float *)(v4 + 16) = v16;
        *(float *)(v4 + 20) = v17;
        goto LABEL_5;
      case 0x109:
        v11 = (_OWORD *)D2DMatrix::operator+(v4, v24, v5);
        *(_DWORD *)(v4 + 72) = 265;
        *(_OWORD *)v4 = *v11;
        *(_OWORD *)(v4 + 16) = v11[1];
        *(_OWORD *)(v4 + 32) = v11[2];
        *(_OWORD *)(v4 + 48) = v11[3];
        goto LABEL_5;
    }
    v22 = 923;
LABEL_11:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v22,
      0LL);
    return v3;
  }
  v6 = *(float *)v5 + *(float *)v4;
  *(_DWORD *)(v4 + 72) = 18;
  *(float *)v4 = v6;
LABEL_5:
  *(_BYTE *)(v4 + 76) = 1;
  --*((_DWORD *)v2 + 4);
  return v3;
}
