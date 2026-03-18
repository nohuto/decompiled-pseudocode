/*
 * XREFs of ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E0F88
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180034AD4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800DAB64 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z @ 0x1800DD3D0 (-FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x1800E071C (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___ @ 0x1800E7AEC (CComposition--ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180157698 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x180175B4C (-Hide@CExcludeVisualReference@@QEAAXXZ.c)
 *     ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x180175B90 (-Restore@CExcludeVisualReference@@UEAAXXZ.c)
 *     ?Show@CExcludeVisualReference@@UEAAXXZ @ 0x180175BD0 (-Show@CExcludeVisualReference@@UEAAXXZ.c)
 *     ?Show@CCursorVisualReference@@UEAAXXZ @ 0x180175CB0 (-Show@CCursorVisualReference@@UEAAXXZ.c)
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1801AD680 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x1801ADA84 (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x1801ADAEC (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
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
