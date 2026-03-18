/*
 * XREFs of ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00E0678
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C00DDD40 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C00DDF7C (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C00DE758 (xInsertGlyphbitsRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C00DE8AC (xInsertMetricsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00DF38C (xInsertMetricsPlusRFONTOBJ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E344C (GreGetGlyphOutlineInternal.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C01457E0 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D56EC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02D5894 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02D59C8 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00E0E70 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0113EA0 (EngUnmapFontFileFD.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryFontData(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        void *a7,
        unsigned int a8)
{
  __int64 (__fastcall *v11)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int); // rbx
  unsigned int v12; // esi
  ULONG_PTR *v14; // rbx
  __int64 v15; // rdi
  ULONG_PTR *v16; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-10h]

  v11 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 2912LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v16, this);
  v12 = v11(a2, a3, a4, a5, a6, a7, a8);
  if ( v17 )
  {
    v14 = v16;
    v15 = v17;
    do
    {
      EngUnmapFontFileFD(*v14++);
      --v15;
    }
    while ( v15 );
  }
  return v12;
}
