/*
 * XREFs of GreSetPaletteOwner @ 0x1C00B3A90
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1350 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetPaletteOwner(void *a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1 != gahStockObjects[15] )
    return (unsigned int)HmgSetOwner((unsigned int)a1, a2, 8);
  return v2;
}
