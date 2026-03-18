/*
 * XREFs of ?Matrix4x4FromPerspectiveOffCenter@CExpressionValueStack@@QEAAJXZ @ 0x1801FCCF8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z @ 0x18021A298 (-D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspectiveOffCenter(__int64 this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm0
  unsigned int v9; // [rsp+20h] [rbp-68h]
  _OWORD v10[4]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *(_DWORD *)(this + 16);
  if ( v1 >= 6 )
  {
    v3 = *(_QWORD *)(this + 24);
    this = 18LL;
    if ( *(_DWORD *)(v3 + 80LL * (v1 - 6) + 72) == 18 )
    {
      if ( *(_DWORD *)(v3 + 80LL * (v1 - 5) + 72) == 18 )
      {
        if ( *(_DWORD *)(v3 + 80LL * (v1 - 4) + 72) == 18 )
        {
          if ( *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) == 18 )
          {
            if ( *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) == 18 )
            {
              if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) == 18 )
              {
                if ( D2DMatrixPerspectiveOffCenter(
                       (struct D2DMatrix *)v10,
                       *(float *)(v3 + 80LL * (v1 - 6)),
                       *(float *)(v3 + 80LL * (v1 - 5)),
                       *(float *)(v3 + 80LL * (v1 - 4)),
                       *(float *)(v3 + 80LL * (v1 - 3)),
                       *(float *)(v3 + 80LL * (v1 - 2)),
                       *(float *)(v3 + 80LL * (v1 - 1))) )
                {
                  v7 = v10[0];
                  *(_DWORD *)(v4 + 8 * v5 + 72) = 265;
                  *(_OWORD *)(v4 + 8 * v5) = v7;
                  *(_OWORD *)(v4 + 8 * v5 + 16) = v10[1];
                  *(_OWORD *)(v4 + 8 * v5 + 32) = v10[2];
                  *(_OWORD *)(v4 + 8 * v5 + 48) = v10[3];
                  *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
                  *(_DWORD *)(v6 + 16) -= 5;
                  return 0;
                }
                v9 = 6789;
              }
              else
              {
                v9 = 6761;
              }
            }
            else
            {
              v9 = 6760;
            }
          }
          else
          {
            v9 = 6759;
          }
        }
        else
        {
          v9 = 6758;
        }
      }
      else
      {
        v9 = 6757;
      }
    }
    else
    {
      v9 = 6756;
    }
  }
  else
  {
    v9 = 6746;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v9,
    0LL);
  return v2;
}
