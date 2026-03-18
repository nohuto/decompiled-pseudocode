/*
 * XREFs of ??2CRectanglesShape@@SAPEAX_K@Z @ 0x180018BFC
 * Callers:
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180055690 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801C7CD0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801E9E90 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180036940 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CRectanglesShape::operator new(struct CRectanglesShape *a1)
{
  struct CObjectCache *ObjectCache; // rdx
  _QWORD *result; // rax
  int v3; // r8d
  void *retaddr; // [rsp+28h] [rbp+0h]

  ObjectCache = CThreadContext::GetObjectCache(a1);
  result = 0LL;
  v3 = *((_DWORD *)ObjectCache + 1);
  if ( v3 )
  {
    result = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *result;
    *((_DWORD *)ObjectCache + 1) = v3 - 1;
  }
  if ( !result )
  {
    result = DefaultHeap::Alloc(0x48uLL);
    if ( !result )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  return result;
}
