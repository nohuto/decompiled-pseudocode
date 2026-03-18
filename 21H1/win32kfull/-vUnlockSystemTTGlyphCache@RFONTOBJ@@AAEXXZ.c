/*
 * XREFs of ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ @ 0x209EA0
 * Callers:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QAEXXZ @ 0x209E08 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QAEXXZ.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QAE@XZ @ 0x869E4 (--1RFONTTMPOBJ@@QAE@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QAEXXZ @ 0x86BAC (-vReleaseCache@RFONTOBJ@@QAEXXZ.c)
 */

void __thiscall RFONTOBJ::vUnlockSystemTTGlyphCache(RFONTOBJ *this)
{
  int v2; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( (*(_DWORD *)(*(_DWORD *)this + 708) & 0x180) == 0x80 )
  {
    v2 = *(_DWORD *)(*(_DWORD *)this + 716);
    if ( v2 )
    {
      if ( GreIsSemaphoreOwnedByCurrentThread(*(_DWORD *)(v2 + 548)) )
      {
        v3 = *(_DWORD *)(*(_DWORD *)this + 716);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v3);
        *(_DWORD *)(*(_DWORD *)this + 708) &= ~0x80u;
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v3);
      }
    }
  }
}
