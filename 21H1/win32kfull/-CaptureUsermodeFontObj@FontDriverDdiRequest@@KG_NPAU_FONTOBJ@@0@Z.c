/*
 * XREFs of ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z @ 0x8C1D4
 * Callers:
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UAEXPAX@Z @ 0x8B216 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UAEXPAX@Z @ 0x8C04A (-CaptureUsermodeParameters@QueryFontDataRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEXPAX@Z @ 0xF88AE (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UAEXPAX@Z @ 0x24ABF4 (-CaptureUsermodeParameters@FontManagementRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UAEXPAX@Z @ 0x24AD24 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEXPAX@Z @ 0x24AE6F (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEXPAX@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

char __fastcall FontDriverDdiRequest::CaptureUsermodeFontObj(int a1, int a2)
{
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  return 1;
}
