/*
 * XREFs of ?Matrix4x4FromQuaternion@CExpressionValueStack@@QEAAJXZ @ 0x1802016DC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18021EDFC (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromQuaternion(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r10
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned int v13; // [rsp+20h] [rbp-68h]
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v15[4]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = (unsigned int)(v1 - 1);
    if ( *(_DWORD *)(v3 + 80 * v4 + 72) == 71 )
    {
      v14 = *(_OWORD *)(v3 + 80 * v4);
      D2DMatrixRotationQuaternion((struct D2DMatrix *)v15, (const struct D2DQuaternion *)&v14);
      v5 = v15[0];
      v2 = 0;
      v6 = v15[1];
      *(_DWORD *)(v8 + 8 * v7 + 72) = 265;
      *(_OWORD *)(v8 + 8 * v7) = v5;
      *(_BYTE *)(v8 + 8 * v7 + 76) = v9;
      v10 = v15[2];
      *(_OWORD *)(v8 + 8 * v7 + 16) = v6;
      v11 = v15[3];
      *(_OWORD *)(v8 + 8 * v7 + 32) = v10;
      *(_OWORD *)(v8 + 8 * v7 + 48) = v11;
      return v2;
    }
    v13 = 6832;
  }
  else
  {
    v13 = 6827;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v13,
    0LL);
  return v2;
}
