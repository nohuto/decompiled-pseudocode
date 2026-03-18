/*
 * XREFs of ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C005F938
 * Callers:
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x1C005F330 (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C005F700 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C005F7A0 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C0144560 (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C02DD9F0 (-CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02DDB20 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FontDriverDdiRequest::CaptureUsermodeFontObj(struct _FONTOBJ *a1, struct _FONTOBJ *a2)
{
  a1->pvProducer = a2->pvProducer;
  a1->flFontType = a2->flFontType;
  return 1;
}
