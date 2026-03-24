/*
 * XREFs of ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800959F8
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005830C (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094B70 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180007FC4 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180018604 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800552F0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180095BB0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?EstimatedArea@@YAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800986E0 (-EstimatedArea@@YAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertHW(__int64 a1, __int64 a2, __int64 a3, D2DMatrixHelper *a4)
{
  char v4; // r12
  char v5; // r13
  float *v10; // rax
  struct CPrimitiveColor *v11; // r15
  CCpuClip *v12; // rcx
  int appended; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  const struct D2D_MATRIX_3X2_F *v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  int BuiltHWPrimitiveEntry; // eax
  __int64 v27; // rcx

  v4 = 0;
  v5 = 0;
  if ( !a3 )
  {
    v11 = 0LL;
LABEL_3:
    if ( *(_BYTE *)(a1 + 2298) )
    {
      if ( (__int64)(*(_QWORD *)(a1 + 2192) - *(_QWORD *)(a1 + 2184)) >> 1 )
      {
        BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                                  (CDrawListEntryBuilder *)a1,
                                  0,
                                  0LL,
                                  0LL);
        v15 = BuiltHWPrimitiveEntry;
        if ( BuiltHWPrimitiveEntry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, BuiltHWPrimitiveEntry, 0xB5u, 0LL);
          return v15;
        }
      }
      *(_BYTE *)(a1 + 2298) = 0;
    }
    goto LABEL_4;
  }
  v10 = *(float **)(a3 + 32);
  v11 = *(struct CPrimitiveColor **)(a3 + 24);
  if ( !v10 )
    goto LABEL_3;
  if ( !*(_BYTE *)(a1 + 2298) || *(float *)(a1 + 2280) != *v10 || *(float *)(a1 + 2284) != v10[1] )
  {
    if ( (__int64)(*(_QWORD *)(a1 + 2192) - *(_QWORD *)(a1 + 2184)) >> 1 )
    {
      v24 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry((CDrawListEntryBuilder *)a1, 0, 0LL, 0LL);
      v15 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xAAu, 0LL);
        return v15;
      }
    }
    *(_BYTE *)(a1 + 2298) = 1;
    *(_QWORD *)(a1 + 2280) = **(_QWORD **)(a3 + 32);
  }
LABEL_4:
  if ( CCommonRegistryData::EnableMegaRects
    && (*(_BYTE *)(a1 + 24) & 1) != 0
    && (*(_BYTE *)(a2 + 24) & 1) == 0
    && EstimatedArea((const struct D2D_RECT_F *)a2, (const struct D2D_MATRIX_3X2_F *)a4) > (float)CCommonRegistryData::MegaRectSize )
  {
    if ( (v12 = *(CCpuClip **)(a1 + 16), !*(_QWORD *)v12) && !*((_QWORD *)v12 + 2)
      || CCpuClip::IsAxisAlignedRectangle(v12) && (!a4 || D2DMatrixHelper::Is2DAxisAlignedPreserving(a4, v23)) )
    {
      if ( (__int64)(*(_QWORD *)(a1 + 2192) - *(_QWORD *)(a1 + 2184)) >> 1 )
      {
        v21 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry((CDrawListEntryBuilder *)a1, 0, 0LL, 0LL);
        v15 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xD2u, 0LL);
          return v15;
        }
      }
      v4 = 1;
      if ( (*(_BYTE *)(a2 + 24) & 6) == 6 )
      {
        v5 = 1;
        *(_BYTE *)(a2 + 24) = *(_BYTE *)(a2 + 24) & 0xF9 | 2;
      }
    }
  }
  appended = CDrawListEntryBuilder::AppendHWPrimitive(
               (CDrawListEntryBuilder *)a1,
               (const struct PrimitiveGeometryDesc *)a2,
               (const struct PrimitiveVertexAttributesDesc *)a3,
               a4);
  v15 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, appended, 0xE2u, 0LL);
  }
  else if ( (*(_DWORD *)(a1 + 2272) >= 0xC8u || v11 || v4)
         && (v17 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                     (CDrawListEntryBuilder *)a1,
                     v4,
                     v11,
                     (const struct _D3DCOLORVALUE *)(a3 & -(__int64)(v11 != 0LL))),
             v15 = v17,
             v17 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xF2u, 0LL);
  }
  else if ( v5 )
  {
    *(_BYTE *)(a2 + 24) = *(_BYTE *)(a2 + 24) & 0xF9 | 4;
    v19 = CDrawListEntryBuilder::AppendHWPrimitive(
            (CDrawListEntryBuilder *)a1,
            (const struct PrimitiveGeometryDesc *)a2,
            (const struct PrimitiveVertexAttributesDesc *)a3,
            a4);
    v15 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xFAu, 0LL);
  }
  return v15;
}
