/*
 * XREFs of _ulGetFontData@20 @ 0x86AB0
 * Callers:
 *     _NtGdiGetFontData@20 @ 0x869F2 (_NtGdiGetFontData@20.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?ulGetFontData2@@YGKAAVDCOBJ@@KKPAXK@Z @ 0x86B04 (-ulGetFontData2@@YGKAAVDCOBJ@@KKPAXK@Z.c)
 */

unsigned int __thiscall ulGetFontData(HDC this, struct DCOBJ *a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int FontData2; // esi
  void *v6; // [esp+0h] [ebp-10h]
  unsigned int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  memset(v7, 0, sizeof(v7));
  XDCOBJ::vLock((XDCOBJ *)v7, this);
  if ( v7[0] )
  {
    FontData2 = ulGetFontData2(a2, a3, a4, v6, v7[0]);
  }
  else
  {
    EngSetLastError(6u);
    FontData2 = -1;
  }
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return FontData2;
}
