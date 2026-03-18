/*
 * XREFs of _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22
 * Callers:
 *     ?vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRUSHOBJ@@PAU_POINTL@@@Z @ 0x553A0 (-vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRU.c)
 * Callees:
 *     ?vSrcCopyS1D32@@YGXPAUBLTINFO@@@Z @ 0x4DFCC (-vSrcCopyS1D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YGXPAUBLTINFO@@@Z @ 0x4FE30 (-vSrcCopyS1D1LtoR@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z @ 0x52550 (-vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D32@@YGXPAUBLTINFO@@@Z @ 0x97606 (-vSrcCopyS24D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vOrAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0xA3BA8 (-vOrAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z.c)
 *     ?vSrcCopyS32D24@@YGXPAUBLTINFO@@@Z @ 0xA7E1A (-vSrcCopyS32D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z @ 0xAAD26 (-vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z.c)
 *     _GreAssertSystemCriticalProcess@4 @ 0xB5596 (_GreAssertSystemCriticalProcess@4.c)
 *     ?vSrcCopyS4D1@@YGXPAUBLTINFO@@@Z @ 0xB9616 (-vSrcCopyS4D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D32@@YGXPAUBLTINFO@@@Z @ 0xB9BDC (-vSrcCopyS8D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4@@YGXPAUBLTINFO@@@Z @ 0xBA4D8 (-vSrcCopyS4D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8@@YGXPAUBLTINFO@@@Z @ 0xBA604 (-vSrcCopyS8D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D4@@YGXPAUBLTINFO@@@Z @ 0xBB026 (-vSrcCopyS1D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4Identity@@YGXPAUBLTINFO@@@Z @ 0xBFDC2 (-vSrcCopyS4D4Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D8@@YGXPAUBLTINFO@@@Z @ 0xC2E4E (-vSrcCopyS1D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D32@@YGXPAUBLTINFO@@@Z @ 0xC594C (-vSrcCopyS4D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D1@@YGXPAUBLTINFO@@@Z @ 0xC5A46 (-vSrcCopyS32D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D16@@YGXPAUBLTINFO@@@Z @ 0xFB94C (-vSrcCopyS24D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YGXPAUBLTINFO@@@Z @ 0xFBC32 (-vSrcCopyS32D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vOrNonAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0x1D51C0 (-vOrNonAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z.c)
 *     ?vOrNonAlignedGrayGlyphOdd@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0x1D5252 (-vOrNonAlignedGrayGlyphOdd@@YGXPAU_GLYPHBITS@@IPAEI@Z.c)
 *     ?vSrcCopyS16D1@@YGXPAUBLTINFO@@@Z @ 0x22F795 (-vSrcCopyS16D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YGXPAUBLTINFO@@@Z @ 0x22F886 (-vSrcCopyS1D1RtoL@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D1@@YGXPAUBLTINFO@@@Z @ 0x22FBD9 (-vSrcCopyS24D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D1@@YGXPAUBLTINFO@@@Z @ 0x22FCCF (-vSrcCopyS8D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D4@@YGXPAUBLTINFO@@@Z @ 0x22FDAD (-vSrcCopyS16D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D4@@YGXPAUBLTINFO@@@Z @ 0x22FEBE (-vSrcCopyS24D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D4@@YGXPAUBLTINFO@@@Z @ 0x230060 (-vSrcCopyS32D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D4@@YGXPAUBLTINFO@@@Z @ 0x230198 (-vSrcCopyS8D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D8@@YGXPAUBLTINFO@@@Z @ 0x230289 (-vSrcCopyS16D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D8@@YGXPAUBLTINFO@@@Z @ 0x23043F (-vSrcCopyS24D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D8@@YGXPAUBLTINFO@@@Z @ 0x23064A (-vSrcCopyS32D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D8@@YGXPAUBLTINFO@@@Z @ 0x2307EB (-vSrcCopyS4D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YGXPAUBLTINFO@@@Z @ 0x2308A5 (-vSrcCopyS8D8IdentityLtoR@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z @ 0x2308FB (-vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YGXPAUBLTINFO@@@Z @ 0x230957 (-vSrcCopyS16D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YGXPAUBLTINFO@@@Z @ 0x230B4E (-vSrcCopyS16D16Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D16@@YGXPAUBLTINFO@@@Z @ 0x230BCA (-vSrcCopyS1D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D16@@YGXPAUBLTINFO@@@Z @ 0x2310EA (-vSrcCopyS4D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D16@@YGXPAUBLTINFO@@@Z @ 0x2311A5 (-vSrcCopyS8D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YGXPAUBLTINFO@@@Z @ 0x231257 (-vSrcCopyS16D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D24@@YGXPAUBLTINFO@@@Z @ 0x2313BE (-vSrcCopyS1D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24@@YGXPAUBLTINFO@@@Z @ 0x2319E5 (-vSrcCopyS24D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D24@@YGXPAUBLTINFO@@@Z @ 0x231BD8 (-vSrcCopyS4D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D24@@YGXPAUBLTINFO@@@Z @ 0x231DA2 (-vSrcCopyS8D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D32@@YGXPAUBLTINFO@@@Z @ 0x231ED5 (-vSrcCopyS16D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32@@YGXPAUBLTINFO@@@Z @ 0x232050 (-vSrcCopyS32D32@@YGXPAUBLTINFO@@@Z.c)
 */

void __stdcall draw_gray_nf_ntb_o_to_temp_start(
        unsigned int a1,
        int a2,
        int a3,
        char a4,
        unsigned int a5,
        int a6,
        int a7)
{
  _BYTE *v7; // edx
  bool v8; // zf
  unsigned int v9; // [esp+8h] [ebp+8h]
  unsigned int v10; // [esp+Ch] [ebp+Ch]

  if ( a1 < a1 + 16 * a2 )
  {
    v7 = (_BYTE *)(a1 + 8);
    v9 = a1 + 8;
    v10 = ((unsigned int)(16 * a2 - 1) >> 4) + 1;
    do
    {
      ((void (__stdcall *)(struct BLTINFO *))(&(&apfnGray)[2 * ((***((_BYTE ***)v7 - 1) + *v7 - a4) & 1)])[*(_DWORD *)(**((_DWORD **)v7 - 1) + 8) & 1])(**((struct BLTINFO ***)v7 - 1));
      v7 = (_BYTE *)(v9 + 16);
      v8 = v10-- == 1;
      v9 += 16;
    }
    while ( !v8 );
  }
}
