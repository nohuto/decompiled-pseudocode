/*
 * XREFs of ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x1801FF818
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800C3B98 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800C3C3C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18021D16C (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x18021D578 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Normalize(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-28h]
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
    v4 = *(_DWORD *)(v3 + 72);
    if ( v4 == 35 )
    {
      D3DXVec2Normalize((struct D2DVector2 *)&v9, (const struct D2DVector2 *)v3);
      *(_QWORD *)v3 = v9;
      *(_DWORD *)(v3 + 72) = 35;
    }
    else if ( v4 == 52 )
    {
      D3DXVec3Normalize((struct D2DVector3 *)&v8, (const struct D2DVector3 *)v3);
      v5 = DWORD2(v8);
      *(_QWORD *)v3 = v8;
      *(_DWORD *)(v3 + 8) = v5;
      *(_DWORD *)(v3 + 72) = 52;
    }
    else
    {
      if ( v4 == 69 )
      {
        D3DXVec4Normalize((struct D2DVector4 *)&v8, (const struct D2DVector4 *)v3);
        *(_DWORD *)(v3 + 72) = 69;
      }
      else
      {
        if ( v4 != 71 )
        {
          v7 = 3837;
          goto LABEL_3;
        }
        D3DXQuaternionNormalize((struct D2DQuaternion *)&v8, (const struct D2DQuaternion *)v3);
        *(_DWORD *)(v3 + 72) = 71;
      }
      *(_OWORD *)v3 = v8;
    }
    *(_BYTE *)(v3 + 76) = 1;
    return 0;
  }
  v7 = 3780;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v7,
    0LL);
  return v2;
}
