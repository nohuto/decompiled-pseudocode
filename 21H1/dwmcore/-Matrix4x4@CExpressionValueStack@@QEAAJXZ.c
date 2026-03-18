/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x18002E680
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  CExpressionValueStack *v2; // rbx
  __int64 v3; // rdx
  int v4; // xmm3_4
  int v5; // xmm1_4
  int v6; // xmm2_4
  int v7; // xmm0_4
  int v8; // xmm5_4
  int v9; // xmm4_4
  unsigned int v10; // ebx
  int v12; // r8d
  _QWORD *i; // r11
  __int64 v14; // rcx
  int v15; // xmm14_4
  int v16; // xmm15_4
  int v17; // xmm13_4
  int v18; // xmm12_4
  int v19; // xmm11_4
  int v20; // xmm10_4
  int v21; // xmm9_4
  int v22; // xmm8_4
  int v23; // xmm7_4
  int v24; // xmm6_4
  int v25; // xmm5_4
  int v26; // xmm4_4
  int v27; // xmm3_4
  int v28; // xmm2_4
  int v29; // xmm1_4
  int v30; // xmm0_4
  unsigned int v31; // [rsp+28h] [rbp-E0h]
  _QWORD v32[16]; // [rsp+38h] [rbp-D0h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( !v1 )
  {
    v31 = 5567;
LABEL_16:
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v31,
      0LL);
    return v10;
  }
  v3 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) != 104 )
  {
    if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) == 18 )
    {
      if ( v1 >= 0x10 )
      {
        v12 = 0;
        for ( i = v32; ; ++i )
        {
          this = (CExpressionValueStack *)(v3 + 80LL * (v12 + v1 - 16));
          *i = this;
          if ( *((_DWORD *)this + 18) != 18 )
            break;
          if ( ++v12 >= 16 )
          {
            v14 = v32[0];
            v15 = *(_DWORD *)v32[1];
            v16 = *(_DWORD *)v32[0];
            v17 = *(_DWORD *)v32[2];
            v18 = *(_DWORD *)v32[3];
            v19 = *(_DWORD *)v32[4];
            v20 = *(_DWORD *)v32[5];
            v21 = *(_DWORD *)v32[6];
            v22 = *(_DWORD *)v32[7];
            v23 = *(_DWORD *)v32[8];
            v24 = *(_DWORD *)v32[9];
            v25 = *(_DWORD *)v32[10];
            v26 = *(_DWORD *)v32[11];
            v27 = *(_DWORD *)v32[12];
            v28 = *(_DWORD *)v32[13];
            v29 = *(_DWORD *)v32[14];
            v30 = *(_DWORD *)v32[15];
            *(_DWORD *)(v32[0] + 72LL) = 265;
            *(_DWORD *)v14 = v16;
            *(_DWORD *)(v14 + 4) = v15;
            *(_DWORD *)(v14 + 8) = v17;
            *(_DWORD *)(v14 + 12) = v18;
            *(_DWORD *)(v14 + 16) = v19;
            *(_DWORD *)(v14 + 20) = v20;
            *(_DWORD *)(v14 + 24) = v21;
            *(_DWORD *)(v14 + 28) = v22;
            *(_DWORD *)(v14 + 32) = v23;
            *(_DWORD *)(v14 + 36) = v24;
            *(_DWORD *)(v14 + 40) = v25;
            *(_DWORD *)(v14 + 44) = v26;
            *(_DWORD *)(v14 + 48) = v27;
            *(_DWORD *)(v14 + 52) = v28;
            *(_DWORD *)(v14 + 56) = v29;
            *(_DWORD *)(v14 + 60) = v30;
            *(_BYTE *)(v14 + 76) = 1;
            *((_DWORD *)v2 + 4) -= 15;
            return 0;
          }
        }
        v31 = 5595;
      }
      else
      {
        v31 = 5581;
      }
    }
    else
    {
      v31 = 5633;
    }
    goto LABEL_16;
  }
  v4 = *(_DWORD *)(v3 + 80LL * (v1 - 1));
  v5 = *(_DWORD *)(v3 + 80LL * (v1 - 1) + 4);
  v6 = *(_DWORD *)(v3 + 80LL * (v1 - 1) + 8);
  v7 = *(_DWORD *)(v3 + 80LL * (v1 - 1) + 12);
  v8 = *(_DWORD *)(v3 + 80LL * (v1 - 1) + 16);
  v9 = *(_DWORD *)(v3 + 80LL * (v1 - 1) + 20);
  *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) = 265;
  *(_DWORD *)(v3 + 80LL * (v1 - 1)) = v4;
  *(_DWORD *)(v3 + 80LL * (v1 - 1) + 4) = v5;
  *(_QWORD *)(v3 + 80LL * (v1 - 1) + 8) = 0LL;
  *(_DWORD *)(v3 + 80LL * (v1 - 1) + 16) = v6;
  *(_DWORD *)(v3 + 80LL * (v1 - 1) + 20) = v7;
  *(_QWORD *)(v3 + 80LL * (v1 - 1) + 24) = 0LL;
  *(_QWORD *)(v3 + 80LL * (v1 - 1) + 32) = 0LL;
  *(_QWORD *)(v3 + 80LL * (v1 - 1) + 40) = 1065353216LL;
  *(_DWORD *)(v3 + 80LL * (v1 - 1) + 48) = v8;
  *(_DWORD *)(v3 + 80LL * (v1 - 1) + 52) = v9;
  *(_DWORD *)(v3 + 80LL * (v1 - 1) + 56) = 0;
  *(_DWORD *)(v3 + 80LL * (v1 - 1) + 60) = 1065353216;
  *(_BYTE *)(v3 + 80LL * (v1 - 1) + 76) = 1;
  return 0;
}
