/*
 * XREFs of ?vLockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ @ 0x209D3E
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QAEXH@Z @ 0x209BCE (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QAEXH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 */

void __thiscall RFONTOBJ::vLockSystemTTGlyphCache(RFONTOBJ *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)this + 716);
  if ( v3 )
  {
    if ( *(char *)(v2 + 708) >= 0 )
    {
      GreAcquireSemaphore(*(_DWORD *)(v3 + 548));
      v4 = *(_DWORD *)this;
      v5 = 0;
      *(_DWORD *)(v4 + 708) |= 0x80u;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
    }
  }
}
