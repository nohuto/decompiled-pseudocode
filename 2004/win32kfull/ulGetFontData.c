/*
 * XREFs of ulGetFontData @ 0x1C00DF6A8
 * Callers:
 *     NtGdiGetFontData @ 0x1C00DF5A0 (NtGdiGetFontData.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00DF72C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 */

__int64 __fastcall ulGetFontData(HDC a1, unsigned int a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int FontData2; // ebx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v10, a1);
  if ( v10 )
  {
    FontData2 = ulGetFontData2((struct DCOBJ *)&v10, a2, a3, a4, a5);
  }
  else
  {
    EngSetLastError(6u);
    FontData2 = -1;
  }
  if ( v10 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v10);
  return FontData2;
}
