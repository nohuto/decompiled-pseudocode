/*
 * XREFs of ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800DF928
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18008BBEC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D2B04 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z @ 0x1800DBF90 (-FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x1800DF0BC (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___ @ 0x1800E6D34 (CComposition--ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180159F48 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x1801786DC (-Hide@CExcludeVisualReference@@QEAAXXZ.c)
 *     ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x180178720 (-Restore@CExcludeVisualReference@@UEAAXXZ.c)
 *     ?Show@CExcludeVisualReference@@UEAAXXZ @ 0x180178760 (-Show@CExcludeVisualReference@@UEAAXXZ.c)
 *     ?Show@CCursorVisualReference@@UEAAXXZ @ 0x180178840 (-Show@CCursorVisualReference@@UEAAXXZ.c)
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1801AFFE0 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x1801B03E4 (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x1801B044C (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
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
