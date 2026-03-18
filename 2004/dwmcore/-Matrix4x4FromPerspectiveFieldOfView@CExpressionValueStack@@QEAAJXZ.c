/*
 * XREFs of ?Matrix4x4FromPerspectiveFieldOfView@CExpressionValueStack@@QEAAJXZ @ 0x1801FE9CC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixPerspectiveFieldOfView@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z @ 0x18021C014 (-D2DMatrixPerspectiveFieldOfView@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspectiveFieldOfView(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int128 v6; // xmm0
  unsigned int v8; // [rsp+20h] [rbp-58h]
  _OWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 4 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 10LL * (v1 - 4);
    if ( *(_DWORD *)(v4 + 80LL * (v1 - 4) + 72) == 18 )
    {
      if ( *(_DWORD *)(v4 + 80LL * (v1 - 3) + 72) == 18 )
      {
        if ( *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) == 18 )
        {
          if ( *(_DWORD *)(v4 + 80LL * (v1 - 1) + 72) == 18 )
          {
            if ( D2DMatrixPerspectiveFieldOfView(
                   (struct D2DMatrix *)v9,
                   *(float *)(v4 + 80LL * (v1 - 4)),
                   *(float *)(v4 + 80LL * (v1 - 3)),
                   *(float *)(v4 + 80LL * (v1 - 2)),
                   *(float *)(v4 + 80LL * (v1 - 1))) )
            {
              v6 = v9[0];
              *(_DWORD *)(v4 + 8 * v5 + 72) = 265;
              *(_OWORD *)(v4 + 8 * v5) = v6;
              *(_OWORD *)(v4 + 8 * v5 + 16) = v9[1];
              *(_OWORD *)(v4 + 8 * v5 + 32) = v9[2];
              *(_OWORD *)(v4 + 8 * v5 + 48) = v9[3];
              *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
              *((_DWORD *)this + 4) -= 3;
              return 0;
            }
            v8 = 6708;
          }
          else
          {
            v8 = 6683;
          }
        }
        else
        {
          v8 = 6682;
        }
      }
      else
      {
        v8 = 6681;
      }
    }
    else
    {
      v8 = 6680;
    }
  }
  else
  {
    v8 = 6672;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v8,
    0LL);
  return v3;
}
