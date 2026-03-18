/*
 * XREFs of GreSelectPalette @ 0x1C014ACB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004D3F8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00CF684 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

HPALETTE __fastcall GreSelectPalette(HDC a1, HPALETTE a2, int a3)
{
  HPALETTE v5; // rbx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( *(_WORD *)(v7[0] + 12LL) == 1 )
      v5 = SelectPaletteWorker((struct XDCOBJ *)v7, a2, a3);
    else
      TraceLoggingWriteUnsupportedGdiUsage();
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v5;
}
