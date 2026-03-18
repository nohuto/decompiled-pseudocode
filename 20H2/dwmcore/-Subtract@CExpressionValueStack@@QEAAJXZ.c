/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x1801FEF1C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802195B0 (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  CExpressionValueStack *v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rax
  _OWORD *v6; // rax
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  unsigned int v13; // xmm0_4
  unsigned int v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  unsigned int v22; // [rsp+20h] [rbp-88h]
  __int128 v23; // [rsp+30h] [rbp-78h]
  _BYTE v24[64]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 >= 2 )
  {
    v3 = 0;
    v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
    v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
    this = (CExpressionValueStack *)*(unsigned int *)(v4 + 72);
    if ( (_DWORD)this == *(_DWORD *)(v5 + 72) )
    {
      switch ( (_DWORD)this )
      {
        case 0x12:
          v20 = *(float *)v4 - *(float *)v5;
          *(_DWORD *)(v4 + 72) = 18;
          *(float *)v4 = v20;
          break;
        case 0x23:
          v18 = *(float *)v4 - *(float *)v5;
          v19 = *(float *)(v4 + 4) - *(float *)(v5 + 4);
          *(_DWORD *)(v4 + 72) = 35;
          *(float *)v4 = v18;
          *(float *)(v4 + 4) = v19;
          break;
        case 0x34:
          v15 = *(float *)v4 - *(float *)v5;
          v16 = *(float *)(v4 + 4) - *(float *)(v5 + 4);
          v17 = *(float *)(v4 + 8) - *(float *)(v5 + 8);
          *(_DWORD *)(v4 + 72) = 52;
          *(float *)v4 = v15;
          *(float *)(v4 + 4) = v16;
          *(float *)(v4 + 8) = v17;
          break;
        case 0x45:
          *(float *)&v23 = *(float *)v4 - *(float *)v5;
          *(float *)&v13 = *(float *)(v4 + 8) - *(float *)(v5 + 8);
          *((float *)&v23 + 1) = *(float *)(v4 + 4) - *(float *)(v5 + 4);
          *(float *)&v14 = *(float *)(v4 + 12) - *(float *)(v5 + 12);
          *(_DWORD *)(v4 + 72) = 69;
          *((_QWORD *)&v23 + 1) = __PAIR64__(v14, v13);
          *(_OWORD *)v4 = v23;
          break;
        case 0x68:
          v7 = *(float *)v4 - *(float *)v5;
          v8 = *(float *)(v4 + 4) - *(float *)(v5 + 4);
          v9 = *(float *)(v4 + 8) - *(float *)(v5 + 8);
          v10 = *(float *)(v4 + 12) - *(float *)(v5 + 12);
          v11 = *(float *)(v4 + 16) - *(float *)(v5 + 16);
          v12 = *(float *)(v4 + 20) - *(float *)(v5 + 20);
          *(_DWORD *)(v4 + 72) = 104;
          *(float *)v4 = v7;
          *(float *)(v4 + 4) = v8;
          *(float *)(v4 + 8) = v9;
          *(float *)(v4 + 12) = v10;
          *(float *)(v4 + 16) = v11;
          *(float *)(v4 + 20) = v12;
          break;
        case 0x109:
          v6 = (_OWORD *)D2DMatrix::operator-(v4, v24, v5);
          *(_DWORD *)(v4 + 72) = 265;
          *(_OWORD *)v4 = *v6;
          *(_OWORD *)(v4 + 16) = v6[1];
          *(_OWORD *)(v4 + 32) = v6[2];
          *(_OWORD *)(v4 + 48) = v6[3];
          break;
        default:
          v22 = 1033;
          goto LABEL_3;
      }
      *(_BYTE *)(v4 + 76) = 1;
      --*((_DWORD *)v2 + 4);
      return v3;
    }
    v22 = 979;
  }
  else
  {
    v22 = 956;
  }
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v22,
    0LL);
  return v3;
}
