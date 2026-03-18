/*
 * XREFs of ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800E0C4C
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18004FFD4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800DA5FC (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800DBB5C (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800DBC14 (-Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z @ 0x1800DCCE0 (-FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801548C0 (--1CComposition@@MEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180155848 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800E0CA4 (--1CExcludeVisualReference@@QEAA@XZ.c)
 *     ?Restore@CCursorVisualReference@@UEAAXXZ @ 0x180173F10 (-Restore@CCursorVisualReference@@UEAAXXZ.c)
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
