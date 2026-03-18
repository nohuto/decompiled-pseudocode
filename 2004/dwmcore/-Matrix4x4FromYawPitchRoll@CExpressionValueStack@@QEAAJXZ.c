/*
 * XREFs of ?Matrix4x4FromYawPitchRoll@CExpressionValueStack@@QEAAJXZ @ 0x1801FF5F8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18021C42C (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18021CEB0 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromYawPitchRoll(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned int v11; // [rsp+20h] [rbp-68h]
  _BYTE v12[16]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 3 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 10LL * (v1 - 3);
    if ( *(_DWORD *)(v4 + 80LL * (v1 - 3) + 72) == 18 )
    {
      if ( *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) == 18 )
      {
        if ( *(_DWORD *)(v4 + 80LL * (v1 - 1) + 72) == 18 )
        {
          D3DXQuaternionRotationYawPitchRoll(
            (struct D2DQuaternion *)v12,
            *(float *)(v4 + 80LL * (v1 - 3)),
            *(float *)(v4 + 80LL * (v1 - 2)),
            *(float *)(v4 + 80LL * (v1 - 1)));
          D2DMatrixRotationQuaternion((struct D2DMatrix *)v13, (const struct D2DQuaternion *)v12);
          v6 = v13[0];
          v7 = v13[1];
          *(_DWORD *)(v4 + 8 * v5 + 72) = 265;
          *(_OWORD *)(v4 + 8 * v5) = v6;
          *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
          v8 = v13[2];
          *(_OWORD *)(v4 + 8 * v5 + 16) = v7;
          v9 = v13[3];
          *(_OWORD *)(v4 + 8 * v5 + 32) = v8;
          *(_OWORD *)(v4 + 8 * v5 + 48) = v9;
          *((_DWORD *)this + 4) -= 2;
          return 0;
        }
        v11 = 6880;
      }
      else
      {
        v11 = 6879;
      }
    }
    else
    {
      v11 = 6878;
    }
  }
  else
  {
    v11 = 6871;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v11,
    0LL);
  return v3;
}
