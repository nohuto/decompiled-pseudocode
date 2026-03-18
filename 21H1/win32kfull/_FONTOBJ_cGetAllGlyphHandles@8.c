/*
 * XREFs of _FONTOBJ_cGetAllGlyphHandles@8 @ 0x1F34D6
 * Callers:
 *     _NtGdiFONTOBJ_cGetAllGlyphHandles@8 @ 0x219DE2 (_NtGdiFONTOBJ_cGetAllGlyphHandles@8.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?chglyGetAllHandles@RFONTOBJ@@QAEKPAK@Z @ 0x22ED9E (-chglyGetAllHandles@RFONTOBJ@@QAEKPAK@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetAllGlyphHandles(FONTOBJ *pfo, HGLYPH *phg)
{
  unsigned int AllHandles; // eax
  ULONG v3; // esi

  AllHandles = RFONTOBJ::chglyGetAllHandles((RFONTOBJ *)&pfo, phg);
  pfo = 0;
  v3 = AllHandles;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&pfo);
  return v3;
}
