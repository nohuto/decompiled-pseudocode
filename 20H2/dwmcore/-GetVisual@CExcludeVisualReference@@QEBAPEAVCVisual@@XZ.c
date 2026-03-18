/*
 * XREFs of ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E11F8
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18004FFD4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800DA5FC (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z @ 0x1800DCCE0 (-FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x1800E098C (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___ @ 0x1800E84F8 (CComposition--ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180155848 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x180173E0C (-Hide@CExcludeVisualReference@@QEAAXXZ.c)
 *     ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x180173E50 (-Restore@CExcludeVisualReference@@UEAAXXZ.c)
 *     ?Show@CExcludeVisualReference@@UEAAXXZ @ 0x180173E90 (-Show@CExcludeVisualReference@@UEAAXXZ.c)
 *     ?Show@CCursorVisualReference@@UEAAXXZ @ 0x180173F70 (-Show@CCursorVisualReference@@UEAAXXZ.c)
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1801AB780 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x1801ABB84 (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x1801ABBEC (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CExcludeVisualReference::GetVisual(CExcludeVisualReference *this)
{
  __int64 v1; // rdx
  struct CVisual *result; // rax

  v1 = *((_QWORD *)this + 1);
  result = 0LL;
  if ( v1 )
    return *(struct CVisual **)(v1 + 16);
  return result;
}
