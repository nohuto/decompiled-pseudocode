/*
 * XREFs of EngCreateRedirectionDeviceBitmap @ 0x1C0030510
 * Callers:
 *     <none>
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0030584 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HBITMAP __stdcall EngCreateRedirectionDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  return hbmCreateDriverSurface(3u, dhsurf, sizl, 0, iFormatCompat, 0x800u, (void *)0xDEADBEEFLL);
}
