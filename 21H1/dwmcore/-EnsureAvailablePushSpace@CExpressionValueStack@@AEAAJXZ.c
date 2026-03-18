/*
 * XREFs of ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x18009D3C8
 * Callers:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x18001E828 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x18009D368 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x18009DF8C (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z @ 0x180202740 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x1802027C8 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x180202850 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1802028D8 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180202968 (-PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x1802029F0 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x180202A74 (-PushConstant@CExpressionValueStack@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18009FFE0 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800CF964 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::EnsureAvailablePushSpace(CExpressionValueStack *this)
{
  __int64 v1; // rsi
  int v3; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rcx
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h]
  int v11; // [rsp+78h] [rbp-10h]
  char v12; // [rsp+7Ch] [rbp-Ch]
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF

  v1 = 5LL;
  if ( (unsigned int)~*((_DWORD *)this + 4) < 5 )
  {
    v3 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x52u,
      0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 12) != *((_DWORD *)this + 4) )
      return 0;
    memset_0(v9, 0, sizeof(v9));
    v10 = 0LL;
    v11 = 18;
    v12 = 0;
    v5 = DynArrayImpl<1>::AddMultiple((char *)this + 24, 80LL, 5LL, &v13);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xE5u, 0LL);
    }
    else
    {
      v7 = v13;
      do
      {
        CExpressionValue::operator=(v7, v9);
        v7 += 80LL;
        --v1;
      }
      while ( v1 );
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(
        v8,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v3,
        0x5Bu,
        0LL);
    else
      return 0;
  }
  return (unsigned int)v3;
}
