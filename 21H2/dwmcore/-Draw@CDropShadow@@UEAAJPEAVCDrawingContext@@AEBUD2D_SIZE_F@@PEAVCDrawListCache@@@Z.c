/*
 * XREFs of ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180015D50
 * Callers:
 *     ?Draw@CDropShadow@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F6580 (-Draw@CDropShadow@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180040A80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041730 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CC8C (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 */

__int64 __fastcall CDropShadow::Draw(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CBrush *v4; // rsi
  int v8; // xmm0_4
  int v9; // xmm1_4
  int v10; // xmm1_4
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  _OWORD v17[3]; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+64h] [rbp-24h]
  int v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-1Ch]
  int v22; // [rsp+70h] [rbp-18h]

  v4 = (CDropShadow *)((char *)this - 192);
  v22 = 0;
  v17[0] = _xmm;
  v17[2] = _xmm;
  v8 = *((_DWORD *)this - 47);
  v17[1] = _xmm;
  v9 = *((_DWORD *)this - 48);
  v19 = v8;
  v18 = v9;
  v10 = *((_DWORD *)this - 46);
  v21 = (int)FLOAT_1_0;
  v20 = v10;
  LOWORD(v22) = 15700;
  v11 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v17, 1, 1);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x18Eu, 0LL);
  }
  else
  {
    v14 = CBrush::Draw(v4, a2, a3, a4);
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x194u, 0LL);
    CDrawingContext::PopTransformInternal(a2, 1);
  }
  return v13;
}
