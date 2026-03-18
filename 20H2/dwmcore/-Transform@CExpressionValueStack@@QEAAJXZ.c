/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801FF3FC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x18021BEB4 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Transform(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  CExpressionValueStack *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  __int128 v7; // xmm0
  float v8; // xmm2_4
  float v9; // xmm3_4
  unsigned int v11; // [rsp+20h] [rbp-48h]
  unsigned int v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 10LL * (v1 - 2);
    v6 = v4 + 80LL * (v1 - 1);
    if ( *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) == 35 )
    {
      if ( *(_DWORD *)(v6 + 72) != 104 )
      {
        v11 = 2831;
        goto LABEL_3;
      }
      v8 = (float)((float)(*(float *)(v4 + 80LL * (v1 - 2) + 4) * *(float *)(v6 + 8))
                 + (float)(*(float *)(v4 + 80LL * (v1 - 2)) * *(float *)v6))
         + *(float *)(v6 + 16);
      v9 = (float)((float)(*(float *)(v4 + 80LL * (v1 - 2)) * *(float *)(v6 + 4))
                 + (float)(*(float *)(v4 + 80LL * (v1 - 2) + 4) * *(float *)(v6 + 12)))
         + *(float *)(v6 + 20);
      *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) = 35;
      *(float *)(v4 + 80LL * (v1 - 2)) = v8;
      *(float *)(v4 + 80LL * (v1 - 2) + 4) = v9;
    }
    else
    {
      if ( *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) != 69 )
      {
LABEL_13:
        --*((_DWORD *)v2 + 4);
        return 0;
      }
      if ( *(_DWORD *)(v6 + 72) != 265 )
      {
        v11 = 2800;
        goto LABEL_3;
      }
      v13 = *(_OWORD *)(v4 + 80LL * (v1 - 2));
      D3DXVec4TransformArray(
        (struct D2DVector4 *)&v14,
        v5,
        (const struct D2DVector4 *)&v13,
        v4,
        (const struct D2DMatrix *)v6,
        v12);
      v7 = v14;
      *(_DWORD *)(v4 + 8 * v5 + 72) = 69;
      *(_OWORD *)(v4 + 8 * v5) = v7;
    }
    *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
    goto LABEL_13;
  }
  v11 = 2774;
LABEL_3:
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
