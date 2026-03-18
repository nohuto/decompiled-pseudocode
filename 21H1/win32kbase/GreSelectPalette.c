/*
 * XREFs of GreSelectPalette @ 0x1C0017520
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001758C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0081D80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

HPALETTE __fastcall GreSelectPalette(HDC a1, HPALETTE a2, int a3)
{
  HPALETTE v4; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v7[0] = 0LL;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
    v4 = SelectPaletteWorker((struct XDCOBJ *)v7, a2, a3);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v4;
}
