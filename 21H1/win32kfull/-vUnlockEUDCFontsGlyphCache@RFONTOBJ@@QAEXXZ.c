/*
 * XREFs of ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QAEXXZ @ 0x209E08
 * Callers:
 *     ?dtorHelper@RFONTOBJ@@QAEXXZ @ 0x207AAB (-dtorHelper@RFONTOBJ@@QAEXXZ.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QAE@XZ @ 0x869E4 (--1RFONTTMPOBJ@@QAE@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QAEXXZ @ 0x86BAC (-vReleaseCache@RFONTOBJ@@QAEXXZ.c)
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ @ 0x209EA0 (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ.c)
 */

void __thiscall RFONTOBJ::vUnlockEUDCFontsGlyphCache(RFONTOBJ *this)
{
  _DWORD *v2; // edx
  int v3; // esi
  _DWORD *v4; // ecx
  int v5; // [esp+4h] [ebp-4h] BYREF

  RFONTOBJ::vUnlockSystemTTGlyphCache(this);
  v2 = *(_DWORD **)this;
  if ( (*(_DWORD *)(*(_DWORD *)this + 708) & 0x101) == 1 )
  {
    v3 = v2[195] - 1;
    if ( v3 >= 0 )
    {
      v4 = *(_DWORD **)this;
      do
      {
        if ( *(_DWORD *)(v2[182] + 4 * v3) )
        {
          v5 = *(_DWORD *)(v2[182] + 4 * v3);
          RFONTOBJ::vReleaseCache((RFONTOBJ *)&v5);
          RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v5);
          v2 = *(_DWORD **)this;
          v4 = *(_DWORD **)this;
        }
        --v3;
      }
      while ( v3 >= 0 );
      v2 = v4;
    }
    if ( v2[181] )
    {
      v5 = v2[181];
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v5);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v5);
      v2 = *(_DWORD **)this;
    }
    if ( v2[180] )
    {
      v5 = v2[180];
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v5);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v5);
    }
  }
}
