/*
 * XREFs of _FONTOBJ_GetCachedGlyphAttrs@8 @ 0xD0C52
 * Callers:
 *     _UmfdDestroyFont@4 @ 0xD0BEA (_UmfdDestroyFont@4.c)
 *     _UmfdQueryGlyphAttrs@8 @ 0x24A82E (_UmfdQueryGlyphAttrs@8.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 */

int __fastcall FONTOBJ_GetCachedGlyphAttrs(int a1, int a2)
{
  int v2; // esi
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  v2 = *(_DWORD *)(a1 + 4 * a2 + 828);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
