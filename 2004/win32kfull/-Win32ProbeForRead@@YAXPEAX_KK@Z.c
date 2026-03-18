/*
 * XREFs of ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C00E76AC
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00E6B90 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C00E7658 (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C013FF6C (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@GetTrueTypeFileRequest@@UEAAXPEAX@Z @ 0x1C02DEEE0 (-CaptureUsermodeParameters@GetTrueTypeFileRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02DEF60 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02DF4D8 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Win32ProbeForRead(char *a1, __int64 a2, int a3)
{
  if ( a2 )
  {
    if ( ((a3 - 1) & (unsigned int)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a1[a2] > MmUserProbeAddress || &a1[a2] < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
}
