/*
 * XREFs of ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QAEHK@Z @ 0x846D4 (-bInitCache@RFONTOBJ@@QAEHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QAEHPAU_FD_DEVICEMETRICS@@@Z @ 0x8521A (-bGetDEVICEMETRICS@RFONTOBJ@@QAEHPAU_FD_DEVICEMETRICS@@@Z.c)
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     _xInsertGlyphbitsRFONTOBJ@12 @ 0x861E0 (_xInsertGlyphbitsRFONTOBJ@12.c)
 *     _xInsertMetricsPlusRFONTOBJ@12 @ 0x8648A (_xInsertMetricsPlusRFONTOBJ@12.c)
 *     _xInsertMetricsRFONTOBJ@12 @ 0x8715C (_xInsertMetricsRFONTOBJ@12.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z @ 0x240DE1 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x240F0D (-bInsertGlyphbitsPath@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x240FBD (-bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@@Z @ 0x24114B (-bInsertPathLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QAE@XZ @ 0x8735E (--1ATTACHOBJ@@QAE@XZ.c)
 *     ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C (--0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z.c)
 */

int __thiscall PFFOBJ::QueryFontData(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        void *a7,
        unsigned int a8)
{
  int (__stdcall *v8)(struct DHPDEV__ *, struct _FONTOBJ *, unsigned int, unsigned int, struct _GLYPHDATA *, void *, unsigned int); // esi
  int v9; // esi
  _BYTE v11[12]; // [esp+8h] [ebp-Ch] BYREF

  v8 = *(int (__stdcall **)(struct DHPDEV__ *, struct _FONTOBJ *, unsigned int, unsigned int, struct _GLYPHDATA *, void *, unsigned int))(*(_DWORD *)(*(_DWORD *)this + 60) + 2012);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v11, this);
  v9 = v8(a2, a3, a4, a5, a6, a7, a8);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v11);
  return v9;
}
