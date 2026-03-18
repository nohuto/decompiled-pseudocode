/*
 * XREFs of ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AAE_NPAK0@Z @ 0x8D33E
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AAEXXZ @ 0x8D1AE (-CaptureGlyphSet@QueryFontTreeRequest@@AAEXXZ.c)
 * Callees:
 *     ?Win32ProbeForRead@@YGXPAXKK@Z @ 0x8D388 (-Win32ProbeForRead@@YGXPAXKK@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

char __thiscall QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(
        QueryFontTreeRequest *this,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int *v3; // esi
  unsigned int v5; // [esp+0h] [ebp-28h]
  unsigned int v6; // [esp+4h] [ebp-24h]

  v3 = (unsigned int *)*((_DWORD *)this + 13);
  Win32ProbeForRead((void *)4, v5, v6);
  *a2 = *v3;
  *a3 = v3[3];
  return 1;
}
