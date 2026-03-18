/*
 * XREFs of ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x180071D2C
 * Callers:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180070568 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x180070BEC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x1800EFCE0 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z @ 0x18024F43C (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x18024F4C4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x18024F54C (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18024F5D4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18024F664 (-PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x18024F6EC (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x18024F770 (-PushConstant@CExpressionValueStack@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800EF978 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::EnsureAvailablePushSpace(CExpressionValueStack *this)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rbx
  unsigned int v8; // ecx
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h] BYREF
  int v11; // [rsp+78h] [rbp-10h]
  char v12; // [rsp+7Ch] [rbp-Ch]
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF

  v1 = 5LL;
  if ( (unsigned int)~*((_DWORD *)this + 4) < 5 )
  {
    v3 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x53u,
      0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 12) == *((_DWORD *)this + 4) )
    {
      memset_0(v9, 0, sizeof(v9));
      v10 = 0LL;
      v11 = 18;
      v12 = 0;
      v5 = DynArrayImpl<1>::AddMultiple((char *)this + 24, 80LL, 5LL, &v13);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xE5u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(
          v8,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v3,
          0x5Cu,
          0LL);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v10);
        return v3;
      }
      v7 = v13;
      do
      {
        CExpressionValue::operator=(v7, v9);
        v7 += 80LL;
        --v1;
      }
      while ( v1 );
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v10);
    }
    return 0;
  }
  return v3;
}
