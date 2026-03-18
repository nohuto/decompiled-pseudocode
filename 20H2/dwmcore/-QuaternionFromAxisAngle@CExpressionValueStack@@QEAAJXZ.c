/*
 * XREFs of ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x1801FE3F0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18021AFCC (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v6; // ebx
  float v7; // xmm2_4
  int v8; // eax
  __int128 v9; // xmm0
  unsigned int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  __int128 v14; // [rsp+40h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v11 = 6931;
LABEL_7:
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v11,
      0LL);
    return v6;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = v1 - 1;
  v5 = 10LL * (v1 - 2);
  if ( *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) != 52 || (v6 = 0, *(_DWORD *)(v3 + 80 * v4 + 72) != 18) )
  {
    v11 = 6945;
    goto LABEL_7;
  }
  v7 = *(float *)(v3 + 80 * v4);
  v8 = *(_DWORD *)(v3 + 80LL * (v1 - 2) + 8);
  v12 = *(_QWORD *)(v3 + 80LL * (v1 - 2));
  v13 = v8;
  D3DXQuaternionRotationAxis((struct D2DQuaternion *)&v14, (const struct D2DVector3 *)&v12, v7);
  v9 = v14;
  *(_DWORD *)(v3 + 8 * v5 + 72) = 71;
  *(_BYTE *)(v3 + 8 * v5 + 76) = 1;
  *(_OWORD *)(v3 + 8 * v5) = v9;
  --*((_DWORD *)this + 4);
  return v6;
}
