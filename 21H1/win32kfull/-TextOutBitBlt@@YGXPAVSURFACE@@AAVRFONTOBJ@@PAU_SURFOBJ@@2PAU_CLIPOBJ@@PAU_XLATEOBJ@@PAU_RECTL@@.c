/*
 * XREFs of ?TextOutBitBlt@@YGXPAVSURFACE@@AAVRFONTOBJ@@PAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x2109B2
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ?EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x1EFC42 (-EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_REC.c)
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

void __userpurge TextOutBitBlt(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct SURFACE *a3,
        struct RFONTOBJ *a4,
        CLIPOBJ *a5,
        struct _SURFOBJ *a6,
        RECTL *a7,
        struct _XLATEOBJ *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        struct _POINTL *a11,
        struct _BRUSHOBJ *a12,
        struct _POINTL *a13,
        unsigned int a14)
{
  PATHOBJ *v14; // esi
  int v16; // eax
  int v17; // eax
  unsigned int *v18; // [esp+0h] [ebp-58h]
  int **v19; // [esp+4h] [ebp-54h]
  struct RFONTOBJ *v20; // [esp+1Ch] [ebp-3Ch] BYREF
  struct UMPDOBJ *v21; // [esp+20h] [ebp-38h] BYREF
  int v22; // [esp+24h] [ebp-34h]
  unsigned int v23; // [esp+28h] [ebp-30h] BYREF
  unsigned int v24[10]; // [esp+2Ch] [ebp-2Ch] BYREF

  v14 = (PATHOBJ *)v24;
  v22 = 0;
  v16 = *(_DWORD *)(a2 + 28);
  v20 = 0;
  v21 = 0;
  v23 = (unsigned int)v24;
  if ( (*(_DWORD *)(v16 + 24) & 0x8080) == 0x8080 && *a1 )
  {
    v17 = UMPDReleaseRFONTSem((struct RFONTOBJ *)&v20, (struct UMPDOBJ *)&v21, &v23, v18, v19);
    v14 = (PATHOBJ *)v23;
    v22 = v17;
  }
  if ( (*(_BYTE *)(a2 + 72) & 1) != 0 )
    (*(void (__stdcall **)(int, _DWORD, _DWORD, CLIPOBJ *, _DWORD, RECTL *, _DWORD, _DWORD, struct _POINTL *, struct _POINTL *, int))(*(_DWORD *)(a2 + 28) + 1972))(
      a2 != 0 ? a2 + 16 : 0,
      0,
      0,
      a5,
      0,
      a7,
      0,
      0,
      a10,
      a11,
      61680);
  else
    EngBitBlt(a2 != 0 ? (SURFOBJ *)(a2 + 16) : 0, 0, 0, a5, 0, a7, 0, 0, (BRUSHOBJ *)a10, a11, 61680);
  if ( v22 )
  {
    UMPDAcquireRFONTSem(v20, v21, (unsigned int)v14, (unsigned int)v18, (const int *)v19);
    if ( v14 )
    {
      if ( v14 != (PATHOBJ *)v24 )
        Win32FreePool(v14);
    }
  }
}
