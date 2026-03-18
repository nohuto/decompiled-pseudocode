/*
 * XREFs of ?Win32ProbeForRead@@YGXPAXKK@Z @ 0x8D388
 * Callers:
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AAE_NPAK0@Z @ 0x8D33E (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AAE_NPAK0@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UAEXPAX@Z @ 0xE00D8 (-CaptureUsermodeParameters@QueryFontRequest@@UAEXPAX@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SG_NPAEIIW4FontDriverType@@@Z @ 0xECB3C (-FntCacheAllocate@UmfdFontCacheEntry@@SG_NPAEIIW4FontDriverType@@@Z.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AAEXXZ @ 0x24AA6E (-CaptureKerningPairs@QueryFontTreeRequest@@AAEXXZ.c)
 *     ?CaptureUsermodeParameters@GetTrueTypeFileRequest@@UAEXPAX@Z @ 0x24ACA3 (-CaptureUsermodeParameters@GetTrueTypeFileRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UAEXPAX@Z @ 0x24AD24 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UAEXPAX@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge Win32ProbeForRead(int a1@<edx>, ULONG a2@<ecx>, void *a3, unsigned int a4, unsigned int a5)
{
  ULONG v5; // edx

  if ( a1 )
  {
    if ( (((int)a3 - 1) & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = a2 + a1;
    if ( v5 > _MmUserProbeAddress || v5 < a2 )
      *(_BYTE *)_MmUserProbeAddress = 0;
  }
}
