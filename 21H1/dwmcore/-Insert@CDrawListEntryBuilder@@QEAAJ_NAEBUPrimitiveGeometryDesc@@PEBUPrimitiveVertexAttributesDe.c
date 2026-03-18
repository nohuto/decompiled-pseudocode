/*
 * XREFs of ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180036700
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180035E30 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800A67B0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x1801BFA04 (-CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180052854 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A0CFC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Insert(
        CDrawListEntryBuilder *this,
        char a2,
        const struct PrimitiveGeometryDesc *a3,
        const struct PrimitiveVertexAttributesDesc *a4,
        const struct D2D_MATRIX_3X2_F *a5)
{
  unsigned int v5; // ebx
  const struct PrimitiveVertexAttributesDesc *v6; // r11
  const struct PrimitiveGeometryDesc *v7; // r10
  __int128 v10; // xmm1
  int v11; // eax
  __int64 v12; // rcx
  int inserted; // eax
  __int64 v14; // rcx
  _OWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = a4;
  v7 = a3;
  if ( ((*((_BYTE *)a3 + 24) & 1) != 0
     || !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a3))
    && (*((_BYTE *)a3 + 24) & 6) != 0 )
  {
    if ( a2 )
    {
      inserted = CDrawListEntryBuilder::InsertWARP(this, v7, v6, a5);
      v5 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, inserted, 0x7Bu, 0LL);
    }
    else
    {
      v10 = *((_OWORD *)a3 + 1);
      v15[0] = *(_OWORD *)a3;
      v15[1] = v10;
      v11 = CDrawListEntryBuilder::InsertHW(this, v15, v6, a5);
      v5 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x7Fu, 0LL);
    }
  }
  return v5;
}
