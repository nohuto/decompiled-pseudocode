/*
 * XREFs of ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800E09DC
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180034AD4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800DAB64 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800DC02C (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800DC0E4 (-Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z @ 0x1800DD3D0 (-FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180156718 (--1CComposition@@MEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180157698 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800E0A34 (--1CExcludeVisualReference@@QEAA@XZ.c)
 *     ?Restore@CCursorVisualReference@@UEAAXXZ @ 0x180175C50 (-Restore@CCursorVisualReference@@UEAAXXZ.c)
 */

CCursorVisualReference *__fastcall CCursorVisualReference::`scalar deleting destructor'(CCursorVisualReference *this)
{
  bool v1; // zf
  CRenderTargetBitmap *v3; // rcx

  v1 = *((_DWORD *)this + 4) == 0;
  *(_QWORD *)this = &CCursorVisualReference::`vftable';
  if ( !v1 )
    CCursorVisualReference::Restore(this);
  v3 = (CRenderTargetBitmap *)*((_QWORD *)this + 3);
  if ( v3 )
    CRenderTargetBitmap::Release(v3);
  CExcludeVisualReference::~CExcludeVisualReference(this);
  operator delete(this);
  return this;
}
