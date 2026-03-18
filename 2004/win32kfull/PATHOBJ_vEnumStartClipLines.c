/*
 * XREFs of PATHOBJ_vEnumStartClipLines @ 0x1C02BD800
 * Callers:
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B5430 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C013EA78 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 */

void __stdcall PATHOBJ_vEnumStartClipLines(PATHOBJ *ppo, CLIPOBJ *pco, SURFOBJ *pso, LINEATTRS *pla)
{
  XCLIPOBJ::vEnumPathStart(
    (XCLIPOBJ *)pco,
    ppo,
    (struct SURFACE *)((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)),
    pla);
}
