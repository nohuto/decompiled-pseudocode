/*
 * XREFs of ?vInit@EPATHFONTOBJ@@QAEXK@Z @ 0x1E57D8
 * Callers:
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x240F0D (-bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x240FBD (-bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@@Z @ 0x24114B (-bInsertPathLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall EPATHFONTOBJ::vInit(EPATHFONTOBJ *this, unsigned int a2)
{
  *((_DWORD *)this + 2) = (char *)this + 48;
  *((_DWORD *)this + 26) = 1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 16) = (char *)this + 320;
  *((_DWORD *)this + 81) = (char *)this + 332;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 22) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 27) = 1;
  *((_DWORD *)this + 82) = a2 - 320;
}
