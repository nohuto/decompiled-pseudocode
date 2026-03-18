/*
 * XREFs of ?QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ @ 0x180202CD4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x18021F5DC (-D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromLerp(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int128 v6; // xmm1
  float v7; // xmm3_4
  __int128 v8; // xmm0
  unsigned int v10; // [rsp+20h] [rbp-48h]
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int128 v13; // [rsp+50h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 3 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 10LL * (v1 - 3);
    if ( *(_DWORD *)(v4 + 80LL * (v1 - 3) + 72) == 71 )
    {
      if ( *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) == 71 )
      {
        if ( *(_DWORD *)(v4 + 80LL * (v1 - 1) + 72) == 18 )
        {
          v6 = *(_OWORD *)(v4 + 80LL * (v1 - 2));
          v7 = *(float *)(v4 + 80LL * (v1 - 1));
          v12 = *(_OWORD *)(v4 + 80LL * (v1 - 3));
          v11 = v6;
          D3DXQuaternionLerp(
            (struct D2DQuaternion *)&v13,
            (const struct D2DQuaternion *)&v12,
            (const struct D2DQuaternion *)&v11,
            v7);
          v8 = v13;
          *(_DWORD *)(v4 + 8 * v5 + 72) = 71;
          *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
          *(_OWORD *)(v4 + 8 * v5) = v8;
          *((_DWORD *)this + 4) -= 2;
          return 0;
        }
        v10 = 7001;
      }
      else
      {
        v10 = 7000;
      }
    }
    else
    {
      v10 = 6999;
    }
  }
  else
  {
    v10 = 6992;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v10,
    0LL);
  return v3;
}
