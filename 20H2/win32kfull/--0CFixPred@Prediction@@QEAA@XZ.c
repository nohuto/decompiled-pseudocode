/*
 * XREFs of ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C012E8D0
 * Callers:
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C01116E8 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     NtGdiGetFontFileInfo @ 0x1C01558D0 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C02BA760 (NtGdiGetFontFileData.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BC580 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

Prediction::CFixPred *__fastcall Prediction::CFixPred::CFixPred(Prediction::CFixPred *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
