/*
 * XREFs of ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180057630
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1800AC0F4 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B3EB0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801E30C4 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E369C (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1801E4BF0 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 */

__int64 __fastcall CCpuClip::ResolveClip(CCpuClip *this, const struct CShape **a2, struct CMILMatrix *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // xmm1_4
  CMILMatrix *v8; // rax
  int v10; // eax
  unsigned int v11; // ecx
  char v12; // al
  _BYTE v13[72]; // [rsp+30h] [rbp-98h] BYREF
  struct D2D_MATRIX_3X2_F v14; // [rsp+78h] [rbp-50h] BYREF

  v6 = 0;
  if ( !a3 || *((_BYTE *)this + 100) )
  {
    if ( *((_QWORD *)this + 10) || (v10 = CCpuClip::ConvertContextDependentClipToLocal(this), v6 = v10, v10 >= 0) )
    {
      *a2 = (const struct CShape *)*((_QWORD *)this + 10);
      if ( a3 )
      {
        *(_QWORD *)a3 = 1065353216LL;
        *((_QWORD *)a3 + 1) = 0LL;
        *((_DWORD *)a3 + 4) = 0;
        *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
        *(_QWORD *)((char *)a3 + 28) = 0LL;
        *((_DWORD *)a3 + 9) = 0;
        *((_QWORD *)a3 + 5) = 1065353216LL;
        *((_QWORD *)a3 + 6) = 0LL;
        *((_DWORD *)a3 + 14) = 0;
        *((_DWORD *)a3 + 15) = 1065353216;
        v12 = *((_BYTE *)a3 + 65) & 0xD7;
        *((_BYTE *)a3 + 64) = 85;
        *((_BYTE *)a3 + 65) = v12 | 0x17;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x81u, 0LL);
    }
  }
  else
  {
    *a2 = *(const struct CShape **)this;
    v7 = *((_DWORD *)this + 3);
    v14.m11 = *((FLOAT *)this + 2);
    *(_QWORD *)&v14.m[0][1] = __PAIR64__(*((_DWORD *)this + 6), v7);
    *(_QWORD *)&v14.m[1][1] = __PAIR64__(*((_DWORD *)this + 14), *((_DWORD *)this + 7));
    v14.dy = *((FLOAT *)this + 15);
    D2D1InvertMatrix(&v14);
    v8 = CMILMatrix::CMILMatrix((CMILMatrix *)v13, &v14);
    *(_OWORD *)a3 = *(_OWORD *)v8;
    *((_OWORD *)a3 + 1) = *((_OWORD *)v8 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)v8 + 2);
    *((_OWORD *)a3 + 3) = *((_OWORD *)v8 + 3);
    *((_DWORD *)a3 + 16) = *((_DWORD *)v8 + 16);
  }
  return v6;
}
