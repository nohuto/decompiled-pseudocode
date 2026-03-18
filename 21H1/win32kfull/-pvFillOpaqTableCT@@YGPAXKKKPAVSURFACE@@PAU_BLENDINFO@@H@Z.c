/*
 * XREFs of ?pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z @ 0x83544
 * Callers:
 *     _vSrcTranCopyS8D32@44 @ 0x832F0 (_vSrcTranCopyS8D32@44.c)
 *     ?vSrcTranCopyS8D16New@@YGXPAEJJ0JJJJKKPAVSURFACE@@P6GXPBE00JPAPAG@Z0@Z @ 0x1D5304 (-vSrcTranCopyS8D16New@@YGXPAEJJ0JJJJKKPAVSURFACE@@P6GXPBE00JPAPAG@Z0@Z.c)
 *     _vSrcOpaqCopyS8D16@44 @ 0x1D5A7B (_vSrcOpaqCopyS8D16@44.c)
 *     _vSrcOpaqCopyS8D24@44 @ 0x1D5B54 (_vSrcOpaqCopyS8D24@44.c)
 *     _vSrcTranCopyS8D24@44 @ 0x1D6E22 (_vSrcTranCopyS8D24@44.c)
 * Callees:
 *     ?vGetBlendInfo@@YGXKPAVSURFACE@@KPAU_BLENDINFO@@@Z @ 0x835B8 (-vGetBlendInfo@@YGXKPAVSURFACE@@KPAU_BLENDINFO@@@Z.c)
 *     ?vClearTypeLookupTableLoop@@YGXKPAVSURFACE@@PAU_BLENDINFO@@KK@Z @ 0x8372C (-vClearTypeLookupTableLoop@@YGXKPAVSURFACE@@PAU_BLENDINFO@@KK@Z.c)
 */

unsigned int **__userpurge pvFillOpaqTableCT@<eax>(
        struct SURFACE *a1@<edx>,
        struct _BLENDINFO *a2,
        void **a3,
        struct SURFACE *a4,
        struct SURFACE *a5,
        struct _BLENDINFO *a6,
        int a7)
{
  char v8; // bl
  unsigned int v10; // [esp+0h] [ebp-10h]
  unsigned int v11; // [esp+0h] [ebp-10h]
  struct _BLENDINFO *v12; // [esp+4h] [ebp-Ch]
  unsigned int v13; // [esp+4h] [ebp-Ch]

  if ( *a3 == hCacheCT
    && a2 == (struct _BLENDINFO *)uBCacheCT
    && a1 == (struct SURFACE *)uFCacheCT
    && gulGamma == uGammaCacheCT )
  {
    v8 = 1;
    if ( !a5 )
      return &aulCacheCT;
  }
  else
  {
    v8 = 0;
  }
  vGetBlendInfo((unsigned int)a1, a4, v10, v12);
  if ( !v8 )
    vClearTypeLookupTableLoop((unsigned int)a4, a1, a2, v11, v13);
  return &aulCacheCT;
}
