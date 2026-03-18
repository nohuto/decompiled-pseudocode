/*
 * XREFs of ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x18006A124
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // ebx
  char v3; // di
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // xmm2_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  unsigned int v12; // [rsp+20h] [rbp-60h]
  __int128 v13; // [rsp+60h] [rbp-20h]
  __int128 v14; // [rsp+70h] [rbp-10h]

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( v2 < a2 )
  {
    v12 = 5735;
LABEL_10:
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12,
      0LL);
    return v6;
  }
  if ( a2 == 1 )
  {
    v5 = *((_QWORD *)this + 3) + 80LL * (v2 - 1);
    if ( *(_DWORD *)(v5 + 72) == 52 )
    {
      v3 = 1;
      *(_QWORD *)&v13 = 0LL;
      *(_QWORD *)&v14 = *(_QWORD *)v5;
      DWORD2(v14) = *(_DWORD *)(v5 + 8);
      *(_OWORD *)v5 = 0x3F800000uLL;
      *(_OWORD *)(v5 + 16) = 0x3F80000000000000uLL;
      *((_QWORD *)&v13 + 1) = 1065353216LL;
      HIDWORD(v14) = 1065353216;
      *(_OWORD *)(v5 + 32) = v13;
      *(_DWORD *)(v5 + 72) = 265;
      *(_OWORD *)(v5 + 48) = v14;
      *(_BYTE *)(v5 + 76) = 1;
    }
  }
  else if ( a2 == 3 )
  {
    v8 = *((_QWORD *)this + 3);
    if ( *(_DWORD *)(v8 + 80LL * (v2 - 3) + 72) == 18
      && *(_DWORD *)(v8 + 80LL * (v2 - 2) + 72) == 18
      && *(_DWORD *)(v8 + 80LL * (v2 - 1) + 72) == 18 )
    {
      v9 = *(_DWORD *)(v8 + 80LL * (v2 - 1));
      v3 = 1;
      v10 = *(_DWORD *)(v8 + 80LL * (v2 - 3));
      v11 = *(_DWORD *)(v8 + 80LL * (v2 - 2));
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 72) = 265;
      *(_QWORD *)(v8 + 80LL * (v2 - 3)) = 1065353216LL;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 8) = 0;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 12) = 0;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 16) = 0;
      *(_QWORD *)(v8 + 80LL * (v2 - 3) + 20) = 1065353216LL;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 28) = 0;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 32) = 0;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 36) = 0;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 40) = 1065353216;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 44) = 0;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 48) = v10;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 52) = v11;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 56) = v9;
      *(_DWORD *)(v8 + 80LL * (v2 - 3) + 60) = 1065353216;
      *(_BYTE *)(v8 + 80LL * (v2 - 3) + 76) = 1;
    }
  }
  v6 = 0;
  if ( !v3 )
  {
    v12 = 5785;
    goto LABEL_10;
  }
  *((_DWORD *)this + 4) += 1 - a2;
  return v6;
}
