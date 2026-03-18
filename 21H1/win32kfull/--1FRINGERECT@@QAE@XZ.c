/*
 * XREFs of ??1FRINGERECT@@QAE@XZ @ 0x55340
 * Callers:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 * Callees:
 *     ?vDIBSolidBlt@@YGXPAVSURFACE@@PAU_RECTL@@PAU_CLIPOBJ@@KH@Z @ 0x55928 (-vDIBSolidBlt@@YGXPAVSURFACE@@PAU_RECTL@@PAU_CLIPOBJ@@KH@Z.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z @ 0xF6EBC (--0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QAE@XZ @ 0xF6F23 (--1UMPDReleaseAcquireRFONTSem@@QAE@XZ.c)
 */

void __thiscall FRINGERECT::~FRINGERECT(FRINGERECT *this)
{
  int v3; // eax
  struct SURFACE *v4; // ecx
  struct SURFACE *v5; // edi
  int v6; // edi
  BOOL (__stdcall *v7)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // ecx
  RECTL *i; // ebx
  unsigned int v9; // [esp+0h] [ebp-60h]
  int v10; // [esp+4h] [ebp-5Ch]
  _DWORD v11[2]; // [esp+Ch] [ebp-54h] BYREF
  BOOL (__stdcall *v12)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // [esp+14h] [ebp-4Ch]
  _BYTE v13[68]; // [esp+18h] [ebp-48h] BYREF

  if ( *((_DWORD *)this + 1) )
  {
    while ( --*((_DWORD *)this + 4) >= 0 )
      vDIBSolidBlt(*((struct SURFACE **)this + 2), **((struct _RECTL ***)this + 3), 0, v9, v10);
  }
  else
  {
    v3 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v13,
      *(struct SURFACE **)this,
      *((struct _FONTOBJ **)this + 21),
      v3);
    v4 = *(struct SURFACE **)this;
    v5 = *(struct SURFACE **)this;
    v11[0] = 0;
    v11[1] = 0;
    v6 = v5 != 0 ? (unsigned int)v4 + 16 : 0;
    if ( (*((_BYTE *)v4 + 72) & 1) != 0 )
      v7 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_DWORD *)v4 + 7) + 1972);
    else
      v7 = EngBitBlt;
    v12 = v7;
    for ( i = (RECTL *)((char *)this + 20); i < (RECTL *)((char *)this + 16 * *((_DWORD *)this + 4) + 20); ++i )
    {
      v7((SURFOBJ *)v6, 0, 0, *((CLIPOBJ **)this + 2), 0, i, 0, 0, *((BRUSHOBJ **)this + 3), (POINTL *)v11, 61680);
      v7 = v12;
    }
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v13);
  }
}
