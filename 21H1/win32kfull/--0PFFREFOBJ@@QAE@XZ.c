/*
 * XREFs of ??0PFFREFOBJ@@QAE@XZ @ 0xF8309
 * Callers:
 *     _NtGdiGetFontFileInfo@20 @ 0xACC7C (_NtGdiGetFontFileInfo@20.c)
 *     _NtGdiGetFontFileData@20 @ 0x221DD2 (_NtGdiGetFontFileData@20.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x223E25 (-bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

PFFREFOBJ *__thiscall PFFREFOBJ::PFFREFOBJ(PFFREFOBJ *this)
{
  *(_DWORD *)this = 0;
  return this;
}
