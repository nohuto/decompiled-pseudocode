/*
 * XREFs of ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800E810C
 * Callers:
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800A6180 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800F8B30 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180216F30 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
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
