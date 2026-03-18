/*
 * XREFs of ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1801A9220
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18003CD8C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800F7F34 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z @ 0x1801037BC (-FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z.c)
 *     CComposition::ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___ @ 0x180103A80 (CComposition--ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___.c)
 *     _lambda_c2c4320ca1e41092fdbc0b7f07aa0d93_::operator() @ 0x180103B2C (_lambda_c2c4320ca1e41092fdbc0b7f07aa0d93_--operator().c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801937E4 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x1801A9238 (-Hide@CExcludeVisualReference@@QEAAXXZ.c)
 *     ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x1801A9280 (-Restore@CExcludeVisualReference@@UEAAXXZ.c)
 *     ?Show@CExcludeVisualReference@@UEAAXXZ @ 0x1801A92C0 (-Show@CExcludeVisualReference@@UEAAXXZ.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x1801FEFF8 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1801FF0F8 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x1801FF458 (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x1801FF4C0 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
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
