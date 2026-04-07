/*
 * XREFs of ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x1800262A8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023200 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180024A94 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::TreatAsActiveWindow(CTopLevelWindow *this)
{
  return (*((_BYTE *)this + 592) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 91) + 611LL) & 0x20) != 0;
}
