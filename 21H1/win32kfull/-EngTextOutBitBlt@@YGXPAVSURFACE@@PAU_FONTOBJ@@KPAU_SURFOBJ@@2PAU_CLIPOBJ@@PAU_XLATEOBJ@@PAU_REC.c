/*
 * XREFs of ?EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x1EFC42
 * Callers:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 * Callees:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z @ 0xF6EBC (--0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QAE@XZ @ 0xF6F23 (--1UMPDReleaseAcquireRFONTSem@@QAE@XZ.c)
 *     ?TextOutBitBlt@@YGXPAVSURFACE@@AAVRFONTOBJ@@PAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x2109B2 (-TextOutBitBlt@@YGXPAVSURFACE@@AAVRFONTOBJ@@PAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@.c)
 */

void __userpurge EngTextOutBitBlt(
        struct _FONTOBJ *a1@<edx>,
        int a2@<ecx>,
        struct SURFACE *a3,
        struct _FONTOBJ *a4,
        unsigned int a5,
        CLIPOBJ *pco,
        struct _SURFOBJ *a7,
        struct _CLIPOBJ *a8,
        struct _XLATEOBJ *a9,
        struct _RECTL *a10,
        struct _POINTL *a11,
        struct _POINTL *a12,
        struct _BRUSHOBJ *a13,
        struct _POINTL *a14,
        unsigned int a15)
{
  int v17; // eax
  struct SURFACE *v18; // ecx
  struct _POINTL *v19; // [esp+0h] [ebp-6Ch]
  unsigned int v20; // [esp+4h] [ebp-68h]
  int v21; // [esp+1Ch] [ebp-50h] BYREF
  _BYTE v22[68]; // [esp+20h] [ebp-4Ch] BYREF

  if ( ((unsigned __int8)a3 & 0x10) != 0 )
  {
    v17 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v22,
      (struct SURFACE *)a2,
      a1,
      v17);
    TextOutBitBlt(
      v18,
      v18,
      (struct _SURFOBJ *)pco,
      (struct _SURFOBJ *)v18,
      a8,
      (struct _XLATEOBJ *)v18,
      (struct _RECTL *)v18,
      a11,
      a12,
      (struct _BRUSHOBJ *)v18,
      v19,
      v20);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v22);
    v21 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
  }
  else
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v22,
      (struct SURFACE *)a2,
      a1,
      1);
    EngBitBlt(a2 != 0 ? (SURFOBJ *)(a2 + 16) : 0, 0, 0, pco, 0, (RECTL *)a8, 0, 0, (BRUSHOBJ *)a11, a12, 0xF0F0u);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v22);
  }
}
