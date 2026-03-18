/*
 * XREFs of _UmfdDestroyFont@4 @ 0xD0BEA
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 *     _FONTOBJ_GetCachedGlyphAttrs@8 @ 0xD0C52 (_FONTOBJ_GetCachedGlyphAttrs@8.c)
 */

int __stdcall UmfdDestroyFont(_DWORD *a1)
{
  void *CachedGlyphAttrs; // eax
  void *v2; // eax
  int v4; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v5[8]; // [esp+10h] [ebp-20h] BYREF

  CachedGlyphAttrs = (void *)FONTOBJ_GetCachedGlyphAttrs(a1, 0);
  if ( CachedGlyphAttrs )
  {
    EngFreeMem(CachedGlyphAttrs);
    a1[207] = 0;
    v4 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  }
  v2 = (void *)FONTOBJ_GetCachedGlyphAttrs(a1, 1);
  if ( v2 )
  {
    EngFreeMem(v2);
    a1[208] = 0;
    v4 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  }
  FontDriverDdiRequest::FontDriverDdiRequest(v5, 3);
  v5[0] = &DestroyFontRequest::`vftable';
  v5[7] = 0;
  v5[6] = a1;
  return UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1[5] + 4), (int)v5);
}
