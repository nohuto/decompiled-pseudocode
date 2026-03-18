/*
 * XREFs of ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026F604
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0053254 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0029AD8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngCopyBits @ 0x1C00D10E0 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C026FB88 (-vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z.c)
 */

__int64 __fastcall bSpDwmUpdateMaskCursor(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *psoSrc,
        struct _RECTL *a6,
        unsigned int *a7,
        struct SFMLOGICALSURFACE **a8)
{
  LONG cy; // eax
  unsigned int DIB; // r14d
  RECTL v11; // xmm0
  __int64 v12; // r13
  SURFOBJ *v13; // rax
  SURFOBJ *v14; // r15
  struct DWMSPRITE *v15; // rdx
  struct SFMLOGICALSURFACE *v16; // r8
  HDEV v17; // rcx
  SURFOBJ *psoDest; // [rsp+60h] [rbp-91h] BYREF
  XLATEOBJ *pxlo; // [rsp+68h] [rbp-89h] BYREF
  XLATEOBJ *v21; // [rsp+70h] [rbp-81h] BYREF
  __int64 v22; // [rsp+78h] [rbp-79h] BYREF
  char v23; // [rsp+80h] [rbp-71h]
  int v24; // [rsp+84h] [rbp-6Dh]
  __int64 v25; // [rsp+88h] [rbp-69h] BYREF
  char v26; // [rsp+90h] [rbp-61h]
  int v27; // [rsp+94h] [rbp-5Dh]
  _DWORD v28[2]; // [rsp+98h] [rbp-59h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp-51h]
  int v30; // [rsp+A4h] [rbp-4Dh]
  __int64 v31; // [rsp+A8h] [rbp-49h]
  __int64 v32; // [rsp+B0h] [rbp-41h]
  struct DWMSPRITE *v33; // [rsp+B8h] [rbp-39h]
  struct SFMLOGICALSURFACE **v34; // [rsp+C0h] [rbp-31h]
  struct SFMLOGICALSURFACE *v35; // [rsp+C8h] [rbp-29h]
  HDEV v36; // [rsp+D0h] [rbp-21h]
  RECTL prclDest; // [rsp+D8h] [rbp-19h] BYREF

  v34 = a8;
  v28[1] = a4->sizlBitmap.cx;
  cy = a4->sizlBitmap.cy;
  v35 = a3;
  v33 = a2;
  v36 = a1;
  v30 = 0;
  v32 = 1LL;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  v28[0] = 6;
  v29 = cy;
  v31 = 0LL;
  DIB = SURFMEM::bCreateDIB((SURFMEM *)&v25, (struct _DEVBITMAPINFO *)v28, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( DIB )
  {
    if ( psoSrc )
    {
      v29 >>= 1;
      DIB = SURFMEM::bCreateDIB((SURFMEM *)&v22, (struct _DEVBITMAPINFO *)v28, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    }
    if ( DIB )
    {
      v11 = *a6;
      v21 = 0LL;
      pxlo = 0LL;
      v12 = (v25 + 24) & -(__int64)(v25 != 0);
      prclDest = v11;
      v13 = (SURFOBJ *)((v22 + 24) & -(__int64)(v22 != 0));
      psoDest = v13;
      if ( v22 )
      {
        v14 = psoDest;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&pxlo,
                             0LL,
                             0,
                             (__int64)psoSrc[1].hdev,
                             (__int64)gppalRGB,
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0xFFFFFF,
                             0,
                             0) )
          DIB = EngCopyBits(psoDest, psoSrc, 0LL, pxlo, &prclDest, (POINTL *)&prclDest);
      }
      else
      {
        v14 = v13;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v21,
                           0LL,
                           0,
                           (__int64)ppalMono,
                           (__int64)gppalRGB,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        prclDest.bottom += a4->sizlBitmap.cy >> 1;
        DIB = EngCopyBits((SURFOBJ *)v12, a4, 0LL, v21, &prclDest, (POINTL *)&prclDest);
      }
      if ( DIB )
      {
        LODWORD(psoDest) = 0;
        vSpDwmMaskToARGB((struct _SURFOBJ *)v12, v14, (int *)&psoDest);
        v15 = v33;
        v16 = v35;
        v17 = v36;
        *((_DWORD *)v33 + 41) = ((_DWORD)psoDest != 0 ? 4 : 0) | *((_DWORD *)v33 + 41) & 0xFFFFFFFB;
        prclDest.top += a4->sizlBitmap.cy >> 1;
        DIB = bSpDwmUpdateSpriteShape(
                v17,
                v15,
                v16,
                (struct _SURFOBJ *)v12,
                &prclDest,
                *(struct PALETTE **)(v12 + 104),
                a7,
                0LL,
                v34);
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v22);
  SURFMEM::~SURFMEM((SURFMEM *)&v25);
  return DIB;
}
