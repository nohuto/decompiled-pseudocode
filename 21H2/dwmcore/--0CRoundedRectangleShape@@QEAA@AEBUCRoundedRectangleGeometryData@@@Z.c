/*
 * XREFs of ??0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800DEE54
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800DECC0 (-GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x1800DEDB0 (-FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800862A0 (--0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800DF980 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CRoundedRectangleShape *__fastcall CRoundedRectangleShape::CRoundedRectangleShape(
        CRoundedRectangleShape *this,
        const struct CRoundedRectangleGeometryData *a2)
{
  float v2; // xmm0_4
  CRoundedRectangleShape::SharedData *v5; // rax
  CRoundedRectangleShape::SharedData *v6; // rbx
  CRoundedRectangleShape::SharedData *v8; // rax

  *((_QWORD *)this + 1) = 0LL;
  v2 = *((float *)a2 + 12);
  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  if ( v2 <= 0.0 )
  {
    v8 = (CRoundedRectangleShape::SharedData *)operator new(0x50uLL);
    if ( v8 )
    {
      v6 = (CRoundedRectangleShape::SharedData *)CRoundedRectangleShape::SharedData::SharedData(v8, a2);
      goto LABEL_4;
    }
LABEL_7:
    v6 = 0LL;
    goto LABEL_4;
  }
  v5 = (CRoundedRectangleShape::SharedData *)operator new(0x68uLL);
  v6 = v5;
  if ( !v5 )
    goto LABEL_7;
  CRoundedRectangleShape::SharedData::SharedData(v5, a2);
  *(_QWORD *)v6 = &CRoundedRectangleShape::FlattenedShapeSharedData::`vftable';
  *((_QWORD *)v6 + 10) = 0LL;
  *((_QWORD *)v6 + 11) = 0LL;
  *((_QWORD *)v6 + 12) = 0LL;
LABEL_4:
  *((_QWORD *)this + 2) = v6;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((char *)this + 16);
  return this;
}
