/*
 * XREFs of _FONTOBJ_pQueryGlyphAttrs@8 @ 0x1F3574
 * Callers:
 *     _NtGdiFONTOBJ_pQueryGlyphAttrs@8 @ 0x21A080 (_NtGdiFONTOBJ_pQueryGlyphAttrs@8.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QAEPAU_FD_GLYPHATTR@@PAU_FONTOBJ@@K@Z @ 0x2292FD (-QueryGlyphAttrs@PFFOBJ@@QAEPAU_FD_GLYPHATTR@@PAU_FONTOBJ@@K@Z.c)
 */

PFD_GLYPHATTR __stdcall FONTOBJ_pQueryGlyphAttrs(FONTOBJ *pfo, ULONG iMode)
{
  LONG cx; // eax
  struct _FD_GLYPHATTR *GlyphAttrs; // esi
  PVOID v5[2]; // [esp+4h] [ebp-8h] BYREF

  if ( pfo && (cx = pfo[1].sizLogResPpi.cx) != 0 && *(_DWORD *)(cx + 2244) )
  {
    v5[0] = pfo[1].pvProducer;
    GlyphAttrs = PFFOBJ::QueryGlyphAttrs((PFFOBJ *)v5, pfo, iMode);
  }
  else
  {
    GlyphAttrs = 0;
  }
  pfo = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&pfo);
  return GlyphAttrs;
}
