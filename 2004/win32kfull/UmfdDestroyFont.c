/*
 * XREFs of UmfdDestroyFont @ 0x1C00DC9A0
 * Callers:
 *     <none>
 * Callees:
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C00DCA14 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00DFC8C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00E15B4 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C02A9208 (FONTOBJ_SetCachedGlyphAttrs.c)
 */

__int64 __fastcall UmfdDestroyFont(__int64 a1)
{
  void *CachedGlyphAttrs; // rax
  void *v3; // rax
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF

  CachedGlyphAttrs = (void *)FONTOBJ_GetCachedGlyphAttrs(a1, 0LL);
  if ( CachedGlyphAttrs )
  {
    EngFreeMem(CachedGlyphAttrs);
    FONTOBJ_SetCachedGlyphAttrs(a1, 0LL, 0LL);
  }
  v3 = (void *)FONTOBJ_GetCachedGlyphAttrs(a1, 1LL);
  if ( v3 )
  {
    EngFreeMem(v3);
    FONTOBJ_SetCachedGlyphAttrs(a1, 1LL, 0LL);
  }
  FontDriverDdiRequest::FontDriverDdiRequest(v5, 3LL);
  v5[6] = 0LL;
  v5[0] = &DestroyFontRequest::`vftable';
  v5[5] = a1;
  return UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL), v5);
}
