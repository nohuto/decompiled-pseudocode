/*
 * XREFs of _GreQueryFonts@12 @ 0x1D905B
 * Callers:
 *     _NtGdiQueryFonts@12 @ 0x213BD4 (_NtGdiQueryFonts@12.c)
 * Callees:
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QAEHPAU_UNIVERSAL_FONT_ID@@KPAT_LARGE_INTEGER@@@Z @ 0x1D0555 (-QueryFonts@PUBLIC_PFTOBJ@@QAEHPAU_UNIVERSAL_FONT_ID@@KPAT_LARGE_INTEGER@@@Z.c)
 */

unsigned int __fastcall GreQueryFonts(struct _UNIVERSAL_FONT_ID *a1, unsigned int a2, union _LARGE_INTEGER *a3)
{
  struct _FONTHASH **v4; // [esp+0h] [ebp-4h] BYREF

  v4 = gpPFTPublic;
  return PUBLIC_PFTOBJ::QueryFonts((PUBLIC_PFTOBJ *)&v4, a1, a2, a3);
}
