/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QAEXH@Z @ 0xD08C4
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     ?vRestartbRealizeFont@@YGXPAVRFONT@@@Z @ 0x209DBD (-vRestartbRealizeFont@@YGXPAVRFONT@@@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QAEXXZ @ 0x8404C (-vFreepfdg@PFEOBJ@@QAEXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QAEXPAU_FONTOBJ@@@Z @ 0xD0B8E (-DestroyFont@PDEVOBJ@@QAEXPAU_FONTOBJ@@@Z.c)
 */

void __thiscall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, int a2)
{
  LONG cx; // esi
  LONG v4; // [esp+Ch] [ebp-8h] BYREF
  int *pvConsumer; // [esp+10h] [ebp-4h] BYREF

  cx = (*this)[1].sizLogResPpi.cx;
  pvConsumer = (int *)(*this)[1].pvConsumer;
  v4 = cx;
  PFEOBJ::vFreepfdg(&pvConsumer);
  if ( a2 )
  {
    if ( *(_DWORD *)(cx + 2072) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v4, *this);
  }
}
