/*
 * XREFs of ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801FFFCC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021B818 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x18021B918 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z @ 0x18021BA98 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z @ 0x18021BB28 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z @ 0x18021BC58 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z @ 0x18021BD30 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4Transform(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  CExpressionValueStack *v2; // rbx
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // r9
  __int128 *v6; // rdx
  int v7; // eax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  unsigned int v22; // [rsp+20h] [rbp-29h]
  __int128 v23; // [rsp+30h] [rbp-19h] BYREF
  __int128 v24; // [rsp+40h] [rbp-9h] BYREF
  __int128 v25; // [rsp+50h] [rbp+7h] BYREF
  __int128 v26; // [rsp+60h] [rbp+17h] BYREF
  __int128 v27; // [rsp+70h] [rbp+27h]
  __int128 v28; // [rsp+80h] [rbp+37h]
  __int128 v29; // [rsp+90h] [rbp+47h]
  __int64 v30; // [rsp+B0h] [rbp+67h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v22 = 7698;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v22,
      0LL);
    return v3;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = 10LL * (v1 - 2);
  v6 = (__int128 *)(v4 + 80LL * (v1 - 1));
  v7 = *(_DWORD *)(v4 + 8 * v5 + 72);
  if ( v7 != 35 && v7 != 52 && v7 != 69 )
  {
    v22 = 7712;
    goto LABEL_3;
  }
  this = (CExpressionValueStack *)*((unsigned int *)v6 + 18);
  if ( (_DWORD)this != 71 && (_DWORD)this != 265 )
  {
    v22 = 7721;
    goto LABEL_3;
  }
  if ( v7 == 35 )
  {
    v30 = *(_QWORD *)(v4 + 8 * v5);
    if ( (_DWORD)this == 265 )
    {
      v8 = v6[1];
      v26 = *v6;
      v9 = v6[2];
      v27 = v8;
      v10 = v6[3];
      v28 = v9;
      v29 = v10;
      D3DXVec4Transform((struct D2DVector4 *)&v24, (const struct D2DVector2 *)&v30, (const struct D2DMatrix *)&v26);
    }
    else
    {
      v23 = *v6;
      D3DXVec4Transform((struct D2DVector4 *)&v24, (const struct D2DVector2 *)&v30, (const struct D2DQuaternion *)&v23);
    }
  }
  else if ( v7 == 52 )
  {
    v13 = *(_DWORD *)(v4 + 8 * v5 + 8);
    *(_QWORD *)&v23 = *(_QWORD *)(v4 + 8 * v5);
    DWORD2(v23) = v13;
    if ( (_DWORD)this == 265 )
    {
      v14 = v6[1];
      v26 = *v6;
      v15 = v6[2];
      v27 = v14;
      v16 = v6[3];
      v28 = v15;
      v29 = v16;
      D3DXVec4Transform((struct D2DVector4 *)&v24, (const struct D2DVector3 *)&v23, (const struct D2DMatrix *)&v26);
    }
    else
    {
      v25 = *v6;
      D3DXVec4Transform((struct D2DVector4 *)&v24, (const struct D2DVector3 *)&v23, (const struct D2DQuaternion *)&v25);
    }
  }
  else
  {
    v23 = *(_OWORD *)(v4 + 8 * v5);
    if ( (_DWORD)this == 265 )
    {
      v17 = v6[1];
      v26 = *v6;
      v18 = v6[2];
      v27 = v17;
      v19 = v6[3];
      v28 = v18;
      v29 = v19;
      D3DXVec4Transform((struct D2DVector4 *)&v24, (const struct D2DVector4 *)&v23, (const struct D2DMatrix *)&v26);
    }
    else
    {
      v25 = *v6;
      D3DXVec4Transform((struct D2DVector4 *)&v24, (const struct D2DVector4 *)&v23, (const struct D2DQuaternion *)&v25);
    }
  }
  v20 = v24;
  *(_DWORD *)(v12 + 8 * v11 + 72) = 69;
  *(_BYTE *)(v12 + 8 * v11 + 76) = 1;
  *(_OWORD *)(v12 + 8 * v11) = v20;
  --*((_DWORD *)v2 + 4);
  return 0;
}
