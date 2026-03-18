/*
 * XREFs of ?Vector3Cross@CExpressionValueStack@@QEAAJXZ @ 0x180201790
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x18021D2C4 (-D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Cross(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // xmm0_8
  int v9; // eax
  __int64 v10; // xmm0_8
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  int v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-18h] BYREF
  int v22; // [rsp+58h] [rbp-10h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = v1 - 1;
    v5 = 10LL * (v1 - 2);
    v6 = 10 * v4;
    if ( *(_DWORD *)(v3 + 8 * v5 + 72) == 52 )
    {
      if ( *(_DWORD *)(v3 + 80 * v4 + 72) == 52 )
      {
        v7 = *(_DWORD *)(v3 + 8 * v5 + 8);
        v19 = *(_QWORD *)(v3 + 8 * v5);
        v8 = *(_QWORD *)(v3 + 8 * v6);
        v20 = v7;
        v9 = *(_DWORD *)(v3 + 8 * v6 + 8);
        v17 = v8;
        v18 = v9;
        D3DXVec3Cross((struct D2DVector3 *)&v21, (const struct D2DVector3 *)&v19, (const struct D2DVector3 *)&v17);
        v10 = v21;
        v11 = v22;
        *(_DWORD *)(v12 + 8 * v13 + 72) = 52;
        *(_QWORD *)(v12 + 8 * v13) = v10;
        *(_DWORD *)(v12 + 8 * v13 + 8) = v11;
        *(_BYTE *)(v12 + 8 * v13 + 76) = 1;
        --*(_DWORD *)(v14 + 16);
        return 0;
      }
      v16 = 7438;
    }
    else
    {
      v16 = 7437;
    }
  }
  else
  {
    v16 = 7431;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v16,
    0LL);
  return v2;
}
