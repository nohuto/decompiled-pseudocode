/*
 * XREFs of ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DF37C
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18008BBEC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D2B04 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800DAEC4 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800DAF7C (-Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z @ 0x1800DBF90 (-FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180158E84 (--1CComposition@@MEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180159F48 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800DF3D4 (--1CExcludeVisualReference@@QEAA@XZ.c)
 *     ?Restore@CCursorVisualReference@@UEAAXXZ @ 0x1801787E0 (-Restore@CCursorVisualReference@@UEAAXXZ.c)
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
