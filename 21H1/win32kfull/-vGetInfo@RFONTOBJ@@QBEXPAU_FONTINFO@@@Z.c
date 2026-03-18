/*
 * XREFs of ?vGetInfo@RFONTOBJ@@QBEXPAU_FONTINFO@@@Z @ 0x209B41
 * Callers:
 *     _FONTOBJ_vGetInfo@12 @ 0x1F36D2 (_FONTOBJ_vGetInfo@12.c)
 * Callees:
 *     <none>
 */

void __thiscall RFONTOBJ::vGetInfo(RFONTOBJ *this, struct _FONTINFO *a2)
{
  _DWORD *v2; // ecx

  a2->flCaps = 0;
  a2->cjMaxGlyph1 = 0;
  a2->cjMaxGlyph4 = 0;
  a2->cjMaxGlyph8 = 0;
  a2->cjMaxGlyph32 = 0;
  v2 = *(_DWORD **)this;
  a2->cjThis = 28;
  a2->cGlyphsSupported = *(_DWORD *)(v2[133] + 8);
  switch ( v2[30] )
  {
    case 1:
      a2->cjMaxGlyph1 = v2[158];
      break;
    case 4:
      a2->cjMaxGlyph4 = v2[158];
      break;
    case 8:
      a2->cjMaxGlyph8 = v2[158];
      break;
    case 0x20:
      a2->cjMaxGlyph32 = v2[158];
      break;
  }
  if ( v2[16] )
    a2->flCaps |= 1u;
  if ( (v2[178] & 0x8000) != 0 )
    a2->flCaps |= 2u;
}
