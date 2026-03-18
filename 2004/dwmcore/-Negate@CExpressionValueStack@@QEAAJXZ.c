/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x180038FEC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x18021B5BC (--GD2DMatrix@@QEBA-AU0@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rbx
  int v3; // eax
  int v4; // xmm1_4
  unsigned int v5; // ebx
  int v7; // xmm3_4
  int v8; // xmm0_4
  int v9; // xmm2_4
  _OWORD *v10; // rax
  int v11; // xmm1_4
  int v12; // xmm0_4
  __m128 v13; // xmm6
  __m128 v14; // xmm0
  unsigned int v15; // [rsp+20h] [rbp-88h]
  _BYTE v16[64]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v15 = 748;
    goto LABEL_12;
  }
  v2 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 != 35 )
  {
    switch ( v3 )
    {
      case 18:
        *(_DWORD *)v2 ^= _xmm;
        *(_DWORD *)(v2 + 72) = 18;
        goto LABEL_4;
      case 52:
        v7 = *(_DWORD *)v2 ^ _xmm;
        v8 = *(_DWORD *)(v2 + 8);
        v9 = *(_DWORD *)(v2 + 4) ^ _xmm;
        *(_DWORD *)(v2 + 72) = 52;
        *(_DWORD *)v2 = v7;
        *(_DWORD *)(v2 + 4) = v9;
        *(_DWORD *)(v2 + 8) = v8 ^ _xmm;
        goto LABEL_4;
      case 69:
        v14 = *(__m128 *)v2;
        *(_DWORD *)(v2 + 72) = 69;
        *(__m128 *)v2 = _mm_xor_ps(v14, (__m128)_xmm);
        goto LABEL_4;
      case 104:
        v11 = *(_DWORD *)(v2 + 16);
        v12 = *(_DWORD *)(v2 + 20);
        v13 = _mm_xor_ps(*(__m128 *)v2, (__m128)_xmm);
        *(_DWORD *)(v2 + 72) = 104;
        *(__m128 *)v2 = v13;
        *(_DWORD *)(v2 + 16) = v11 ^ _xmm;
        *(_DWORD *)(v2 + 20) = v12 ^ _xmm;
        goto LABEL_4;
      case 265:
        v10 = (_OWORD *)D2DMatrix::operator-(v2, v16);
        *(_DWORD *)(v2 + 72) = 265;
        *(_OWORD *)v2 = *v10;
        *(_OWORD *)(v2 + 16) = v10[1];
        *(_OWORD *)(v2 + 32) = v10[2];
        *(_OWORD *)(v2 + 48) = v10[3];
        goto LABEL_4;
    }
    v15 = 810;
LABEL_12:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v15,
      0LL);
    return v5;
  }
  v4 = *(_DWORD *)(v2 + 4) ^ _xmm;
  *(_DWORD *)v2 ^= _xmm;
  *(_DWORD *)(v2 + 4) = v4;
  *(_DWORD *)(v2 + 72) = 35;
LABEL_4:
  *(_BYTE *)(v2 + 76) = 1;
  return 0;
}
