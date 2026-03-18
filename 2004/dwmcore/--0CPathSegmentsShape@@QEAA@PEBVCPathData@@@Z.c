/*
 * XREFs of ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18025D860
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18006C580 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801B73EC (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D4910 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801E3DE0 (-GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180097A74 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CPathSegmentsShape *__fastcall CPathSegmentsShape::CPathSegmentsShape(
        CPathSegmentsShape *this,
        const struct CPathData *a2)
{
  __int64 *v3; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CPathSegmentsShape::`vftable';
  v3 = (__int64 *)((char *)this + 16);
  *v3 = (__int64)a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v3);
  return this;
}
