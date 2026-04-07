/*
 * XREFs of ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180026450
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C060 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001EEB0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023200 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003C0E4 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsSheetOfGlass(CTopLevelWindow *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 91);
  return *(_QWORD *)(v1 + 80) == 0x7FFFFFFF7FFFFFFFLL
      && *(_DWORD *)(v1 + 88) == 0x7FFFFFFF
      && *(_DWORD *)(v1 + 92) == 0x7FFFFFFF;
}
