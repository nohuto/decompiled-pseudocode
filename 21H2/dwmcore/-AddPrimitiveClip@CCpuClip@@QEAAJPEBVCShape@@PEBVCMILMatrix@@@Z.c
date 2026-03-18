/*
 * XREFs of ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1801E4B0C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD884 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1801E4BF0 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
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

  v3 = (CCpuClip *)((char *)this + 80);
  if ( *((_QWORD *)this + 10) || (v7 = CCpuClip::ConvertContextDependentClipToLocal(this), v9 = v7, v7 >= 0) )
  {
    if ( *(_QWORD *)v3 )
    {
      v12 = CShape::Combine(*(_QWORD *)v3, (__int64)a2, (__int64)a2, (__int64)a3, 1, &v16);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x54u);
        return v9;
      }
    }
    else
    {
      v10 = CShape::CopyShape(a2, a3, &v16);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x4Au);
        return v9;
      }
    }
    v14 = v16;
    CShapePtr::Release(v3);
    *(_QWORD *)v3 = v14;
    *((_BYTE *)v3 + 8) = 1;
    *((_BYTE *)this + 100) = 1;
    return v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x44u);
  return v9;
}
