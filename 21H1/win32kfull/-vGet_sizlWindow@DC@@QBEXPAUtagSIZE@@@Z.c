/*
 * XREFs of ?vGet_sizlWindow@DC@@QBEXPAUtagSIZE@@@Z @ 0x24754A
 * Callers:
 *     ?iSelect@DC@@QAEHPAVREGION@@H@Z @ 0x5A6CE (-iSelect@DC@@QAEHPAVREGION@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QAEHPAVREGION@@H@Z @ 0x7A3DE (-iSelectTightenRao@DC@@QAEHPAVREGION@@H@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QBEHXZ @ 0x11CEA (-bDpiScaledSurface@DC@@QBEHXZ.c)
 */

void __thiscall DC::vGet_sizlWindow(DC *this, struct tagSIZE *a2)
{
  _DWORD *v2; // ecx
  LONG v3; // edx
  LONG v4; // ecx

  if ( DC::bDpiScaledSurface(this) )
  {
    v3 = v2[135];
    v4 = v2[136];
  }
  else
  {
    v3 = v2[128];
    v4 = v2[129];
  }
  a2->cx = v3;
  a2->cy = v4;
}
