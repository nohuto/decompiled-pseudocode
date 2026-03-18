/*
 * XREFs of GreSetPaletteOwner @ 0x1C0045950
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1C60 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     HmgSetOwner @ 0x1C007B240 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetPaletteOwner(void *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a1 != gahStockObjects[15] )
  {
    LOBYTE(v2) = 8;
    LODWORD(v2) = HmgSetOwner(a1, a2, v2);
  }
  return (unsigned int)v2;
}
