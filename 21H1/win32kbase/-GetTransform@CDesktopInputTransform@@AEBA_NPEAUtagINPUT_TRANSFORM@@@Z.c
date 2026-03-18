/*
 * XREFs of ?GetTransform@CDesktopInputTransform@@AEBA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01BD49C
 * Callers:
 *     ?TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z @ 0x1C01BD6BC (-TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01BD7A0 (-TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00B8510 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 */

bool __fastcall CDesktopInputTransform::GetTransform(CDesktopInputTransform *this, struct tagINPUT_TRANSFORM *a2)
{
  CompositionInputObject *v2; // rcx

  v2 = (CompositionInputObject *)*((_QWORD *)this + 3);
  return v2 && (int)CompositionInputObject::QueryTransform(v2, a2) >= 0;
}
