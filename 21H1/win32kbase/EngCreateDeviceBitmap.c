/*
 * XREFs of EngCreateDeviceBitmap @ 0x1C0155240
 * Callers:
 *     <none>
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0030584 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HBITMAP __stdcall EngCreateDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  return (HBITMAP)hbmCreateDriverSurface(3, dhsurf, sizl, 0, iFormatCompat, 0, (void *)0xDEADBEEFLL);
}
