/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009B114
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C000B02C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     bDeletePalette @ 0x1C009AEF0 (bDeletePalette.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1C60 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00CF040 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C014B680 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C014C6C0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     bInitPALOBJ @ 0x1C02991B0 (bInitPALOBJ.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 */

EPALOBJ *__fastcall EPALOBJ::EPALOBJ(EPALOBJ *this, HPALETTE a2)
{
  *(_QWORD *)this = 0LL;
  *(_QWORD *)this = HmgShareLockCheck((unsigned int)a2, 8);
  return this;
}
