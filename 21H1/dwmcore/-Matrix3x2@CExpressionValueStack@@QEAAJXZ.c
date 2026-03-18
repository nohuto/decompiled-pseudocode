/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x18002E7E0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  CExpressionValueStack *v2; // r8
  __int64 v3; // r11
  _QWORD *v4; // r9
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // xmm5_4
  int v9; // xmm4_4
  int v10; // xmm3_4
  int v11; // xmm2_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  unsigned int v15; // [rsp+20h] [rbp-58h]
  _QWORD v16[6]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 6 )
  {
    v15 = 5512;
  }
  else
  {
    v3 = *((_QWORD *)this + 3);
    v4 = v16;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      this = (CExpressionValueStack *)(v3 + 80LL * (v5 + v1 - 6));
      *v4 = this;
      if ( *((_DWORD *)this + 18) != 18 )
        break;
      ++v5;
      ++v4;
      if ( v5 >= 6 )
      {
        v7 = v16[0];
        v8 = *(_DWORD *)v16[0];
        v9 = *(_DWORD *)v16[1];
        v10 = *(_DWORD *)v16[2];
        v11 = *(_DWORD *)v16[3];
        v12 = *(_DWORD *)v16[4];
        v13 = *(_DWORD *)v16[5];
        *(_DWORD *)(v16[0] + 72LL) = 104;
        *(_DWORD *)v7 = v8;
        *(_DWORD *)(v7 + 4) = v9;
        *(_DWORD *)(v7 + 8) = v10;
        *(_DWORD *)(v7 + 12) = v11;
        *(_DWORD *)(v7 + 16) = v12;
        *(_DWORD *)(v7 + 20) = v13;
        *(_BYTE *)(v7 + 76) = 1;
        *((_DWORD *)v2 + 4) -= 5;
        return v6;
      }
    }
    v15 = 5526;
  }
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v15,
    0LL);
  return v6;
}
