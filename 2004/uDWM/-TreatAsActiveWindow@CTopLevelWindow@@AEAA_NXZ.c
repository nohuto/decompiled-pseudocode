/*
 * XREFs of ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18003E358
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180018950 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001A1E4 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::TreatAsActiveWindow(CTopLevelWindow *this)
{
  return (*((_BYTE *)this + 592) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 91) + 611LL) & 0x20) != 0;
}
