/*
 * XREFs of ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18019D308
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800B5EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x180019B80 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072EDC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008B360 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 */

__int64 __fastcall CCpuClip::AddPrimitiveClip(CCpuClip *this, const struct CShape *a2, const struct CMILMatrix *a3)
{
  CShapePtr *v3; // rsi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  struct CShape *v14; // rbx
  struct CShape *v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = (CCpuClip *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || (v7 = CCpuClip::ConvertContextDependentClipToLocal((CShape **)this), v9 = v7, v7 >= 0) )
  {
    if ( *(_QWORD *)v3 )
    {
      v12 = CShape::Combine(*(_QWORD *)v3, (__int64)a2, (__int64)a2, (__int64)a3, 1, &v16);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x4Au, 0LL);
        return v9;
      }
    }
    else
    {
      v10 = CShape::CopyShape(a2, a3, &v16);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x40u, 0LL);
        return v9;
      }
    }
    v14 = v16;
    CShapePtr::Release(v3);
    *(_QWORD *)v3 = v14;
    *((_BYTE *)v3 + 8) = 1;
    *((_BYTE *)this + 32) = 1;
    return v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3Au, 0LL);
  return v9;
}
